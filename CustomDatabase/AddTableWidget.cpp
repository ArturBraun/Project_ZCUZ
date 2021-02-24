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
}

AddTableWidget::~AddTableWidget()
{
}

void AddTableWidget::cancelButtonClicked()
{
	emit childWidgetCanceled();
}
