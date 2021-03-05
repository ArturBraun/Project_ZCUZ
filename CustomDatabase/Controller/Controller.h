#ifndef CONTROLLER
#define CONTROLLER

#include "../Model/Model.h"
#include "../View/AbstractView.h"
#include <iostream>
#include <vector>

class Controller
{
public:
	Controller();

	void setModel(std::shared_ptr<Model> modelPtr);
	void setView(std::shared_ptr<AbstractView> viewPtr);

	std::vector<std::string> getTablesNames();
	void createNewTable(std::string& tableName, ColumnsData& columnTypesAndNames);
	void deleteTable(int tableId);
	std::shared_ptr<Table> getTablePtr(int tableId);
	bool isTableNameUsed(std::string& tableName);

private:
	std::shared_ptr<AbstractView> viewPtr;
	std::shared_ptr<Model> modelPtr;
};

#endif CONTROLLER