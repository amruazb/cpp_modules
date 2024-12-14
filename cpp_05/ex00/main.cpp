/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabashee <aabashee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 17:14:07 by aabashee          #+#    #+#             */
/*   Updated: 2024/11/18 17:14:10 by aabashee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
	Bureaucrat bBob("Bob", 1);
	Bureaucrat bAlice("Aliya", 150);

	try
	{

		for (int i = 1; i < 150; i++)
		{
			std::cout << "\033[32m" << bBob << "\033[0m";
			std::cout << "\033[33m" << bAlice << "\033[0m";
			bAlice.incrementGrade();
			bBob.decrementGrade();
		}
		std::cout << "\033[32m" << bBob << "\033[0m";
		std::cout << "\033[33m" << bAlice << "\033[0m";
	}
	catch (std::exception &e)
	{
		std::cerr << "\033[31m" << e.what() << " ⚠️" << "\033[0m" << std::endl;
	}

	// Test for grade too high
	try
	{
		Bureaucrat b3("Joseph", 0);
	}
	catch (std::exception &e)
	{
		std::cerr << "\033[31m" << e.what() << " ⚠️" << "\033[0m" << std::endl;  // Red text with warning emoji
	}

	// Test for grade too low
	try
	{
		Bureaucrat b4("Jonathan", 151);
	}
	catch (std::exception &e)
	{
		std::cerr << "\033[31m" << e.what() << " ⚠️" << "\033[0m" << std::endl;  // Red text with warning emoji
	}

	// Test for empty name
	try
	{
		Bureaucrat b5("", 10);
	}
	catch (std::exception &e)
	{
		std::cerr << "\033[31m" << e.what() << " ⚠️" << "\033[0m" << std::endl;  // Red text with warning emoji
	}

	// Test for NULL (This test won't compile and is for illustrative purposes only)
	/*
	try
	{
		Bureaucrat b6(NULL, 10);
	}
	catch (std::exception &e)
	{
		std::cerr << "\033[31m" << e.what() << " ⚠️" << "\033[0m" << std::endl;  // Red text with warning emoji
	}
	*/

	return 0;
}
