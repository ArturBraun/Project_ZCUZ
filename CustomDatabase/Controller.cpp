#include "Controller.h"

Controller::Controller()
{

}
void Controller::setModel(std::shared_ptr<Model> modelPtr)
{
	this->modelPtr = modelPtr;
}
void Controller::setView(std::shared_ptr<AbstractView> viewPtr)
{
	this->viewPtr = viewPtr;
}
std::vector<std::string> Controller::getTablesNames()
{
	return this->modelPtr->getTablesNames();
}
void Controller::createNewTable(std::string& tableName, ColumnsData& columnTypesAndNames)
{
	this->modelPtr->createNewTable(tableName, columnTypesAndNames);
}
void Controller::deleteTable(int tableId)
{
	this->modelPtr->deleteTable(tableId);
}

