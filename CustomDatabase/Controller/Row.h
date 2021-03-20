#ifndef ROW_H
#define ROW_H

#include "../CommonDictionary.h"

//! Class that represents particular row
class Row
{
public:
	//! Class constructor
	Row();
	//! Assignment operator overload
	Row& Row::operator =(const Row& rightRow);
	//! Copy constructor
	Row::Row(const Row& rightRow);

	//! Template function that sets value for column with specified id
	template<typename T> void setValueForColumn(int columnId, T value)
	{
		rowData[columnId] = value;
	}

	//! Template function that gets value for column with specified id
	template<typename T> T getValueForColumn(int columnId)
	{
		return std::get<T>(this->rowData[columnId]);
	}

private:
	//! Unordered map that stores rows data. Map key is column id and map value is row value for this column.
	std::unordered_map<int, var> rowData;
};

#endif ROW_H

