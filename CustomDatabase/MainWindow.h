#ifndef MAINWINDOW
#define MAINWINDOW

#include <QtWidgets/QMainWindow>
#include "ui_MainWindow.h"
#include "AbstractView.h"

class MainWindow : public QMainWindow, public AbstractView
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = Q_NULLPTR);

private:
    Ui::MainWindowClass ui;
};

#endif
