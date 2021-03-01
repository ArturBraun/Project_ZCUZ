#ifndef SHOWTABLEWIDGET
#define SHOWTABLEWIDGET

#include <QWidget>
#include "ui_ShowTableView.h"
#include "../Controller/Controller.h"

class ShowTableView : public QWidget
{
	Q_OBJECT

public:
	ShowTableView(int currentTableId, std::shared_ptr<Controller> controllerPtr, QWidget *parent = Q_NULLPTR);
	~ShowTableView();

private:
	Ui::ShowTableView ui;
	std::shared_ptr<Table> currentTable;
};

#endif SHOWTABLEWIDGET
