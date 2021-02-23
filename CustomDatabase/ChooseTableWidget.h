#ifndef CHOOSETABLEWIDGET
#define CHOOSETABLEWIDGET

#include <QWidget>
#include "ui_ChooseTableWidget.h"

class ChooseTableWidget : public QWidget
{
	Q_OBJECT

public:
	ChooseTableWidget(QWidget *parent = Q_NULLPTR);
	~ChooseTableWidget();

private:
	Ui::ChooseTableWidget ui;
};

#endif CHOOSETABLEWIDGET