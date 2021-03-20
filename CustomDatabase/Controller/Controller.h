#ifndef CONTROLLER_H
#define CONTROLLER_H

#include <vector>
#include <string>
#include <memory>
#include "Table.h" 
#include "../CommonDictionary.h"

//! Class that stores general database data (tables) and provides interface to perform operations. 
class Controller
{
public:
	//! Class constructor
	Controller();

	//! Getter of all existing table names
	std::vector<std::string> getTablesNames();
	//! Function that creates new table
	void createNewTable(std::string& tableName, ColumnsData& columnTypesAndNames);
	//! Function that deletes table with given id
	void deleteTable(int tableId);
	//! Function that returns pointer to table with given id
	std::shared_ptr<Table> getTablePtr(int tableId);
	//! Function that checks if table name is already used
	bool isTableNameUsed(std::string& tableName);

private:
	//! Vector of table pointers
	std::vector<std::shared_ptr<Table>> tables;

};

#endif CONTROLLER_H