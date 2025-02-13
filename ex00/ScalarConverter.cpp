#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter()
{

}

ScalarConverter::~ScalarConverter()
{

}

ScalarConverter::ScalarConverter(const ScalarConverter &copy)
{
    *this = copy;
}
ScalarConverter &ScalarConverter::operator=(const ScalarConverter &assign)
{
    (void)assign;
    return *this;
}

void ScalarConverter::convert (std::string nb)
{
    size_t  len = nb.length();
    e_type  type = whichType(nb.c_str(), len);
    switch(type)
    {
        case TYPE_UNKNOWN:
            std::cout << "Invalid input" << std::endl;
            break;
        case TYPE_CHAR:
             character(nb.c_str());
            break;
        case  TYPE_INT:
           interger(nb.c_str());
            break;
        case  TYPE_FLOAT:
            floating(nb.c_str());
            break;
        case  TYPE_DOUBLE:
            doubling(nb.c_str());
            break;
        case TYPE_SPECIAL:
            infini(nb.c_str());
            break;
    }
}

