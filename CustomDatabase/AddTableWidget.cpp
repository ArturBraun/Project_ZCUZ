#include "AddTableWidget.h"

AddTableWidget::AddTableWidget(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);

	ui.columnTypeQComboBox->addItem(QString::fromStdString(TYPE_STRING));
	ui.columnTypeQComboBox->addItem(QString::fromStdString(TYPE_DOUBLE));
	ui.columnTypeQComboBox->addItem(QString::fromStdString(TYPE_INT));
	ui.columnTypeQComboBox->setCurrentIndex(0);
	QObject::connect(ui.cancelQPushButton, &QPushButton::clicked, this, &AddTableWidget::cancelButtonClicked);
	QObject::connect(ui.saveQPushButton, &QPushButton::clicked, this, &AddTableWidget::saveButtonClicked);
}

AddTableWidget::~AddTableWidget()
{
}

void AddTableWidget::cancelButtonClicked()
{
	emit restoreDefaultWidget();
}

void AddTableWidget::saveButtonClicked()
{
	if (!ui.tableNameQLineEdit->text().isEmpty())
	{
		ColumnsData columnsData;

		emit createNewTable(ui.tableNameQLineEdit->text().toStdString(), columnsData);
	}
	else
	{
		int ret = QMessageBox::critical(this, tr("Blad"),
					tr("Nazwa tabeli nie moze byc pusta."),
					QMessageBox::Ok);
	}

}
