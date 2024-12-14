/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabashee <aabashee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 22:52:22 by aabashee          #+#    #+#             */
/*   Updated: 2024/11/04 22:52:25 by aabashee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int	main()
{

	Bureaucrat	bCEO("Bob", 1);
	Bureaucrat	bManager("Alice", 150);

	ShrubberyCreationForm	shForm("Home");
	RobotomyRequestForm		rForm("Office");
	PresidentialPardonForm	pForm("Government");

	std::cout << "\033[32mThree forms has been sent to the bureaucrats.\033[0m" << std::endl;
	std::cout << "\033[35m 1. " << shForm << "\033[0m";
	std::cout << "\033[35m 2. " << rForm << "\033[0m";
	std::cout << "\033[35m 3. " << pForm << "\033[0m";
	std::cout << std::endl;
	std::cout << "\033[32mThe first bureaucrat will sign the forms.\033[0m" << std::endl;
	std::cout << "\033[32m";
	std::cout << "\033[35m 1. ";
	bCEO.signForm(shForm);
	std::cout << "\033[35m 1. ";
	bCEO.signForm(rForm);
	std::cout << "\033[35m 1. ";
	bCEO.signForm(pForm);
	std::cout << "\033[0m";
	std::cout << std::endl;		

	std::cout << "\033[32mThe first bureaucrat will execute the forms.\033[0m" << std::endl;
	std::cout << "\033[32m";
	std::cout << "\033[35m 1. ";
	bCEO.executeForm(shForm);
	std::cout << "\033[35m 2. ";
	bCEO.executeForm(rForm);
	std::cout << "\033[35m 3. ";
	bCEO.executeForm(pForm);
	std::cout << "\033[0m";
	std::cout << std::endl;
	

	std::cout << "\033[32mThe second bureaucrat will execute the forms.\033[0m" << std::endl;
	std::cout << "\033[32m";
	std::cout << "\033[35m 1. ";
	bManager.executeForm(shForm);
	std::cout << "\033[35m 2. ";
	bManager.executeForm(rForm);
	std::cout << "\033[35m 3. ";
	bManager.executeForm(pForm);
	std::cout << "\033[0m";
	std::cout << std::endl;
	return (0);
}