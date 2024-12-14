/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabashee <aabashee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 22:51:51 by aabashee          #+#    #+#             */
/*   Updated: 2024/11/04 22:51:53 by aabashee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(const std::string& target)
	: AForm("Robotomy Request", 72, 45), _target(target)
{
	// std::cout << "RobotomyRequestForm constructor" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& src) : AForm(src)
{
	// std::cout << "RobotomyRequestForm copy constructor" << std::endl;
}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& src)
{
	AForm::operator=(src);
	return (*this);
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	// std::cout << "RobotomyRequestForm destructor" << std::endl;
}

void	RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
	if (executor.getGrade() > this->getExecGrade())
		throw AForm::GradeTooLowException();
	else if (this->isSigned() == false)
		throw AForm::FormNotSignedException();
	else
	{
		std::cout << "*drilling noises* ";
		if (rand() % 2)
			std::cout << this->_target << " has been robotomized successfully." << std::endl;
		else
			std::cout << this->_target << " robotomization failed." << std::endl;
	}
}
