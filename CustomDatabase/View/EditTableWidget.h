#ifndef EDITTABLEWIDGET_H
#define EDITTABLEWIDGET_H


#include <QWidget>
#include "ui_EditTableWidget.h"
#include "../Controller/Controller.h"
#include <qmessagebox.h>
#include <vector>
#include <string>
#include "../Controller/Row.h"

class EditTableWidget : public QWidget
{
	Q_OBJECT

public:
	EditTableWidget(int currentTableId, std::shared_ptr<Controller> controllerPtr, QWidget *parent = Q_NULLPTR);
	~EditTableWidget();

	void addRowToggled();
	void deleteRowToggled();

	void addRowClicked();
	void deleteRowClicked();

	void editTableCell(int rowId, int columnId, var& newValue);
	void createGuiNewRow();
	void createNewTableItem(int x, int y, QString& text);

private:
	Ui::EditTableWidget ui;
	std::shared_ptr<Table> currentTable;
};

#endif EDITTABLEWIDGET_H
