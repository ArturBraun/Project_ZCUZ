#ifndef COMMONDICTIONARY
#define COMMONDICTIONARY

#include <variant>
#include <string>
#include <unordered_map>


#define TYPE_INT "int"
#define TYPE_DOUBLE "double"
#define TYPE_STRING "string"

#define var std::variant<int, double, std::string>
#define ColumnsData std::unordered_map<int, std::pair<std::string, std::string>> // value => first - column name, second - column type


#endif COMMONDICTIONARY
