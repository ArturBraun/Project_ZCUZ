#include "Row.h"

Row::Row()
{

}

Row& Row::operator =(const Row& rightRow)
{
    if (&rightRow != this)
    {
        this->rowData = rightRow.rowData;
    }
    return *this;
}

Row::Row(const Row& rightRow)
{
    this->rowData = rightRow.rowData;
}
