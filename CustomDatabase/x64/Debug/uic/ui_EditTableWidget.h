/********************************************************************************
** Form generated from reading UI file 'EditTableWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDITTABLEWIDGET_H
#define UI_EDITTABLEWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_EditTableWidget
{
public:
    QGridLayout *gridLayout_3;
    QGroupBox *addDeleteRowQGroupBox;
    QGridLayout *gridLayout;
    QRadioButton *addRowQRadioButton;
    QRadioButton *deleteRowQRadioButton;
    QGroupBox *optionsQGroupBox;
    QGridLayout *gridLayout_2;
    QLabel *rowIdQLabel;
    QLabel *columnNameQLabel;
    QLabel *valueQLabel;
    QPushButton *addQPushButton;
    QSpinBox *rowIdQSpinBox;
    QComboBox *columnNameQComboBox;
    QLineEdit *valueQLineEdit;
    QPushButton *deleteQPushButton;
    QTableWidget *tableQTableWidget;

    void setupUi(QWidget *EditTableWidget)
    {
        if (EditTableWidget->objectName().isEmpty())
            EditTableWidget->setObjectName(QString::fromUtf8("EditTableWidget"));
        EditTableWidget->resize(404, 309);
        gridLayout_3 = new QGridLayout(EditTableWidget);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        addDeleteRowQGroupBox = new QGroupBox(EditTableWidget);
        addDeleteRowQGroupBox->setObjectName(QString::fromUtf8("addDeleteRowQGroupBox"));
        gridLayout = new QGridLayout(addDeleteRowQGroupBox);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        addRowQRadioButton = new QRadioButton(addDeleteRowQGroupBox);
        addRowQRadioButton->setObjectName(QString::fromUtf8("addRowQRadioButton"));
        addRowQRadioButton->setChecked(true);
        addRowQRadioButton->setAutoRepeat(true);

        gridLayout->addWidget(addRowQRadioButton, 0, 0, 1, 1);

        deleteRowQRadioButton = new QRadioButton(addDeleteRowQGroupBox);
        deleteRowQRadioButton->setObjectName(QString::fromUtf8("deleteRowQRadioButton"));

        gridLayout->addWidget(deleteRowQRadioButton, 0, 1, 1, 1);


        gridLayout_3->addWidget(addDeleteRowQGroupBox, 0, 0, 1, 1);

        optionsQGroupBox = new QGroupBox(EditTableWidget);
        optionsQGroupBox->setObjectName(QString::fromUtf8("optionsQGroupBox"));
        gridLayout_2 = new QGridLayout(optionsQGroupBox);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        rowIdQLabel = new QLabel(optionsQGroupBox);
        rowIdQLabel->setObjectName(QString::fromUtf8("rowIdQLabel"));
        rowIdQLabel->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(rowIdQLabel, 0, 0, 1, 1);

        columnNameQLabel = new QLabel(optionsQGroupBox);
        columnNameQLabel->setObjectName(QString::fromUtf8("columnNameQLabel"));
        columnNameQLabel->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(columnNameQLabel, 0, 1, 1, 1);

        valueQLabel = new QLabel(optionsQGroupBox);
        valueQLabel->setObjectName(QString::fromUtf8("valueQLabel"));
        valueQLabel->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(valueQLabel, 0, 2, 1, 1);

        addQPushButton = new QPushButton(optionsQGroupBox);
        addQPushButton->setObjectName(QString::fromUtf8("addQPushButton"));

        gridLayout_2->addWidget(addQPushButton, 0, 3, 1, 1);

        rowIdQSpinBox = new QSpinBox(optionsQGroupBox);
        rowIdQSpinBox->setObjectName(QString::fromUtf8("rowIdQSpinBox"));

        gridLayout_2->addWidget(rowIdQSpinBox, 1, 0, 1, 1);

        columnNameQComboBox = new QComboBox(optionsQGroupBox);
        columnNameQComboBox->setObjectName(QString::fromUtf8("columnNameQComboBox"));

        gridLayout_2->addWidget(columnNameQComboBox, 1, 1, 1, 1);

        valueQLineEdit = new QLineEdit(optionsQGroupBox);
        valueQLineEdit->setObjectName(QString::fromUtf8("valueQLineEdit"));

        gridLayout_2->addWidget(valueQLineEdit, 1, 2, 1, 1);

        deleteQPushButton = new QPushButton(optionsQGroupBox);
        deleteQPushButton->setObjectName(QString::fromUtf8("deleteQPushButton"));

        gridLayout_2->addWidget(deleteQPushButton, 1, 3, 1, 1);


        gridLayout_3->addWidget(optionsQGroupBox, 1, 0, 1, 1);

        tableQTableWidget = new QTableWidget(EditTableWidget);
        tableQTableWidget->setObjectName(QString::fromUtf8("tableQTableWidget"));

        gridLayout_3->addWidget(tableQTableWidget, 2, 0, 1, 1);


        retranslateUi(EditTableWidget);

        QMetaObject::connectSlotsByName(EditTableWidget);
    } // setupUi

    void retranslateUi(QWidget *EditTableWidget)
    {
        EditTableWidget->setWindowTitle(QCoreApplication::translate("EditTableWidget", "EditTableWidget", nullptr));
        addDeleteRowQGroupBox->setTitle(QCoreApplication::translate("EditTableWidget", "Dodaj/Usu\305\204 wiersz", nullptr));
        addRowQRadioButton->setText(QCoreApplication::translate("EditTableWidget", "dodaj wiersz", nullptr));
        deleteRowQRadioButton->setText(QCoreApplication::translate("EditTableWidget", "usu\305\204 wiersz", nullptr));
        optionsQGroupBox->setTitle(QString());
        rowIdQLabel->setText(QCoreApplication::translate("EditTableWidget", "id wiersza", nullptr));
        columnNameQLabel->setText(QCoreApplication::translate("EditTableWidget", "nazwa kolumny", nullptr));
        valueQLabel->setText(QCoreApplication::translate("EditTableWidget", "warto\305\233\304\207", nullptr));
        addQPushButton->setText(QCoreApplication::translate("EditTableWidget", "Dodaj", nullptr));
        deleteQPushButton->setText(QCoreApplication::translate("EditTableWidget", "Usu\305\204", nullptr));
    } // retranslateUi

};

namespace Ui {
    class EditTableWidget: public Ui_EditTableWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDITTABLEWIDGET_H
