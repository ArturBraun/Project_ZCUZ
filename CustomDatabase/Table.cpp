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
std::vector<Row> Table::getSortedRows(int sortColumnId)
{
	std::vector<Row> sortedRows = this->rows;

	// TODO: dodac sortowanie wedlug id kolumny

	return sortedRows;
}

