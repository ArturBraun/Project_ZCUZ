#include "ShowTableView.h"

ShowTableView::ShowTableView(int currentTableId, std::shared_ptr<Controller> controllerPtr, QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);

	this->currentTable = controllerPtr->getTablePtr(currentTableId);
	int numberOfColumns = this->currentTable->getNumberOfColumns();
	ui.tableQTableWidget->setColumnCount(numberOfColumns);

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
}

ShowTableView::~ShowTableView()
{
}
