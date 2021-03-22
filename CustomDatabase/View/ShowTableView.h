#ifndef SHOWTABLEWIDGET_H
#define SHOWTABLEWIDGET_H

#include <QWidget>
#include "ui_ShowTableView.h"
#include "../Controller/Controller.h"
#include "../Controller/Row.h"
#include "../CommonDictionary.h"

//! Class that is responsible for displaying content of table with specfied id.
/*! It enables user to sort rows in ascending / descending order based on column id */
class ShowTableView : public QWidget
{
	Q_OBJECT

public:
	//! Class constructor
	/*! currentTableId - id of edited table
	controllerPtr - pointer to controller class*/
	ShowTableView(int currentTableId, std::shared_ptr<Controller> controllerPtr, QWidget *parent = Q_NULLPTR);
	//! Class destructor
	~ShowTableView();

	//! Helper funtion which calls table's function to sort rows and displays them in GUI
	void loadSortedRowsIntoGui(int sortingColumnId, bool sortDescending = false);
	//! Helper function responsible for creating new table cell in GUI
	void createNewTableItem(int x, int y, QString& text);
	//! Function that is called when sort push button is clicked.
	/*! It calls helper fuction loadSortedRowsIntoGui to delegate the responsibility */
	void sortPushButtonClicked();

private:
	//! Qt user interface variable
	Ui::ShowTableView ui;
	//! Pointer to current displayed table
	std::shared_ptr<Table> currentTable;
};

#endif SHOWTABLEWIDGET_H
