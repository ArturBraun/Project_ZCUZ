#include "Table.h"

Table::Table(std::string& tableName, ColumnsData& columnTypesAndNames):
	tableName(tableName)
{
	this->columnsData = columnTypesAndNames;
}

std::string Table::getTableName()
{
	return this->tableName;
}
std::string Table::getColumnName(int columnId)
{
	return this->columnsData[columnId].first;
}
std::string Table::getColumnType(int columnId)
{
	return this->columnsData[columnId].second;
}
int Table::getNumberOfColumns()
{
	return this->columnsData.size();
}
std::vector<Row> Table::getSortedRows(int sortColumnId)
{
	std::vector<Row> sortedRows = this->rows;

	// TODO: dodac sortowanie wedlug id kolumny

	return sortedRows;
}
void Table::createNewRow()
{
	Row row;
	row.setValueForColumn(0, (int)this->rows.size() + 1); // set value for column 'id wiersza'

	for (int i = 1; i < this->columnsData.size(); ++i)
	{
		std::string columnType = columnsData[i].second;
		if (columnType == TYPE_INT)
		{
			row.setValueForColumn(i, TYPE_INT_DEFAULT_VALUE);
		}
		else if (columnType == TYPE_DOUBLE)
		{
			row.setValueForColumn(i, TYPE_DOUBLE_DEFAULT_VALUE);
		}
		else if (columnType == TYPE_STRING)
		{
			row.setValueForColumn(i, TYPE_STRING_DEFAULT_VALUE);
		}
	}

	this->rows.push_back(row);
}

void Table::deleteRow(int rowId)
{
	this->rows.erase(this->rows.begin() + rowId);
	
	// refresh values for column 'id wiersza' after delete
	for (int i = rowId; i < this->rows.size(); ++i)
	{
		this->rows[i].setValueForColumn(0, i + 1);
	}
}



