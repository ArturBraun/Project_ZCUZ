#include "AddTableWidget.h"

AddTableWidget::AddTableWidget(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);

	ui.columnTypeQComboBox->addItem(QString::fromStdString(TYPE_STRING));
	ui.columnTypeQComboBox->addItem(QString::fromStdString(TYPE_DOUBLE));
	ui.columnTypeQComboBox->addItem(QString::fromStdString(TYPE_INT));
	ui.columnTypeQComboBox->setCurrentIndex(0);

	ui.tableQTableWidget->setColumnCount(2);
	ui.tableQTableWidget->setHorizontalHeaderLabels(QStringList() << "nazwa kolumny" << "typ danych");
	ui.tableQTableWidget->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);

	ui.tableQTableWidget->insertRow(0);
	this->createNewTableItem(0, 0, std::string("id wiersza"));
	this->createNewTableItem(0, 1, TYPE_INT);

	QObject::connect(ui.cancelQPushButton, &QPushButton::clicked, this, &AddTableWidget::cancelButtonClicked);
	QObject::connect(ui.saveQPushButton, &QPushButton::clicked, this, &AddTableWidget::saveButtonClicked);
	QObject::connect(ui.addColumnQPushButton, &QPushButton::clicked, this, &AddTableWidget::addColumnButtonClicked);
	QObject::connect(ui.deleteColumnQPushButton, &QPushButton::clicked, this, &AddTableWidget::deleteColumnButtonClicked);
}

void AddTableWidget::createNewTableItem(int x, int y, std::string& text)
{
	QTableWidgetItem* item = new QTableWidgetItem(QString::fromStdString(text));
	ui.tableQTableWidget->setItem(x,y,item);
	item->setFlags(item->flags() & ~Qt::ItemIsEditable);
}

AddTableWidget::~AddTableWidget()
{

}

void AddTableWidget::cancelButtonClicked()
{
	emit restoreDefaultWidget();
}

void AddTableWidget::saveButtonClicked()
{
	std::string errorMessage = "";
	bool errorAppeared = false;

	if (ui.tableNameQLineEdit->text().isEmpty())
	{
		errorAppeared = true;
		errorMessage += "Nazwa tabeli nie moze byc pusta.\n";
	}
	if (ui.tableQTableWidget->rowCount() < 2)
	{
		errorAppeared = true;
		errorMessage += "Tabela nie moze zawierac tylko kolumny 'id wiersza'. Nalezy dodac wiecej kolumn.\n";
	}

	if (!errorAppeared)
	{
		ColumnsData columnsData;
		for (int i = 0; i < ui.tableQTableWidget->rowCount(); ++i)
		{
			std::pair<std::string, std::string> columnData = std::make_pair(ui.tableQTableWidget->item(i,0)->text().toStdString(), ui.tableQTableWidget->item(i, 1)->text().toStdString());
			columnsData[i] = columnData;
		}

		emit createNewTable(ui.tableNameQLineEdit->text().toStdString(), columnsData);
	}
	else
	{
		int ret = QMessageBox::critical(this, tr("Blad"),
					tr(errorMessage.c_str()),
					QMessageBox::Ok);
	}

}

void AddTableWidget::addColumnButtonClicked()
{
	if (!ui.columnNameQLineEdit->text().isEmpty())
	{
		std::string columnName = ui.columnNameQLineEdit->text().simplified().toStdString();
		bool nameIsAlreadyUsed = false;
		for (int rowId = 0; rowId < ui.tableQTableWidget->rowCount(); ++rowId)
		{
			if (ui.tableQTableWidget->item(rowId, 0)->text().toStdString() == columnName)
			{
				nameIsAlreadyUsed = true;
				break;
			}
		}

		if (!nameIsAlreadyUsed)
		{
			std::string columnType = ui.columnTypeQComboBox->currentText().toStdString();
			int newRowId = ui.tableQTableWidget->rowCount();

			ui.tableQTableWidget->insertRow(newRowId);
			this->createNewTableItem(newRowId, 0, columnName);
			this->createNewTableItem(newRowId, 1, columnType);
		}
		else
		{
			int ret = QMessageBox::warning(this, tr("Blad"),
				tr("Istnieje juz kolumna o takiej nazwie."),
				QMessageBox::Ok);
			return;
		}

	}
	else
	{
		int ret = QMessageBox::warning(this, tr("Blad"),
			tr("Nazwa kolumny nie moze byc pusta."),
			QMessageBox::Ok);
	}
}

void AddTableWidget::deleteColumnButtonClicked()
{
	QString columnName = ui.columnNameQLineEdit->text().simplified();
	int index = -1;
	for (int rowId = 0; rowId < ui.tableQTableWidget->rowCount(); ++rowId)
	{
		if (ui.tableQTableWidget->item(rowId, 0)->text() == columnName)
		{
			index = rowId;
			break;
		}
	}
	if (index == 0)
	{
		int ret = QMessageBox::warning(this, tr("Blad"),
			tr("Usuwanie kolumny 'id wiersza' jest niedozwolone."),
			QMessageBox::Ok);
	}
	else if(index > 0) ui.tableQTableWidget->removeRow(index);
}

