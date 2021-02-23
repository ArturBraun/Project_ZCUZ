#include "ChooseTableWidget.h"

ChooseTableWidget::ChooseTableWidget(std::string& buttonText, QWidget* parent)
	: QWidget(parent)
{
	ui.setupUi(this);

	ui.okQPushButton->setText(QString::fromStdString(buttonText));
	QObject::connect(ui.cancelPushButton, &QPushButton::clicked, this, &ChooseTableWidget::cancelButtonClicked);
}

ChooseTableWidget::~ChooseTableWidget()
{
}

void ChooseTableWidget::cancelButtonClicked()
{
	emit childWidgetCanceled();
}
