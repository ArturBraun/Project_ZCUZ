#include "ShowTableView.h"

ShowTableView::ShowTableView(int currentTableId, std::shared_ptr<Controller> controllerPtr, QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);

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
		ui.columnNameQComboBox->addItem(QString::fromStdString(this->currentTable->getColumnName(i)));
	}
	ui.tableQTableWidget->setHorizontalHeaderLabels(columnNamesQStringList);
	ui.tableQTableWidget->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
	ui.columnNameQComboBox->setCurrentIndex(0);

	QObject::connect(ui.sortQPushButton, &QPushButton::clicked, this, &ShowTableView::sortPushButtonClicked);

	// Load sorted rows by order of addition
	this->loadSortedRowsIntoGui(0);
}

ShowTableView::~ShowTableView()
{

}

void ShowTableView::loadSortedRowsIntoGui(int sortingColumnId, bool sortDescending)
{
	//delete all table rows
	ui.tableQTableWidget->setRowCount(0);

	//insert new rows into table
	std::vector<Row> rows = this->currentTable->getSortedRows(sortingColumnId, sortDescending);
	for (int rowId = 0; rowId < rows.size(); ++rowId)
	{
		ui.tableQTableWidget->insertRow(rowId);
		for (int columnId = 0; columnId < ui.tableQTableWidget->columnCount(); ++columnId)
		{
			std::string columnType = this->currentTable->getColumnType(columnId);

			if (columnType == TYPE_STRING)
			{
				this->createNewTableItem(rowId, columnId, QString::fromStdString(rows[rowId].getValueForColumn<std::string>(columnId)));
			}
			else if (columnType == TYPE_DOUBLE)
			{
				this->createNewTableItem(rowId, columnId, QString::number(rows[rowId].getValueForColumn<double>(columnId)));
			}
			else if (columnType == TYPE_INT)
			{
				this->createNewTableItem(rowId, columnId, QString::number(rows[rowId].getValueForColumn<int>(columnId)));
			}
		}
	}

}

void ShowTableView::createNewTableItem(int x, int y, QString& text)
{
	QTableWidgetItem* item = new QTableWidgetItem(text);
	ui.tableQTableWidget->setItem(x, y, item);
	item->setFlags(item->flags() & ~Qt::ItemIsEditable);
}

void ShowTableView::sortPushButtonClicked()
{
	this->loadSortedRowsIntoGui(ui.columnNameQComboBox->currentIndex(), ui.descendingQRadioButton->isChecked());
}


