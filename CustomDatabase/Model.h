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

private:
	std::vector<std::unique_ptr<Table>> tables;

};

#endif MODEL