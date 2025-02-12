#ifndef  SCALARCONVERTER_HPP
#define  SCALARCONVERTER_HPP

# include <iostream>
# include <string>

typedef enum
{
    TYPE_INT,
    TYPE_FLOAT,
    TYPE_CHAR,
    TYPE_DOUBLE,
    TYPE_UNKNOWN
} e_type;

class ScalarConverter
{
    public:
        ScalarConverter();
        ~ScalarConverter();
        ScalarConverter(const ScalarConverter &copy);
        ScalarConverter &operator=(const ScalarConverter &assign);
        static  void convert (std::string nb);
};
e_type whichType(const char *str, size_t len);
void character (const char *nb);
void interger (const char *nb);
void floating (const char *nb);
void doubling (const char *nb);
#endif