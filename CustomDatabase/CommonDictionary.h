#ifndef COMMONDICTIONARY
#define COMMONDICTIONARY

#include <variant>
#include <string>
#include <unordered_map>


#define TYPE_INT std::string("INT")
#define TYPE_DOUBLE std::string("DOUBLE")
#define TYPE_STRING std::string("STRING")

#define var std::variant<int, double, std::string>
#define ColumnsData std::unordered_map<int, std::pair<std::string, std::string>> // value => first - column name, second - column type

#define DELETE_TABLE_VIEW std::string("delete table view")
#define EDIT_TABLE_VIEW std::string("edit table view")
#define SHOW_TABLE_VIEW std::string("show table view")

#define DELETE_TABLE_BUTTON_TEXT std::string("Usun tabele")
#define EDIT_TABLE_BUTTON_TEXT std::string("Edytuj tabele")
#define SHOW_TABLE_BUTTON_TEXT std::string("Pokaz tabele")


#endif COMMONDICTIONARY
