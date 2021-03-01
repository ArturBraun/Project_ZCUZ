#ifndef MAINWINDOW
#define MAINWINDOW

#include <QtWidgets/QMainWindow>
#include "ui_MainWindow.h"
#include <memory>
#include "Controller/Controller.h"
#include "View/AbstractView.h"
#include "View/StartingWidget.h"
#include "View/ChooseTableWidget.h"
#include "View/AddTableWidget.h"
#include "View/EditTableWidget.h"
#include "View/ShowTableView.h"

class MainWindow : public QMainWindow, public AbstractView
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = Q_NULLPTR);

    void setController(std::shared_ptr<Controller> controllerPtr);

public slots:
    void deleteTableClicked();
    void editRowsClicked();
    void showTableClicked();
    void addTableClicked();
    void createNewTableClicked(std::string& tableName, ColumnsData& columnsData);

    void restoreDefaultView();   
    void tableChosen(int tableId, std::string viewType);

protected:
    void setCentralChildWidget(std::string& buttonText, std::string& viewType);

private:
    Ui::MainWindowClass ui;
    QWidget* centralChild;
    std::shared_ptr<Controller> controllerPtr;
};

#endif
