#ifndef STARTINGWIDGET
#define STARTINGWIDGET

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

#endif STARTINGWIDGET
