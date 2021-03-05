#include "Model.h"

Model::Model()
{

}

void Model::createNewTable(std::string& tableName, ColumnsData& columnTypesAndNames)
{
	this->tables.push_back(std::make_shared<Table>(tableName, columnTypesAndNames));
}

std::vector<std::string> Model::getTablesNames()
{
	std::vector<std::string> tablesNames;

	for (int i = 0; i < tables.size(); ++i) {
		tablesNames.push_back(this->tables[i]->getTableName());
	}

	return tablesNames;
}

void Model::deleteTable(int tableId)
{
	this->tables.erase(this->tables.begin() + tableId);
}

std::shared_ptr<Table> Model::getTablePtr(int tableId)
{
	return this->tables[tableId];
}

bool Model::isTableNameUsed(std::string& tableName)
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

