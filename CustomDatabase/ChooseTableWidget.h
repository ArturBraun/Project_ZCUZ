#ifndef CHOOSETABLEWIDGET
#define CHOOSETABLEWIDGET

#include <QWidget>
#include "ui_ChooseTableWidget.h"
#include <string>
#include "MainWindow.h"
#include "Controller.h"

class ChooseTableWidget : public QWidget
{
	Q_OBJECT

public:
	ChooseTableWidget(std::string& buttonText, std::string& viewType, std::shared_ptr<Controller> controllerPtr, QWidget *parent = Q_NULLPTR);
	~ChooseTableWidget();

public slots:
	void cancelButtonClicked();
	void okButtonClicked();

signals:
	void restoreDefaultWidget();

private:
	Ui::ChooseTableWidget ui;
	std::shared_ptr<Controller> controllerPtr;
	std::string viewType;
};

#endif CHOOSETABLEWIDGET