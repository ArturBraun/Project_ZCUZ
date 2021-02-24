/********************************************************************************
** Form generated from reading UI file 'AddTableWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDTABLEWIDGET_H
#define UI_ADDTABLEWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AddTableWidget
{
public:
    QGridLayout *gridLayout_3;
    QFrame *tableNameQFrame;
    QGridLayout *gridLayout_2;
    QLabel *tableNameQLabel;
    QLineEdit *tableNameQLineEdit;
    QFrame *columnQFrame;
    QGridLayout *gridLayout;
    QLabel *columnNameQLabel;
    QLabel *columnTypeQLabel;
    QLineEdit *columnNameQLineEdit;
    QComboBox *columnTypeQComboBox;
    QPushButton *addColumnQPushButton;
    QPushButton *deleteColumnQPushButton;
    QSpacerItem *horizontalSpacer;
    QPushButton *saveQPushButton;
    QPushButton *cancelQPushButton;
    QTableWidget *tableQTableWidget;

    void setupUi(QWidget *AddTableWidget)
    {
        if (AddTableWidget->objectName().isEmpty())
            AddTableWidget->setObjectName(QString::fromUtf8("AddTableWidget"));
        AddTableWidget->resize(481, 372);
        gridLayout_3 = new QGridLayout(AddTableWidget);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        tableNameQFrame = new QFrame(AddTableWidget);
        tableNameQFrame->setObjectName(QString::fromUtf8("tableNameQFrame"));
        tableNameQFrame->setFrameShape(QFrame::StyledPanel);
        tableNameQFrame->setFrameShadow(QFrame::Raised);
        gridLayout_2 = new QGridLayout(tableNameQFrame);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        tableNameQLabel = new QLabel(tableNameQFrame);
        tableNameQLabel->setObjectName(QString::fromUtf8("tableNameQLabel"));

        gridLayout_2->addWidget(tableNameQLabel, 0, 0, 1, 1);

        tableNameQLineEdit = new QLineEdit(tableNameQFrame);
        tableNameQLineEdit->setObjectName(QString::fromUtf8("tableNameQLineEdit"));

        gridLayout_2->addWidget(tableNameQLineEdit, 0, 1, 1, 1);


        gridLayout_3->addWidget(tableNameQFrame, 0, 0, 1, 1);

        columnQFrame = new QFrame(AddTableWidget);
        columnQFrame->setObjectName(QString::fromUtf8("columnQFrame"));
        columnQFrame->setFrameShape(QFrame::StyledPanel);
        columnQFrame->setFrameShadow(QFrame::Raised);
        gridLayout = new QGridLayout(columnQFrame);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        columnNameQLabel = new QLabel(columnQFrame);
        columnNameQLabel->setObjectName(QString::fromUtf8("columnNameQLabel"));
        columnNameQLabel->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(columnNameQLabel, 0, 0, 1, 1);

        columnTypeQLabel = new QLabel(columnQFrame);
        columnTypeQLabel->setObjectName(QString::fromUtf8("columnTypeQLabel"));
        columnTypeQLabel->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(columnTypeQLabel, 0, 1, 1, 1);

        columnNameQLineEdit = new QLineEdit(columnQFrame);
        columnNameQLineEdit->setObjectName(QString::fromUtf8("columnNameQLineEdit"));

        gridLayout->addWidget(columnNameQLineEdit, 1, 0, 1, 1);

        columnTypeQComboBox = new QComboBox(columnQFrame);
        columnTypeQComboBox->setObjectName(QString::fromUtf8("columnTypeQComboBox"));

        gridLayout->addWidget(columnTypeQComboBox, 1, 1, 1, 1);

        addColumnQPushButton = new QPushButton(columnQFrame);
        addColumnQPushButton->setObjectName(QString::fromUtf8("addColumnQPushButton"));

        gridLayout->addWidget(addColumnQPushButton, 2, 0, 1, 1);

        deleteColumnQPushButton = new QPushButton(columnQFrame);
        deleteColumnQPushButton->setObjectName(QString::fromUtf8("deleteColumnQPushButton"));

        gridLayout->addWidget(deleteColumnQPushButton, 2, 1, 1, 1);

        gridLayout->setColumnStretch(0, 1);
        gridLayout->setColumnStretch(1, 1);

        gridLayout_3->addWidget(columnQFrame, 0, 1, 1, 2);

        horizontalSpacer = new QSpacerItem(236, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer, 2, 0, 1, 1);

        saveQPushButton = new QPushButton(AddTableWidget);
        saveQPushButton->setObjectName(QString::fromUtf8("saveQPushButton"));

        gridLayout_3->addWidget(saveQPushButton, 2, 1, 1, 1);

        cancelQPushButton = new QPushButton(AddTableWidget);
        cancelQPushButton->setObjectName(QString::fromUtf8("cancelQPushButton"));

        gridLayout_3->addWidget(cancelQPushButton, 2, 2, 1, 1);

        tableQTableWidget = new QTableWidget(AddTableWidget);
        tableQTableWidget->setObjectName(QString::fromUtf8("tableQTableWidget"));

        gridLayout_3->addWidget(tableQTableWidget, 1, 0, 1, 3);


        retranslateUi(AddTableWidget);

        QMetaObject::connectSlotsByName(AddTableWidget);
    } // setupUi

    void retranslateUi(QWidget *AddTableWidget)
    {
        AddTableWidget->setWindowTitle(QCoreApplication::translate("AddTableWidget", "AddTableWidget", nullptr));
        tableNameQLabel->setText(QCoreApplication::translate("AddTableWidget", "nazwa tabeli", nullptr));
        columnNameQLabel->setText(QCoreApplication::translate("AddTableWidget", "nazwa kolumny", nullptr));
        columnTypeQLabel->setText(QCoreApplication::translate("AddTableWidget", "typ danych", nullptr));
        addColumnQPushButton->setText(QCoreApplication::translate("AddTableWidget", "Dodaj kolumn\304\231", nullptr));
        deleteColumnQPushButton->setText(QCoreApplication::translate("AddTableWidget", "Usu\305\204 kolumn\304\231", nullptr));
        saveQPushButton->setText(QCoreApplication::translate("AddTableWidget", "Zapisz", nullptr));
        cancelQPushButton->setText(QCoreApplication::translate("AddTableWidget", "Anuluj", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AddTableWidget: public Ui_AddTableWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDTABLEWIDGET_H
