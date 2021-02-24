#ifndef ADDTABLEWIDGET
#define ADDTABLEWIDGET

#include <QWidget>
#include "ui_AddTableWidget.h"
#include "CommonDictionary.h"

class AddTableWidget : public QWidget
{
	Q_OBJECT

public:
	AddTableWidget(QWidget *parent = Q_NULLPTR);
	~AddTableWidget();

public slots:
	void cancelButtonClicked();

signals:
	void childWidgetCanceled();

private:
	Ui::AddTableWidget ui;
};

#endif ADDTABLEWIDGET
