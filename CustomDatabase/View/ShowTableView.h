#ifndef SHOWTABLEWIDGET
#define SHOWTABLEWIDGET

#include <QWidget>
#include "ui_ShowTableView.h"
#include "../Controller/Controller.h"
#include "../Model/Row.h"
#include "../CommonDictionary.h"

class ShowTableView : public QWidget
{
	Q_OBJECT

public:
	ShowTableView(int currentTableId, std::shared_ptr<Controller> controllerPtr, QWidget *parent = Q_NULLPTR);
	~ShowTableView();

	void loadSortedRowsIntoGui(int sortingColumnId, bool sortDescending = false);
	void createNewTableItem(int x, int y, QString& text);
	void sortPushButtonClicked();

private:
	Ui::ShowTableView ui;
	std::shared_ptr<Table> currentTable;
};

#endif SHOWTABLEWIDGET
