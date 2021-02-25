#include "ChooseTableWidget.h"

ChooseTableWidget::ChooseTableWidget(std::string& buttonText, std::string& viewType, std::shared_ptr<Controller> controllerPtr, QWidget* parent)
	: QWidget(parent),
	controllerPtr(controllerPtr),
	viewType(viewType)
{
	ui.setupUi(this);

	std::vector<std::string> tableNames = controllerPtr->getTablesNames();
	for (auto& tableName : tableNames) {
		ui.chooseTableQComboBox->addItem(QString::fromStdString(tableName));
	}

	ui.okQPushButton->setText(QString::fromStdString(buttonText));
	QObject::connect(ui.cancelPushButton, &QPushButton::clicked, this, &ChooseTableWidget::cancelButtonClicked);
	QObject::connect(ui.okQPushButton, &QPushButton::clicked, this, &ChooseTableWidget::okButtonClicked);
}

ChooseTableWidget::~ChooseTableWidget()
{

}

void ChooseTableWidget::okButtonClicked()
{
	int currentIndex = ui.chooseTableQComboBox->currentIndex();
	if (currentIndex > -1)
	{
		if (this->viewType == DELETE_TABLE_VIEW)
		{
			this->controllerPtr->deleteTable(currentIndex);
			ui.chooseTableQComboBox->removeItem(currentIndex);

			emit restoreDefaultWidget();
		}

	}
}

void ChooseTableWidget::cancelButtonClicked()
{
	emit restoreDefaultWidget();
}
