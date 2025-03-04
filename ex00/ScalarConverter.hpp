/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahamdi <ahamdi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 21:18:06 by ahamdi            #+#    #+#             */
/*   Updated: 2025/02/18 12:49:43 by ahamdi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


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
    TYPE_UNKNOWN,
    TYPE_SPECIAL
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
void infini(const char *nb, size_t len);
#endif