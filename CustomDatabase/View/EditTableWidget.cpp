#include "EditTableWidget.h"

EditTableWidget::EditTableWidget(int currentTableId, std::shared_ptr<Controller> controllerPtr, QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);
	ui.rowIdQSpinBox->setValue(1);
	ui.rowIdQSpinBox->setMinimum(1);
	ui.deleteQPushButton->setEnabled(false);

	this->currentTable = controllerPtr->getTablePtr(currentTableId);
	int numberOfColumns = this->currentTable->getNumberOfColumns();
	ui.tableQTableWidget->setColumnCount(numberOfColumns);
	ui.tableQTableWidget->verticalHeader()->setVisible(false);
	
	// Load Column Names
	QStringList columnNamesQStringList;
	for (int i = 0; i < numberOfColumns; ++i)
	{
		std::string shownColumnName = this->currentTable->getColumnName(i) + " (" + this->currentTable->getColumnType(i) + ")";
		columnNamesQStringList << shownColumnName.c_str();
		if(i > 0) ui.columnNameQComboBox->addItem(QString::fromStdString(this->currentTable->getColumnName(i)));
	}
	ui.tableQTableWidget->setHorizontalHeaderLabels(columnNamesQStringList);
	ui.tableQTableWidget->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
	ui.columnNameQComboBox->setCurrentIndex(0);

	//Load Existing Rows
	std::vector<Row> rows = this->currentTable->getSortedRows();
	for (int rowId = 0; rowId < rows.size(); ++rowId)
	{
		ui.tableQTableWidget->insertRow(rowId);
		for (int columnId = 0; columnId < numberOfColumns; ++columnId)
		{
			std::string colummnType = this->currentTable->getColumnType(columnId);

			if (colummnType == TYPE_STRING)
			{
				this->createNewTableItem(rowId, columnId, QString::fromStdString(rows[rowId].getValueForColumn<std::string>(columnId)));
			}
			else if (colummnType == TYPE_DOUBLE)
			{
				this->createNewTableItem(rowId, columnId, QString::number(rows[rowId].getValueForColumn<double>(columnId)));
			}
			else if (colummnType == TYPE_INT)
			{
				this->createNewTableItem(rowId, columnId, QString::number(rows[rowId].getValueForColumn<int>(columnId)));
			}
		}
	}

	// Connect signals and slots
	QObject::connect(ui.addRowQRadioButton, &QRadioButton::toggled, this, &EditTableWidget::addRowToggled);
	QObject::connect(ui.deleteRowQRadioButton, &QRadioButton::toggled, this, &EditTableWidget::deleteRowToggled);

	QObject::connect(ui.addQPushButton, &QPushButton::clicked, this, &EditTableWidget::addRowClicked);
	QObject::connect(ui.deleteQPushButton, &QPushButton::clicked, this, &EditTableWidget::deleteRowClicked);
}

void EditTableWidget::createNewTableItem(int x, int y, QString& text)
{
	QTableWidgetItem* item = new QTableWidgetItem(text);
	ui.tableQTableWidget->setItem(x, y, item);
	item->setFlags(item->flags() & ~Qt::ItemIsEditable);
}

EditTableWidget::~EditTableWidget()
{
}

void EditTableWidget::addRowToggled()
{
	ui.addQPushButton->setEnabled(true);
	ui.deleteQPushButton->setEnabled(false);
	ui.columnNameQComboBox->setEnabled(true);
	ui.valueQLineEdit->setEnabled(true);
}

void EditTableWidget::deleteRowToggled()
{
	ui.addQPushButton->setEnabled(false);
	ui.deleteQPushButton->setEnabled(true);
	ui.columnNameQComboBox->setEnabled(false);
	ui.valueQLineEdit->setEnabled(false);
}


void EditTableWidget::addRowClicked()
{
	QString newValueQString = ui.valueQLineEdit->text();	//.simplified();
	int recordId = ui.rowIdQSpinBox->value();

	if (!newValueQString.isEmpty() && recordId > 0)
	{
		int columnId = ui.columnNameQComboBox->currentIndex() + 1;
		std::string errorMessage = "", colummnType = this->currentTable->getColumnType(columnId);
		bool errorAppeared = false;
		var newValueVar;

		if (colummnType == TYPE_STRING)
		{
			newValueVar = newValueQString.toStdString();
		}
		else if (colummnType == TYPE_DOUBLE)
		{
			bool succesfulConvertion = true;
			double number = newValueQString.toDouble(&succesfulConvertion);
			if (!succesfulConvertion)
			{
				errorAppeared = true;
				errorMessage += "Wystapil blad konwersji wpisanej wartosci na typ DOUBLE.\n";
			}
			else
			{
				newValueVar = newValueQString.toDouble();
			}
		}
		else if (colummnType == TYPE_INT)
		{
			bool succesfulConvertion = true;
			int number = newValueQString.toInt(&succesfulConvertion);
			if (!succesfulConvertion)
			{
				errorAppeared = true;
				errorMessage += "Wystapil blad konwersji wpisanej wartosci na typ INT.\n";
			}
			else
			{
				newValueVar = newValueQString.toInt();
			}
		}

		if (!errorAppeared)
		{
			if (recordId > ui.tableQTableWidget->rowCount())
			{
				recordId = ui.tableQTableWidget->rowCount() + 1;
				this->currentTable->createNewRow();
				this->createGuiNewRow();
				ui.rowIdQSpinBox->setValue(ui.rowIdQSpinBox->value() + 1);
			}
			this->editTableCell(recordId, columnId, newValueVar);
		}
		else
		{
			int ret = QMessageBox::warning(this, tr("Blad"),
				tr(errorMessage.c_str()),
				QMessageBox::Ok);
		}

	}

}

void EditTableWidget::createGuiNewRow()
{
	int rowId = ui.tableQTableWidget->rowCount();
	ui.tableQTableWidget->insertRow(rowId);
	this->createNewTableItem(rowId, 0, QString::number(rowId + 1));

	for (int columnId = 1; columnId < ui.tableQTableWidget->columnCount(); ++columnId)
	{
		std::string colummnType = this->currentTable->getColumnType(columnId);

		if (colummnType == TYPE_STRING)
		{
			this->createNewTableItem(rowId, columnId, QString::fromStdString(TYPE_STRING_DEFAULT_VALUE));
		}
		else if (colummnType == TYPE_DOUBLE)
		{
			this->createNewTableItem(rowId, columnId, QString::number(TYPE_DOUBLE_DEFAULT_VALUE));
		}
		else if (colummnType == TYPE_INT)
		{
			this->createNewTableItem(rowId, columnId, QString::number(TYPE_INT_DEFAULT_VALUE));
		}
	}
}

void EditTableWidget::editTableCell(int rowId, int columnId, var& newValue)
{
	std::string colummnType = this->currentTable->getColumnType(columnId);

	if (colummnType == TYPE_STRING)
	{
		this->currentTable->updateValueInRow(rowId - 1, columnId, std::get<std::string>(newValue));
		ui.tableQTableWidget->item(rowId - 1, columnId)->setText(QString::fromStdString(std::get<std::string>(newValue)));
	}
	else if (colummnType == TYPE_DOUBLE)
	{
		this->currentTable->updateValueInRow(rowId - 1, columnId, std::get<double>(newValue));
		ui.tableQTableWidget->item(rowId - 1, columnId)->setText(QString::number(std::get<double>(newValue)));
	}
	else if (colummnType == TYPE_INT)
	{
		this->currentTable->updateValueInRow(rowId - 1, columnId, std::get<int>(newValue));
		ui.tableQTableWidget->item(rowId - 1, columnId)->setText(QString::number(std::get<int>(newValue)));
	}

}

void EditTableWidget::deleteRowClicked()
{
	int rowId = ui.rowIdQSpinBox->value();
	if (rowId > 0 && rowId <= ui.tableQTableWidget->rowCount())
	{
		this->currentTable->deleteRow(rowId - 1);
		ui.tableQTableWidget->removeRow(rowId - 1);
	}

	for (int i = rowId - 1; i < ui.tableQTableWidget->rowCount(); ++i)
	{
		ui.tableQTableWidget->item(i, 0)->setText(QString::number(i + 1));
	}

}    

