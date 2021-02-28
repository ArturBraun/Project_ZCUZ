#ifndef EDITTABLEWIDGET
#define EDITTABLEWIDGET


#include <QWidget>
#include "ui_EditTableWidget.h"
#include "Controller.h"
#include <vector>
#include <string>

class EditTableWidget : public QWidget
{
	Q_OBJECT

public:
	EditTableWidget(int currentTableId, std::shared_ptr<Controller> controllerPtr, QWidget *parent = Q_NULLPTR);
	~EditTableWidget();

private:
	Ui::EditTableWidget ui;
	std::shared_ptr<Table> currentTable;
};

#endif EDITTABLEWIDGET
