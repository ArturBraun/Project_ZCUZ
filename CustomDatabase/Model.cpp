#include "Model.h"

Model::Model()
{

}

void Model::createNewTable(std::string& tableName, ColumnsData& columnTypesAndNames)
{
	this->tables.push_back(std::make_unique<Table>(tableName, columnTypesAndNames));
}

std::vector<std::string> Model::getTablesNames()
{
	std::vector<std::string> tablesNames;

	for (int i = 0; i < tables.size(); ++i) {
		tablesNames.push_back(this->tables[i]->getTableName());
	}

	return tablesNames;
}


