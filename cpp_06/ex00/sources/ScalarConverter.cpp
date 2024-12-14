/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabashee <aabashee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 16:57:55 by aabashee          #+#    #+#             */
/*   Updated: 2024/12/02 16:57:56 by aabashee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"
#include <climits>

ScalarConverter::ScalarConverter() {}

ScalarConverter::ScalarConverter(const ScalarConverter &src)
{
	(void)src;
}

ScalarConverter::~ScalarConverter() {}

ScalarConverter &ScalarConverter::operator=(const ScalarConverter &rhs)
{
	(void)rhs;
	return (*this);
}

static void printInt(const std::string &str)
{
	std::stringstream ss(str);
	int64_t num;

	ss >> std::skipws >> num;
	if (ss.fail() || !ss.eof())
		throw std::invalid_argument("Invalid argument");
	std::cout << "char: impossible" << std::endl;
	std::cout << "int: " << num << std::endl;
	try
	{
		std::cout << "float: " << static_cast<float>(num) << ".0f" << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cout << "float: impossible" << std::endl;
	}
	try
	{
		std::cout << "double: " << static_cast<double>(num) << ".0" << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cout << "double: impossible" << std::endl;
	}
}

static float getFloat(const std::string &str)
{
	float num;
	std::stringstream ss(std::string(str.begin(), str.end() - 1));

	ss >> std::skipws >> num;

	if ((ss.fail() || !ss.eof()))
	{
		throw std::invalid_argument("Invalid argument");
	}
	return (num);
}

static double getDouble(const std::string &str)
{
	double num;
	std::stringstream ss(str);

	ss >> num;
	return num;
}

static bool isChar(const std::string &literal)
{
	std::stringstream ss(literal);
	int ch;

	ss >> std::skipws >> ch;
	if (ss.fail() || !ss.eof())
		return (false);
	if (ch < 0 || ch > 255)
		return (false);
	return (true);
}

static bool isInt(const std::string &literal)
{
	std::stringstream ss;
	int64_t num;

	ss << std::skipws << literal;
	ss >> num;
	if (ss.fail() || !ss.eof())
		return (false);
	if (num < INT_MIN || num > INT_MAX)
		return (false);
	return (true);
}

static bool isFloat(const std::string &literal)
{
	double num;

	if (literal == "inff" || literal == "+inff" || literal == "-inff" || literal == "nanf" || literal == "+nanf" || literal == "-nanf")
		return (true);


	std::string fSuffix;
	std::stringstream ss(std::string(literal.begin(), literal.end() - 1));

	ss >> std::skipws >> num;
	std::stringstream ss2(std::string(literal.end() - 1, literal.end()));
	ss2 >> fSuffix;
	if (ss.fail() || !ss.eof() || fSuffix.length() != 1 || tolower(fSuffix[0]) != 'f')
		return (false);
	if (abs(num) < std::numeric_limits<float>::min() || abs(num) > std::numeric_limits<float>::max())
		return (false);
	return (true);
}

static bool isDouble(const std::string &literal)
{
	bool found_point;

	found_point = false;
	if (literal == "inf" || literal == "+inf" || literal == "-inf" || literal == "nan" || literal == "+nan" || literal == "-nan")
		return (true);

	
	for (size_t i = 0; i < literal.length(); i += 1)
	{
		if (literal.at(i) == '+' || literal.at(i) == '-')
		{
			if (i != 0)
				return (false);
			continue;
		}
		if (literal.at(i) == '.' && found_point)
			return (false);
		else if (literal.at(i) == '.')
		{
			found_point = true;
			continue;
		}
		if (!isdigit(literal.at(i)))
			return (false);
	}
	return (true);
}

static bool isPseudoLiteral(const std::string &literal)
{
	bool	isLiteral;

	isLiteral = (literal == "inff" || literal == "+inff" || literal == "-inff" || literal == "nanf" || literal == "+nanf" || literal == "-nanf"
				|| literal == "inf" || literal == "+inf" || literal == "-inf" || literal == "nan" || literal == "+nan" || literal == "-nan");
	return (isLiteral);
}

static literal_type getType(const std::string &literal)
{
	if (isChar(literal))
		return CHAR;
	if (isInt(literal))
		return INT;
	if (isFloat(literal))
		return FLOAT;
	if (isDouble(literal))
		return DOUBLE;
	return ERROR;
}

static void printChar(char ch)
{
	if (std::isprint(ch))
		std::cout << "char: '" << ch << "'" << std::endl;
	else
		std::cout << "char: Non displayable" << std::endl;
	std::cout << "int: " << static_cast<int>(ch) << std::endl;
	std::cout << "float: " << static_cast<float>(ch) << ".0f" << std::endl;
	std::cout << "double: " << static_cast<double>(ch) << ".0" << std::endl;
}

static void printFloat(float nbr)
{
	if ((static_cast<int>(nbr) < 256 && static_cast<int>(nbr) > 0) && floor(nbr) == nbr)
	{
		if (isprint(nbr))
			std::cout << "char: '" << static_cast<char>(nbr) << "'" << std::endl;
		else
			std::cout << "char: Non displayable" << std::endl;
	}
	else
		std::cout << "char: impossible" << std::endl;
	try
	{
		if (static_cast<int64_t>(nbr) < INT_MIN || static_cast<int64_t>(nbr) > INT_MAX)
			std::cout << "int: impossible" << std::endl;
		else
			std::cout << "int: " << static_cast<int>(nbr) << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cout << "int: impossible" << std::endl;
	}
	if (floor(nbr) == nbr)
	{
		std::cout << "float: " << nbr << ".0f" << std::endl;
		std::cout << "double: " << static_cast<double>(nbr) << ".0" << std::endl;
	}
	else
	{
		std::cout << "float: " << nbr << "f" << std::endl;
		std::cout << "double: " << static_cast<double>(nbr) << std::endl;
	}
}

static void printDouble(double nbr)
{
	if ((static_cast<int>(nbr) < 256 && static_cast<int>(nbr) > 0) && floor(nbr) == nbr)
	{
		if (isprint(nbr))
			std::cout << "char: '" << static_cast<char>(nbr) << "'" << std::endl;
		else
			std::cout << "char: Non displayable" << std::endl;
	}
	else
		std::cout << "char: impossible" << std::endl;
	try
	{
		if (static_cast<int64_t>(nbr) < INT_MIN || static_cast<int64_t>(nbr) > INT_MAX)
			std::cout << "int: impossible" << std::endl;
		else
			std::cout << "int: " << static_cast<int>(nbr) << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cout << "int: impossible" << std::endl;
	}
	try
	{
		if (abs(nbr) < std::numeric_limits<float>::min() || abs(nbr) > std::numeric_limits<float>::max())
			std::cout << "float: impossible" << std::endl;
		else
		{
			if (floor(nbr) == nbr)
				std::cout << "float: " << static_cast<float>(nbr) << ".0f" << std::endl;
			else
				std::cout << "float: " << static_cast<float>(nbr) << "f" << std::endl;
		}
	}
	catch (const std::exception &e)
	{
		std::cout << "float: impossible" << std::endl;
	}
	if (floor(nbr) == nbr)
		std::cout << "double: " << nbr << ".0" << std::endl;
	else
		std::cout << "double: " << nbr << std::endl;
}

static void pseudoLiteral(literal_type dest_type, const std::string &pseudo_literal)
{
	std::cout << "char: impossible" << std::endl;
	std::cout << "int: impossible" << std::endl;
	if (dest_type == FLOAT)
	{
		std::cout << "float: " << pseudo_literal << std::endl;
		std::cout << "double: " << pseudo_literal.substr(0, pseudo_literal.length() - 1) << std::endl;
	}
	else if (dest_type == DOUBLE)
	{
		std::cout << "float: " << pseudo_literal + "f" << std::endl;
		std::cout << "double: " << pseudo_literal << std::endl;
	}
}

static void printType(const std::string &literal)
{
	switch (getType(literal))
	{
	case CHAR:
		printChar(static_cast<char>(atoi(literal.c_str())));
		break;

	case INT:
		printInt(literal);
		break;

	case FLOAT:
		if (isPseudoLiteral(literal))
			pseudoLiteral(FLOAT, literal);
		else
			printFloat(getFloat(literal));
		break;

	case DOUBLE:
		if (isPseudoLiteral(literal))
			pseudoLiteral(DOUBLE, literal);
		else
			printDouble(getDouble(literal));
		break;
	default:
		throw std::invalid_argument("Invalid argument");
		break;
	}
}

void ScalarConverter::convert(const std::string &str)
{
	try
	{
		printType(str);
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << '\n';
	}
}
