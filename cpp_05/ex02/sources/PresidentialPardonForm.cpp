/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabashee <aabashee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 22:51:46 by aabashee          #+#    #+#             */
/*   Updated: 2024/11/04 22:51:48 by aabashee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(const std::string& target) : AForm("Presidential Pardon", 25, 5), _target(target)
{
	// std::cout << "PresidentialPardonForm constructor" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& src) : AForm(src)
{
	// std::cout << "PresidentialPardonForm copy constructor" << std::endl;
}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm& src)
{
	AForm::operator=(src);
	return (*this);
}

PresidentialPardonForm::~PresidentialPardonForm()
{
	// std::cout << "PresidentialPardonForm destructor" << std::endl;
}

void	PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
	if (executor.getGrade() > this->getExecGrade())
		throw AForm::GradeTooLowException();
	else if (this->isSigned() == false)
		throw AForm::FormNotSignedException();
	else
		std::cout << this->_target << " has been pardoned by Zafod Beeblebrox." << std::endl;
}
