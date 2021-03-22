#ifndef STARTINGWIDGET_H
#define STARTINGWIDGET_H

#include <QWidget>
#include "ui_StartingWidget.h"

//! Class that represent basic user interface widget that display message to choose from above available options
class StartingWidget : public QWidget
{
	Q_OBJECT

public:
	//! Class constructor
	StartingWidget(QWidget *parent = Q_NULLPTR);
	//! Class destructor
	~StartingWidget();

private:
	//! Qt user interface variable
	Ui::StartingWidget ui;
};

#endif STARTINGWIDGET_H
