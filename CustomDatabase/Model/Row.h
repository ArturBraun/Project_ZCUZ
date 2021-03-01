#ifndef ROW
#define ROW

#include "../CommonDictionary.h"

class Row
{
public:
	Row();

	template<typename T> void setValueForColumn(int columnId, T value)
	{
		rowData[columnId] = value;
	}

	template<typename T> T getValueForColumn(int columnId)
	{
		return std::get<T>(this->rowData[columnId]);
	}

private:
	std::unordered_map<int, var> rowData;
};

#endif ROW

