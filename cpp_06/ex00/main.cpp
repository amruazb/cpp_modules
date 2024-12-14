/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabashee <aabashee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 16:54:47 by aabashee          #+#    #+#             */
/*   Updated: 2024/12/02 16:54:50 by aabashee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int main(int argc, char *argv[])
{
	std::stringstream ss;
	std::string input;
	
	if (argc != 2)
	{
		std::cerr << "\033[1;31mError: Invalid number of arguments\033[0m" << std::endl;
		return 1;
	}

	ss << std::string(argv[1]);

	ss >> std::skipws >> input;
	
	if (input.empty())
	{
		std::cerr << "\033[1;31mError: Empty argument\033[0m" << std::endl;
		return 1;
	}

	if (!ss.eof())
		ss >> std::ws;
		
	if (ss.fail() || !ss.eof())
	{
		std::cerr << "\033[1;31mError: Invalid argument\033[0m" << std::endl;
		return 1;
	}

	ScalarConverter::convert(input);

	return 0;
}
