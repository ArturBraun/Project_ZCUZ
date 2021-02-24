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

void MainWindow::deleteTableClicked() 
{
    this->setCentralChildWidget("Usun tabele");
}

void MainWindow::editRowsClicked()
{
    this->setCentralChildWidget("Edytuj tabele");
}

void MainWindow::showTableClicked()
{
    this->setCentralChildWidget("Pokaz tabele");
}

void MainWindow::restoreDefaultView() 
{
    ui.centralQGridLayout->removeWidget(this->centralChild);
    delete this->centralChild;

    this->centralChild = new StartingWidget(this);
    ui.centralQGridLayout->addWidget(this->centralChild);
}

void MainWindow::setCentralChildWidget(std::string buttonText)
{
    ui.centralQGridLayout->removeWidget(this->centralChild);
    delete this->centralChild;

    ChooseTableWidget* chooseTableWidget = new ChooseTableWidget(buttonText, this);
    this->centralChild = chooseTableWidget;
    ui.centralQGridLayout->addWidget(this->centralChild);

    QObject::connect(chooseTableWidget, &ChooseTableWidget::childWidgetCanceled, this, &MainWindow::restoreDefaultView);
}

void MainWindow::addTableClicked()
{
    ui.centralQGridLayout->removeWidget(this->centralChild);
    delete this->centralChild;

    AddTableWidget* addTableWidget = new AddTableWidget(this);
    this->centralChild = addTableWidget;
    ui.centralQGridLayout->addWidget(this->centralChild);

    QObject::connect(addTableWidget, &AddTableWidget::childWidgetCanceled, this, &MainWindow::restoreDefaultView);
}
