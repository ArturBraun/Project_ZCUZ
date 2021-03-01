#ifndef TABLE
#define TABLE

#include <vector>
#include <string>
#include <memory>
#include "Row.h" 
#include "../CommonDictionary.h"

class Table
{
public:
	Table(std::string& tableName, ColumnsData& columnTypesAndNames);

	std::string getTableName();
	std::string getColumnName(int columnId);
	int getNumberOfColumns();
	std::string getColumnType(int columnId);
	std::vector<Row> getSortedRows(int sortColumnId = 0);
	void createNewRow();

	template<typename T> void updateValueInRow(int rowId, int columnId, T& value)
	{
		this->rows[rowId].setValueForColumn(columnId, value);
	}
	

private:
	std::string tableName;
	ColumnsData columnsData; 
	std::vector<Row> rows;

};

#endif TABLE