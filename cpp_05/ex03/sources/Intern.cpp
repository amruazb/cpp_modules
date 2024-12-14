/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabashee <aabashee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 17:16:10 by aabashee          #+#    #+#             */
/*   Updated: 2024/11/18 17:16:21 by aabashee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern()
{
	// std::cout << "Intern constructor" << std::endl;
}

Intern::Intern(const Intern& src)
{
	(void)src;
	// std::cout << "Intern copy constructor" << std::endl;
}

Intern::~Intern()
{
	// std::cout << "Intern destructor" << std::endl;
}

Intern& Intern::operator=(const Intern& src)
{
	(void)src;
	// std::cout << "Intern assignment operator" << std::endl;
	return (*this);
}

AForm *Intern::makeForm(const std::string &formName, const std::string &target)
{
	std::string	formNames[3] = {
		"shrubbery creation",
		"robotomy request",
		"presidential pardon"
	};

	AForm *forms[3] = {
		new ShrubberyCreationForm(target),
		new RobotomyRequestForm(target),
		new PresidentialPardonForm(target)
	};

	for (int index = 0; index < 3; index++)
	{
		if (formNames[index] == formName)
		{
			std::cout << "Intern creates " << formName << std::endl;
			// Clean up the other forms to avoid memory leaks
			for (int j = 0; j < 3; j++)
			{
				if (index != j)
				{
					delete forms[j];
				}
			}
			return forms[index];
		}
	}

	std::cout << "Form name " << formName << " not found" << std::endl;
	// Clean up all forms as none matched
	for (int i = 0; i < 3; i++)
	{
		delete forms[i];
	}
	return NULL; // Return a null pointer
}
