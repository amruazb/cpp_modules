/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabashee <aabashee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 16:58:05 by aabashee          #+#    #+#             */
/*   Updated: 2024/12/02 16:58:11 by aabashee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP

#include <iostream>
#include <iomanip>
#include <sstream>
#include <string>
#include <limits>
#include <cmath>

enum literal_type
{
    CHAR,
    INT,
    FLOAT,
    DOUBLE,
    OTHER,
    ERROR
};

class ScalarConverter
{
    private:
        ScalarConverter( void );
        ScalarConverter( const ScalarConverter& src );
        ~ScalarConverter( void );
        ScalarConverter& operator=( const ScalarConverter& rhs );

    public:
        static void convert(const std::string& literal);
};

#endif  // SCALARCONVERTER_HPP
