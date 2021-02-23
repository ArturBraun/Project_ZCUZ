/********************************************************************************
** Form generated from reading UI file 'MainWindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindowClass
{
public:
    QAction *addTableQAction;
    QAction *deleteTableQAction;
    QAction *editRowsQAction;
    QAction *showTablesQAction;
    QWidget *centralWidget;
    QGridLayout *gridLayout_2;
    QGridLayout *centralQGridLayout;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindowClass)
    {
        if (MainWindowClass->objectName().isEmpty())
            MainWindowClass->setObjectName(QString::fromUtf8("MainWindowClass"));
        MainWindowClass->resize(600, 400);
        addTableQAction = new QAction(MainWindowClass);
        addTableQAction->setObjectName(QString::fromUtf8("addTableQAction"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/MainWindow/icons/AddTableIcon.png"), QSize(), QIcon::Normal, QIcon::Off);
        addTableQAction->setIcon(icon);
        deleteTableQAction = new QAction(MainWindowClass);
        deleteTableQAction->setObjectName(QString::fromUtf8("deleteTableQAction"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/MainWindow/icons/DeleteTableIcon.png"), QSize(), QIcon::Normal, QIcon::Off);
        deleteTableQAction->setIcon(icon1);
        editRowsQAction = new QAction(MainWindowClass);
        editRowsQAction->setObjectName(QString::fromUtf8("editRowsQAction"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/MainWindow/icons/RowsIcon.png"), QSize(), QIcon::Normal, QIcon::Off);
        editRowsQAction->setIcon(icon2);
        showTablesQAction = new QAction(MainWindowClass);
        showTablesQAction->setObjectName(QString::fromUtf8("showTablesQAction"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/MainWindow/icons/TableIcon.png"), QSize(), QIcon::Normal, QIcon::Off);
        showTablesQAction->setIcon(icon3);
        centralWidget = new QWidget(MainWindowClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        gridLayout_2 = new QGridLayout(centralWidget);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        centralQGridLayout = new QGridLayout();
        centralQGridLayout->setSpacing(6);
        centralQGridLayout->setObjectName(QString::fromUtf8("centralQGridLayout"));

        gridLayout_2->addLayout(centralQGridLayout, 0, 0, 1, 1);

        MainWindowClass->setCentralWidget(centralWidget);
        mainToolBar = new QToolBar(MainWindowClass);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        mainToolBar->setIconSize(QSize(35, 35));
        mainToolBar->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        MainWindowClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindowClass);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindowClass->setStatusBar(statusBar);

        mainToolBar->addAction(addTableQAction);
        mainToolBar->addAction(deleteTableQAction);
        mainToolBar->addAction(editRowsQAction);
        mainToolBar->addAction(showTablesQAction);

        retranslateUi(MainWindowClass);

        QMetaObject::connectSlotsByName(MainWindowClass);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindowClass)
    {
        MainWindowClass->setWindowTitle(QCoreApplication::translate("MainWindowClass", "MainWindow", nullptr));
        addTableQAction->setText(QCoreApplication::translate("MainWindowClass", "Dodaj tabel\304\231", nullptr));
#if QT_CONFIG(tooltip)
        addTableQAction->setToolTip(QCoreApplication::translate("MainWindowClass", "Dodaj tabel\304\231", nullptr));
#endif // QT_CONFIG(tooltip)
        deleteTableQAction->setText(QCoreApplication::translate("MainWindowClass", "Usu\305\204 tabel\304\231", nullptr));
#if QT_CONFIG(tooltip)
        deleteTableQAction->setToolTip(QCoreApplication::translate("MainWindowClass", "Usu\305\204 tabel\304\231", nullptr));
#endif // QT_CONFIG(tooltip)
        editRowsQAction->setText(QCoreApplication::translate("MainWindowClass", "Edytuj wiersze", nullptr));
#if QT_CONFIG(tooltip)
        editRowsQAction->setToolTip(QCoreApplication::translate("MainWindowClass", "Edytuj wiersze", nullptr));
#endif // QT_CONFIG(tooltip)
        showTablesQAction->setText(QCoreApplication::translate("MainWindowClass", "Przegl\304\205daj tabele", nullptr));
#if QT_CONFIG(tooltip)
        showTablesQAction->setToolTip(QCoreApplication::translate("MainWindowClass", "Przegl\304\205daj tabele", nullptr));
#endif // QT_CONFIG(tooltip)
    } // retranslateUi

};

namespace Ui {
    class MainWindowClass: public Ui_MainWindowClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
