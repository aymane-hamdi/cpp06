/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahamdi <ahamdi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 21:17:59 by ahamdi            #+#    #+#             */
/*   Updated: 2025/02/18 12:48:09 by ahamdi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
            infini(nb.c_str(), len);
            break;
    }
}

