/********************************************************************************
** Form generated from reading UI file 'StartingWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STARTINGWIDGET_H
#define UI_STARTINGWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_StartingWidget
{
public:
    QGridLayout *gridLayout;
    QLabel *descriptionQLabel;

    void setupUi(QWidget *StartingWidget)
    {
        if (StartingWidget->objectName().isEmpty())
            StartingWidget->setObjectName(QString::fromUtf8("StartingWidget"));
        StartingWidget->resize(394, 300);
        StartingWidget->setLayoutDirection(Qt::LeftToRight);
        gridLayout = new QGridLayout(StartingWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        descriptionQLabel = new QLabel(StartingWidget);
        descriptionQLabel->setObjectName(QString::fromUtf8("descriptionQLabel"));
        descriptionQLabel->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(descriptionQLabel, 0, 0, 1, 1);


        retranslateUi(StartingWidget);

        QMetaObject::connectSlotsByName(StartingWidget);
    } // setupUi

    void retranslateUi(QWidget *StartingWidget)
    {
        StartingWidget->setWindowTitle(QCoreApplication::translate("StartingWidget", "StartingWidget", nullptr));
        descriptionQLabel->setText(QCoreApplication::translate("StartingWidget", "Wybierz jedn\304\205 z powy\305\274szych opcji", nullptr));
    } // retranslateUi

};

namespace Ui {
    class StartingWidget: public Ui_StartingWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STARTINGWIDGET_H
