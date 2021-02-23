/********************************************************************************
** Form generated from reading UI file 'ChooseTableWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHOOSETABLEWIDGET_H
#define UI_CHOOSETABLEWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ChooseTableWidget
{
public:
    QGridLayout *gridLayout;
    QComboBox *chooseTableQComboBox;
    QPushButton *okQPushButton;
    QPushButton *cancelPushButton;

    void setupUi(QWidget *ChooseTableWidget)
    {
        if (ChooseTableWidget->objectName().isEmpty())
            ChooseTableWidget->setObjectName(QString::fromUtf8("ChooseTableWidget"));
        ChooseTableWidget->resize(400, 300);
        gridLayout = new QGridLayout(ChooseTableWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        chooseTableQComboBox = new QComboBox(ChooseTableWidget);
        chooseTableQComboBox->setObjectName(QString::fromUtf8("chooseTableQComboBox"));

        gridLayout->addWidget(chooseTableQComboBox, 0, 0, 1, 2);

        okQPushButton = new QPushButton(ChooseTableWidget);
        okQPushButton->setObjectName(QString::fromUtf8("okQPushButton"));

        gridLayout->addWidget(okQPushButton, 1, 0, 1, 1);

        cancelPushButton = new QPushButton(ChooseTableWidget);
        cancelPushButton->setObjectName(QString::fromUtf8("cancelPushButton"));

        gridLayout->addWidget(cancelPushButton, 1, 1, 1, 1);


        retranslateUi(ChooseTableWidget);

        QMetaObject::connectSlotsByName(ChooseTableWidget);
    } // setupUi

    void retranslateUi(QWidget *ChooseTableWidget)
    {
        ChooseTableWidget->setWindowTitle(QCoreApplication::translate("ChooseTableWidget", "ChooseTableWidget", nullptr));
        okQPushButton->setText(QCoreApplication::translate("ChooseTableWidget", "OK", nullptr));
        cancelPushButton->setText(QCoreApplication::translate("ChooseTableWidget", "Anuluj", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ChooseTableWidget: public Ui_ChooseTableWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHOOSETABLEWIDGET_H
