/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabashee <aabashee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 22:51:06 by aabashee          #+#    #+#             */
/*   Updated: 2024/11/04 22:51:08 by aabashee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm(const std::string& name, int signGrade, int execGrade)
	: _name(name), _signed(false), _signGrade(signGrade), _execGrade(execGrade)
{
	if (name.empty())
		throw std::invalid_argument("Name cannot be empty");
	if (signGrade < 1 || execGrade < 1)
		throw GradeTooHighException();
	if (signGrade > 150 || execGrade > 150)
		throw GradeTooLowException();
}

AForm::AForm(const AForm& src)
	: _name(src._name), _signed(src._signed), _signGrade(src._signGrade), _execGrade(src._execGrade)
{
	// std::cout << "AForm copy constructor called" << std::endl;
}

AForm& AForm::operator=(const AForm& src)
{
	if (this != &src)
	{
		// Note: name, gradeToSign, and gradeToExecute are const
		// and cannot be assigned to
		_signed = src._signed;
	}
	return (*this);
}

AForm::~AForm()
{
	// std::cout << "Form destructor called" << std::endl;
}

const std::string& AForm::getName() const
{
	return (_name);
}

bool AForm::isSigned() const
{
	return (_signed);
}

int AForm::getSignGrade() const
{
	return (_signGrade);
}

int AForm::getExecGrade() const
{
	return (_execGrade);
}

void AForm::beSigned(const Bureaucrat& b)
{
	if (b.getGrade() > _signGrade)
		throw GradeTooLowException();
	_signed = true;
}

const char* AForm::GradeTooHighException::what() const throw()
{
	return ("Grade is too high");
}

const char* AForm::GradeTooLowException::what() const throw()
{
	return ("Grade is too low");
}

const char* AForm::FormNotSignedException::what() const throw()
{
	return ("Form is not signed");
}

std::ostream& operator<<(std::ostream& output, const AForm& f)
{
	output << "Form: " << f.getName()
			<< ", signed: " << (f.isSigned() ? "true" : "false")
			<< ", sign grade: " << f.getSignGrade()
			<< ", exec grade: " << f.getExecGrade() << std::endl;
	return (output);
}
