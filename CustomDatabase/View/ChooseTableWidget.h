#ifndef CHOOSETABLEWIDGET_H
#define CHOOSETABLEWIDGET_H

#include <QWidget>
#include "ui_ChooseTableWidget.h"
#include <string>
#include "../MainWindow.h"
#include "../Controller/Controller.h"

//! Class that represents reusable user interface to select the table.
class ChooseTableWidget : public QWidget
{
	Q_OBJECT

public:
	//! Class constructor
	/*! Arguments:
	buttonText - text which is displayed on button that accepts the choice
	viewType - flag which says from which source this widget was displayed */
	ChooseTableWidget(std::string& buttonText, std::string& viewType, std::shared_ptr<Controller> controllerPtr, QWidget *parent = Q_NULLPTR);
	//! Class destructor
	~ChooseTableWidget();

public slots:
	//! Function which is run when cancel button is clicked
	void cancelButtonClicked();
	//! Function which is run when acceptance button is clicked
	void okButtonClicked();

signals:
	//! Signal which is emitted to parent to restore default view
	void restoreDefaultWidget();
	//! Signal which is emitted when table is chosen.
	/*! tableId - says which table was choosed
	* viewType - flag which says from which source this widget was displayed
	*/
	void tableChosen(int tableId, std::string viewType);

private:
	//! Variable that represents user interface objects
	Ui::ChooseTableWidget ui;
	//! Pointer to controller
	std::shared_ptr<Controller> controllerPtr;
	//! flag which says from which source this widget was displayed
	std::string viewType;
};

#endif CHOOSETABLEWIDGET_H