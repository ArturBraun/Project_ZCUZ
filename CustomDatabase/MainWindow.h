#ifndef MAINWINDOW
#define MAINWINDOW

#include <QtWidgets/QMainWindow>
#include "ui_MainWindow.h"
#include "AbstractView.h"
#include "StartingWidget.h"
#include "ChooseTableWidget.h"

class MainWindow : public QMainWindow, public AbstractView
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = Q_NULLPTR);

public slots:
    void deleteTableClicked();
    void editRowsClicked();
    void showTableClicked();

    void restoreDefaultView();   

protected:
    void setCentralChildWidget(std::string buttonText);

private:
    Ui::MainWindowClass ui;
    QWidget* centralChild;
};

#endif
