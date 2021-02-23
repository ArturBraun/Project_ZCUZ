#ifndef CHOOSETABLEWIDGET
#define CHOOSETABLEWIDGET

#include <QWidget>
#include "ui_ChooseTableWidget.h"
#include <string>
#include "MainWindow.h"

class ChooseTableWidget : public QWidget
{
	Q_OBJECT

public:
	ChooseTableWidget(std::string& buttonText, QWidget *parent = Q_NULLPTR);
	~ChooseTableWidget();

public slots:
	void cancelButtonClicked();

signals:
	void childWidgetCanceled();

private:
	Ui::ChooseTableWidget ui;
};

#endif CHOOSETABLEWIDGET