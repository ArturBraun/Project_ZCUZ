#ifndef TABLE_H
#define TABLE_H

#include <vector>
#include <string>
#include <memory>
#include "Row.h" 
#include "../CommonDictionary.h"
#include <algorithm>

//! Class representing particular table
class Table
{
public:
	//! Class constructor. Requires table name and column data (column types and names)
	Table(std::string& tableName, ColumnsData& columnTypesAndNames);

	//! Getter function of table name
	std::string getTableName();
	//! Getter function of name from the column with specified id
	std::string getColumnName(int columnId);
	//! Getter function of number of columns in table
	int getNumberOfColumns();
	//! Getter function of column type from the column with specified id
	std::string getColumnType(int columnId);
	//! Getter function of sorted rows. Rows are sorted by column id. Sorting order by default is ascending
	std::vector<Row> getSortedRows(int sortColumnId = 0, bool sortDescending = false);
	//! Function that creates new row with default values of every row field.
	void createNewRow();
	//! Function that deletes row with specified id
	void deleteRow(int rowId);

	//! Template function that updates value for concrete column in row with specified id
	template<typename T> void updateValueInRow(int rowId, int columnId, T& value)
	{
		this->rows[rowId].setValueForColumn(columnId, value);
	}
	

private:
	//! Variale that holds table name
	std::string tableName;
	//! Std structure that hold columns data (types and names)
	ColumnsData columnsData; 
	//! Vector that stores rows
	std::vector<Row> rows;

};

#endif TABLE_H