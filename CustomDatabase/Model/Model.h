#ifndef MODEL
#define MODEL

#include <vector>
#include <string>
#include <memory>
#include "Table.h" 
#include "CommonDictionary.h"

class Model
{
public:
	Model();

	std::vector<std::string> getTablesNames();
	void createNewTable(std::string &tableName, ColumnsData& columnTypesAndNames);
	void deleteTable(int tableId);
	std::shared_ptr<Table> getTablePtr(int tableId);

private:
	std::vector<std::shared_ptr<Table>> tables;

};

#endif MODEL