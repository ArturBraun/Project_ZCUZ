#ifndef ADDTABLEWIDGET
#define ADDTABLEWIDGET

#include <QWidget>
#include "ui_AddTableWidget.h"
#include "../CommonDictionary.h"
#include <qmessagebox.h>
#include "../Controller/Controller.h"

class AddTableWidget : public QWidget
{
	Q_OBJECT

public:
	AddTableWidget(std::shared_ptr<Controller> controllerPtr, QWidget *parent = Q_NULLPTR);
	~AddTableWidget();

public slots:
	void cancelButtonClicked();
	void saveButtonClicked();
	void addColumnButtonClicked();
	void deleteColumnButtonClicked();

protected:
	void createNewTableItem(int x, int y, std::string& text);

signals:
	void restoreDefaultWidget();
	void createNewTable();

private:
	Ui::AddTableWidget ui;
	std::shared_ptr<Controller> controllerPtr;
};

#endif ADDTABLEWIDGET
