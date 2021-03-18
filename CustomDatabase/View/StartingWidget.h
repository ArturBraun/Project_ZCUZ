#ifndef STARTINGWIDGET_H
#define STARTINGWIDGET_H

#include <QWidget>
#include "ui_StartingWidget.h"

class StartingWidget : public QWidget
{
	Q_OBJECT

public:
	StartingWidget(QWidget *parent = Q_NULLPTR);
	~StartingWidget();

private:
	Ui::StartingWidget ui;
};

#endif STARTINGWIDGET_H
