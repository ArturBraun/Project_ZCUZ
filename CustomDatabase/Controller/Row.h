#ifndef ROW_H
#define ROW_H

#include "../CommonDictionary.h"

class Row
{
public:
	Row();
	Row& Row::operator =(const Row& rightRow);
	Row::Row(const Row& rightRow);

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

#endif ROW_H

