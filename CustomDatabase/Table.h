#ifndef TABLE
#define TABLE

#include <vector>
#include <string>
#include <memory>
#include "Row.h" 
#include "CommonDictionary.h"

class Table
{
public:
	Table(std::string& tableName, ColumnsData& columnTypesAndNames);

	std::string getTableName();
	std::string getColumnName(int columnId);
	std::string getColumnType(int columnId);
	std::vector<Row> getSortedRows(int sortColumnId = 0);
	

private:
	std::string tableName;
	ColumnsData columnsData; 
	std::vector<Row> rows;

};

#endif TABLE