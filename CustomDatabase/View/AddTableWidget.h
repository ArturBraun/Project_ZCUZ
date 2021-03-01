#ifndef ADDTABLEWIDGET
#define ADDTABLEWIDGET

#include <QWidget>
#include "ui_AddTableWidget.h"
#include "CommonDictionary.h"
#include <qmessagebox.h>

class AddTableWidget : public QWidget
{
	Q_OBJECT

public:
	AddTableWidget(QWidget *parent = Q_NULLPTR);
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
	void createNewTable(std::string& tableName, ColumnsData& columnsData);

private:
	Ui::AddTableWidget ui;
};

#endif ADDTABLEWIDGET
