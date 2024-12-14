/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabashee <aabashee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 22:54:00 by aabashee          #+#    #+#             */
/*   Updated: 2024/11/04 22:54:03 by aabashee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main()
{
	std::cout << "\033[33m" << "Testing Bureaucrat and Forms:" << "\033[0m" << std::endl;

	try
	{
		Bureaucrat b1("Bob", 1);
		Bureaucrat b2("Alice", 150);

		ShrubberyCreationForm form1("home");
		RobotomyRequestForm form2("Bender");
		PresidentialPardonForm form3("Zoidberg");

		std::cout << "🧒 \033[32m" << b1 << "\033[0m";
		std::cout << "👧 \033[32m" << b2 << "\033[0m";

		std::cout << "\033[35m 1. " << form1 << "\033[0m";
		std::cout << "\033[35m 2. " << form2 << "\033[0m";
		std::cout << "\033[35m 3. " << form3 << "\033[0m";
		std::cout << std::endl;

		std::cout << "\033[35m 1S. ";
		b1.signForm(form1);
		std::cout << "\033[35m 1S. ";
		b2.signForm(form1);
		std::cout << "\033[0m" << std::endl;

		std::cout << "\033[35m 1E. ";
		b1.executeForm(form1); // If it is signed, there is no output only file is created
		b2.executeForm(form1);
		std::cout << "\033[0m" << std::endl;

		std::cout << "\033[35m 2S. ";
		b1.signForm(form2);
		std::cout << "\033[35m 2E. ";
		b1.executeForm(form2);
		std::cout << "\033[0m" << std::endl;

		std::cout << "\033[35m 3S. ";
		b1.signForm(form3);
		std::cout << "\033[35m 3E. ";
		b1.executeForm(form3);
		std::cout << "\033[0m" << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cerr << "\033[31m" << e.what() << "\033[0m" << " ⚠️" << std::endl;
	}

	std::cout << "\n"
			  << "\033[33m" << "Testing Intern:" << "\033[0m" << std::endl;

	try
	{
		Intern intern;
		AForm *form;

		std::cout << "\033[32m   1. ";
		form = intern.makeForm("robotomy request", "Bender");
		std::cout << "\033[0m";
		if (form)
		{
			std::cout << "📜 \033[34m" << *form << "\033[0m";
			delete form;
		}

		std::cout << "\033[32m   2. ";
		form = intern.makeForm("shrubbery creation", "home");
		std::cout << "\033[0m";
		if (form)
		{
			std::cout << "📜 \033[34m" << *form << "\033[0m";
			delete form;
		}

		std::cout << "\033[32m   3. ";
		form = intern.makeForm("presidential pardon", "Zoidberg");
		std::cout << "\033[0m";
		if (form)
		{
			std::cout << "📜 \033[34m" << *form << "\033[0m";
			delete form;
		}

		std::cout << "\033[32m   4. ";
		form = intern.makeForm("invalid form", "no one");
		std::cout << "\033[0m";
		if (form)
		{
			std::cout << "❌ \033[31m" << *form << "\033[0m";
			delete form;
		}
	}
	catch (const std::exception &e)
	{
		std::cerr << "\033[31m" << e.what() << "\033[0m" << " ⚠️" << std::endl;
	}

	return 0;
}
