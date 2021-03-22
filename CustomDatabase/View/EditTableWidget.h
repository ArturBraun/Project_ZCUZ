#ifndef EDITTABLEWIDGET_H
#define EDITTABLEWIDGET_H


#include <QWidget>
#include "ui_EditTableWidget.h"
#include "../Controller/Controller.h"
#include <qmessagebox.h>
#include <vector>
#include <string>
#include "../Controller/Row.h"

//! Class that represents user interface responsible for editing content of tables
class EditTableWidget : public QWidget
{
	Q_OBJECT

public:
	//! Class constructor
	/*! currentTableId - id of edited table
		controllerPtr - pointer to controller class*/
	EditTableWidget(int currentTableId, std::shared_ptr<Controller> controllerPtr, QWidget *parent = Q_NULLPTR);
	//! Class destructor
	~EditTableWidget();

	//! Function which is run when add row radio button is toogled
	void addRowToggled();
	//! Function which is run when delete row radio button is toogled
	void deleteRowToggled();

	//! Function which adds row - collects data from UI and calls table's function responsible for adding / editing row
	void addRowClicked();
	//! Function which deletes row - collects data from UI and calls table's function responsible for deleting row
	void deleteRowClicked();

	//! Helper function which calls concrete table's function responsible for editing existing cell
	void editTableCell(int rowId, int columnId, var& newValue);
	//! Helper function responsible for creating new row in GUI
	void createGuiNewRow();
	//! Helper function responsible for creating new table cell in GUI
	void createNewTableItem(int x, int y, QString& text);

private:
	//! Variable that holds reference to user interface objects
	Ui::EditTableWidget ui;
	//! Pointer to current table class
	std::shared_ptr<Table> currentTable;
};

#endif EDITTABLEWIDGET_H
