/********************************************************************************
** Form generated from reading UI file 'ShowTableView.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SHOWTABLEVIEW_H
#define UI_SHOWTABLEVIEW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ShowTableView
{
public:
    QGridLayout *gridLayout_2;
    QGroupBox *sortByColumnQGroupBox;
    QGridLayout *gridLayout;
    QComboBox *columnNameQComboBox;
    QPushButton *sortQPushButton;
    QRadioButton *ascendingQRadioButton;
    QRadioButton *descendingQRadioButton;
    QTableWidget *tableQTableWidget;

    void setupUi(QWidget *ShowTableView)
    {
        if (ShowTableView->objectName().isEmpty())
            ShowTableView->setObjectName(QString::fromUtf8("ShowTableView"));
        ShowTableView->resize(400, 300);
        gridLayout_2 = new QGridLayout(ShowTableView);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        sortByColumnQGroupBox = new QGroupBox(ShowTableView);
        sortByColumnQGroupBox->setObjectName(QString::fromUtf8("sortByColumnQGroupBox"));
        gridLayout = new QGridLayout(sortByColumnQGroupBox);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        columnNameQComboBox = new QComboBox(sortByColumnQGroupBox);
        columnNameQComboBox->setObjectName(QString::fromUtf8("columnNameQComboBox"));

        gridLayout->addWidget(columnNameQComboBox, 0, 0, 1, 1);

        sortQPushButton = new QPushButton(sortByColumnQGroupBox);
        sortQPushButton->setObjectName(QString::fromUtf8("sortQPushButton"));

        gridLayout->addWidget(sortQPushButton, 0, 1, 1, 1);

        ascendingQRadioButton = new QRadioButton(sortByColumnQGroupBox);
        ascendingQRadioButton->setObjectName(QString::fromUtf8("ascendingQRadioButton"));
        ascendingQRadioButton->setChecked(true);

        gridLayout->addWidget(ascendingQRadioButton, 1, 0, 1, 1);

        descendingQRadioButton = new QRadioButton(sortByColumnQGroupBox);
        descendingQRadioButton->setObjectName(QString::fromUtf8("descendingQRadioButton"));

        gridLayout->addWidget(descendingQRadioButton, 1, 1, 1, 1);


        gridLayout_2->addWidget(sortByColumnQGroupBox, 0, 0, 1, 1);

        tableQTableWidget = new QTableWidget(ShowTableView);
        tableQTableWidget->setObjectName(QString::fromUtf8("tableQTableWidget"));

        gridLayout_2->addWidget(tableQTableWidget, 1, 0, 1, 1);


        retranslateUi(ShowTableView);

        QMetaObject::connectSlotsByName(ShowTableView);
    } // setupUi

    void retranslateUi(QWidget *ShowTableView)
    {
        ShowTableView->setWindowTitle(QCoreApplication::translate("ShowTableView", "ShowTableView", nullptr));
        sortByColumnQGroupBox->setTitle(QCoreApplication::translate("ShowTableView", "Sortuj po nazwie kolumny", nullptr));
        sortQPushButton->setText(QCoreApplication::translate("ShowTableView", "Sortuj", nullptr));
        ascendingQRadioButton->setText(QCoreApplication::translate("ShowTableView", "Rosn\304\205co", nullptr));
        descendingQRadioButton->setText(QCoreApplication::translate("ShowTableView", "Malej\304\205co", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ShowTableView: public Ui_ShowTableView {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SHOWTABLEVIEW_H
