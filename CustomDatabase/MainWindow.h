#ifndef MAINWINDOW
#define MAINWINDOW

#include <QtWidgets/QMainWindow>
#include "ui_MainWindow.h"
#include <memory>
#include "Controller/Controller.h"
#include "View/StartingWidget.h"
#include "View/ChooseTableWidget.h"
#include "View/AddTableWidget.h"
#include "View/EditTableWidget.h"
#include "View/ShowTableView.h"
#include "View/AbstractView.h"

//! Main window class representing main window in application GUI
class MainWindow : public QMainWindow, public AbstractView
{
    Q_OBJECT

public:
    //! Class constructor
    MainWindow(QWidget *parent = Q_NULLPTR);
    //! Function that sets pointer to Controller class
    void setController(std::shared_ptr<Controller> controllerPtr);

public slots:
    //! Public slot which is run when delete table button is clicked
    void deleteTableClicked();
    //! Public slot which is run when add/delete rows button is clicked
    void editRowsClicked();
    //! Public slot which is run when browse the contents of tables button is clicked
    void showTableClicked();
    //! Public slot which is run when add table button is clicked
    void addTableClicked();

    //! Public slot which is run when child widget emits restoreDefaultWidget signal
    /*! This function restores default view of main window */
    void restoreDefaultView();   
    //! Public slot which is run when child widget emits tableChosen signal
    /*! This function performs appropriate action depending on the situation in which chooseTableWidget selected the table*/
    void tableChosen(int tableId, std::string viewType);

protected:
    //! Helper function that creates and displays choseTableWdget in proper viewType
    void setCentralChildWidget(std::string& buttonText, std::string& viewType);

private:
    //! Qt user interface variable
    Ui::MainWindowClass ui;
    //! Pointer to widget displayed in center of main window
    QWidget* centralChild;
    //! Pointer to controller
    std::shared_ptr<Controller> controllerPtr;
};

#endif
