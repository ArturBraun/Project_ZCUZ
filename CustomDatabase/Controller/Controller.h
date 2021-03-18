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
	// Class constructor
	Controller();

	// Getter of all existing table names
	std::vector<std::string> getTablesNames();
	// Function that creates new table
	void createNewTable(std::string& tableName, ColumnsData& columnTypesAndNames);
	void deleteTable(int tableId);
	std::shared_ptr<Table> getTablePtr(int tableId);
	bool isTableNameUsed(std::string& tableName);

private:
	std::vector<std::shared_ptr<Table>> tables;

};

#endif CONTROLLER_H