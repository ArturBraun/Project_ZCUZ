#include "MainWindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    ui.setupUi(this);

    this->centralChild = new StartingWidget(this);
    ui.centralQGridLayout->addWidget(this->centralChild);  

    QObject::connect(ui.deleteTableQAction, &QAction::triggered, this, &MainWindow::deleteTableClicked);
}

void MainWindow::deleteTableClicked() {
    ui.centralQGridLayout->removeWidget(this->centralChild);
    delete this->centralChild;

    this->centralChild = new ChooseTableWidget(this);
    ui.centralQGridLayout->addWidget(this->centralChild);
}

