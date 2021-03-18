#include "Controller.h"

Controller::Controller()
{

}

void Controller::createNewTable(std::string& tableName, ColumnsData& columnTypesAndNames)
{
	this->tables.push_back(std::make_shared<Table>(tableName, columnTypesAndNames));
}

std::vector<std::string> Controller::getTablesNames()
{
	std::vector<std::string> tablesNames;

	for (int i = 0; i < tables.size(); ++i) {
		tablesNames.push_back(this->tables[i]->getTableName());
	}

	return tablesNames;
}

void Controller::deleteTable(int tableId)
{
	this->tables.erase(this->tables.begin() + tableId);
}

std::shared_ptr<Table> Controller::getTablePtr(int tableId)
{
	return this->tables[tableId];
}

bool Controller::isTableNameUsed(std::string& tableName)
{
	for (auto& table : tables)
	{
		if (table->getTableName() == tableName)
		{
			return true;
		}
	}

	return false;
}

