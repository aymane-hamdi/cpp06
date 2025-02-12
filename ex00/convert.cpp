#include "ScalarConverter.hpp"
# include <sstream> 
#include <iostream>
#include <iomanip> // Pour std::fixed et std::setprecision
e_type whichType(const char *str, size_t len)
{
    if (len == 0)
    {
        return TYPE_UNKNOWN;
    }
    if (len == 1 && (str[0] >= 32 && str[0] <= 126))
    {
        return TYPE_CHAR;
    }

    bool isInteger = true;
    for (size_t i = 0; i < len; i++)
    {
        if (!isdigit(str[i]) && ((str[i] != '-' && str[i] != '+') || i != 0))
        {
            isInteger = false;
            break;
        }
    }
    if (isInteger)
    {
        return TYPE_INT;
    }
    int dotCount = 0;
    bool isDouble = true;
   size_t i = 0;
    while(i < len)
    {
        if (str[i] == '.')
        {
            dotCount++;
            if (dotCount > 1)
            {
                isDouble = false;
                break;
            }
        }
        else if (!isdigit(str[i]) && ((str[i] != '-' && str[i] != '+') || i != 0))
        {
            isDouble = false;
            break;
        }
        i++;
    }

    if (!isDouble && str[i] == 'f')
    {
        return TYPE_FLOAT;
    }

    if (isDouble)
    {
        return TYPE_DOUBLE;
    }

    return TYPE_UNKNOWN;
}

void character (const char *nb)
{
    std::cout << "char   :" << " '" << nb << "'"<< std::endl;
    std::cout << "int    : " << static_cast<int>(nb[0]) << std::endl;
    std::cout << "float  : " << std::fixed << std::setprecision(3) << static_cast<float>(nb[0]) << "f" << std::endl;
    std::cout << "double : " << std::fixed << std::setprecision(3) << static_cast<double>(nb[0]) << std::endl;
}

void interger (const char *nb)
{
    int num;

    std::istringstream(nb) >> num;
    if (num >= 32 && num  <= 126)
        std::cout << "char    :" << "'"<< static_cast<char>(num) << "'" << std::endl;
    else
        std::cout << "char    :"<< "Non displayable" << std::endl; 
    std::cout << "int     :"<< nb << std::endl;
    std::cout << "float   :"<<std::fixed << std::setprecision(3) << static_cast<float>(num) << "f" <<std::endl;
    std::cout << "double  :"<<std::fixed << std::setprecision(3) << static_cast<double>(num) << std::endl;
}

void floating (const char *nb)
{
    float  num;
    char nu[std::strlen(nb)];
    int i = 0;
    while(nb[i] != 'f' && nb[i])
    {
        nu[i] = nb[i];
        i++;
    }
    nu[i] ='\0'; 
    
    std::istringstream(nu) >> num;
    int intPart = static_cast<int>(num);
    if (intPart >= 32 && intPart  <= 126)
        std::cout << "char :" << "'" << static_cast<char>(intPart)<< "'"<< std::endl;
    else
       std::cout << "char :"<< "Non displayable" << std::endl; 
    std::cout << "int :"<< static_cast<int>(num) << std::endl;
    std::cout << "float :"<<std::fixed << std::setprecision(3) << num << "f" << std::endl;
    std::cout << "double :"<<std::fixed << std::setprecision(3) << num << std::endl;
}

void doubling (const char *nb)
{
    double num;
   
    std::istringstream(nb) >> num;
    int intPart = static_cast<int>(num);
    if (intPart >= 32 && intPart  <= 126)
        std::cout << "char :" << "'" << static_cast<char>(intPart)<< "'"<< std::endl;
    else
       std::cout << "char :"<< "Non displayable" << std::endl; 
    std::cout << "int :"<< static_cast<int>(num) << std::endl;
    std::cout << "float :"<<std::fixed << std::setprecision(3) << num<< "f" << std::endl;
    std::cout << "double :"<<std::fixed << std::setprecision(3) << num << std::endl;
}