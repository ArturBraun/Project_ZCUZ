#include "MainWindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    ui.setupUi(this);

    this->centralChild = new StartingWidget(this);
    ui.centralQGridLayout->addWidget(this->centralChild);  

    QObject::connect(ui.deleteTableQAction, &QAction::triggered, this, &MainWindow::deleteTableClicked);
    QObject::connect(ui.editRowsQAction, &QAction::triggered, this, &MainWindow::editRowsClicked);
    QObject::connect(ui.showTableQAction, &QAction::triggered, this, &MainWindow::showTableClicked);
    QObject::connect(ui.addTableQAction, &QAction::triggered, this, &MainWindow::addTableClicked);
}

void MainWindow::setController(std::shared_ptr<Controller> controllerPtr)
{
    this->controllerPtr = controllerPtr;
}

void MainWindow::deleteTableClicked() 
{
    this->setCentralChildWidget(DELETE_TABLE_BUTTON_TEXT, DELETE_TABLE_VIEW);
}

void MainWindow::editRowsClicked()
{
    this->setCentralChildWidget(EDIT_TABLE_BUTTON_TEXT, EDIT_TABLE_VIEW);
}

void MainWindow::showTableClicked()
{
    this->setCentralChildWidget(SHOW_TABLE_BUTTON_TEXT, SHOW_TABLE_VIEW);
}

void MainWindow::restoreDefaultView() 
{
    ui.centralQGridLayout->removeWidget(this->centralChild);
    delete this->centralChild;

    this->centralChild = new StartingWidget(this);
    ui.centralQGridLayout->addWidget(this->centralChild);
}

void MainWindow::setCentralChildWidget(std::string& buttonText, std::string& viewType)
{
    ui.centralQGridLayout->removeWidget(this->centralChild);
    delete this->centralChild;

    ChooseTableWidget* chooseTableWidget = new ChooseTableWidget(buttonText, viewType, this->controllerPtr, this);
    this->centralChild = chooseTableWidget;
    ui.centralQGridLayout->addWidget(this->centralChild);

    QObject::connect(chooseTableWidget, &ChooseTableWidget::restoreDefaultWidget, this, &MainWindow::restoreDefaultView);
    QObject::connect(chooseTableWidget, &ChooseTableWidget::tableChosen, this, &MainWindow::tableChosen);
}

void MainWindow::addTableClicked()
{
    ui.centralQGridLayout->removeWidget(this->centralChild);
    delete this->centralChild;

    AddTableWidget* addTableWidget = new AddTableWidget(this->controllerPtr, this);
    this->centralChild = addTableWidget;
    ui.centralQGridLayout->addWidget(this->centralChild);

    QObject::connect(addTableWidget, &AddTableWidget::restoreDefaultWidget, this, &MainWindow::restoreDefaultView);
    QObject::connect(addTableWidget, &AddTableWidget::createNewTable, this, &MainWindow::createNewTableClicked);
}

void MainWindow::createNewTableClicked()
{
    this->restoreDefaultView();
}

void MainWindow::tableChosen(int tableId, std::string viewType)
{
    if (viewType == DELETE_TABLE_VIEW)
    {
        this->controllerPtr->deleteTable(tableId);
        this->restoreDefaultView();
    }
    else if (viewType == EDIT_TABLE_VIEW)
    {
        ui.centralQGridLayout->removeWidget(this->centralChild);
        delete this->centralChild;

        this->centralChild = new EditTableWidget(tableId, this->controllerPtr, this);
        ui.centralQGridLayout->addWidget(this->centralChild);
    }
    else if (viewType == SHOW_TABLE_VIEW)
    {
        ui.centralQGridLayout->removeWidget(this->centralChild);
        delete this->centralChild;

        this->centralChild = new ShowTableView(tableId, this->controllerPtr, this);
        ui.centralQGridLayout->addWidget(this->centralChild);
    }
}

