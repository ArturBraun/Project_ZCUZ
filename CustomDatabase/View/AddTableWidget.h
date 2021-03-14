#ifndef ADDTABLEWIDGET
#define ADDTABLEWIDGET

#include <QWidget>
#include "ui_AddTableWidget.h"
#include "../CommonDictionary.h"
#include <qmessagebox.h>
#include "../Controller/Controller.h"

//! Class responsible for GUI for creating new table
class AddTableWidget : public QWidget
{
	Q_OBJECT

public:
	//! Class constructor. It sets also pointer to controller class
	AddTableWidget(std::shared_ptr<Controller> controllerPtr, QWidget *parent = Q_NULLPTR);
	//! Default destructor
	~AddTableWidget();

public slots:
	//! Public slot which is run when cancel button is clicked
	void cancelButtonClicked();
	//! Public slot which is run when save button is clicked
	void saveButtonClicked();
	//! Public slot which is run when add column button is clicked
	void addColumnButtonClicked();
	//! Public slot which is run when delete column button is clicked
	void deleteColumnButtonClicked();

protected:
	//! Helper function responsible for creating new table item in GUI
	void createNewTableItem(int x, int y, std::string& text);

signals:
	//! Signal that is emitted when user ends action in this widget by clicking suitable button
	void restoreDefaultWidget();

private:
	//! Qt user interface variable
	Ui::AddTableWidget ui;
	//! Pointer to controller class
	std::shared_ptr<Controller> controllerPtr;
};

#endif ADDTABLEWIDGET
