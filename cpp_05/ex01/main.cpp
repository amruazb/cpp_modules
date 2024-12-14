/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabashee <aabashee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 22:50:22 by aabashee          #+#    #+#             */
/*   Updated: 2024/11/04 22:50:24 by aabashee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
	// Normal condition for rank 1, and a form with a sign grade of 10
	try
	{
		Bureaucrat b1("Bob", 1);
		std::cout << "🎉 \033[32m" << b1 << "\033[0m";

		Form f1("SomeDoc", 1, 10);
		std::cout << "🎉 \033[32m" << f1 << "\033[0m";
		f1.beSigned(b1);
		std::cout << "✅ \033[32m" << f1 << "\033[0m";
	}
	catch (std::exception &e)
	{
		std::cerr << "\033[31m" << e.what() << " ⚠️" << "\033[0m" << std::endl;
	}

	// Normal condition for rank 150, and a form with a sign grade of 150
	try
	{
		Bureaucrat b2("Alice", 150);
		std::cout << "🎉 \033[32m" << b2 << "\033[0m";

		Form f2("OtherDoc", 150, 100);
		std::cout << "🎉 \033[32m" << f2 << "\033[0m";
		f2.beSigned(b2);
		std::cout << "✅ \033[32m" << f2 << "\033[0m";
	}
	catch (std::exception &e)
	{
		std::cerr << "\033[31m" << e.what() << " ⚠️" << "\033[0m" << std::endl;
	}

	// Exception for a bureaucrat with a grade of 100 trying to sign a form with a sign grade of 50
	std::cout << std::endl;
	try
	{
		Bureaucrat b3("Jim", 100);
		std::cout << "🎉 \033[32m" << b3 << "\033[0m";
		Form f3("Secret", 50, 50);
		std::cout << "🎉 \033[32m" << f3 << "\033[0m";
		f3.beSigned(b3);
	}
	catch (std::exception &e)
	{
		std::cerr << "\033[31m" << e.what() << " ⚠️" << "\033[0m" << std::endl;
	}

	return 0;
}
