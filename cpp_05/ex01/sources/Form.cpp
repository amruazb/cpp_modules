/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabashee <aabashee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 22:46:22 by aabashee          #+#    #+#             */
/*   Updated: 2024/11/04 22:46:25 by aabashee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(const std::string& name, int signGrade, int execGrade)
	: _name(name), _signed(false), _signGrade(signGrade), _execGrade(execGrade)
{
	if (name.empty())
		throw std::invalid_argument("Name cannot be empty");
	if (signGrade < 1 || execGrade < 1)
		throw GradeTooHighException();
	if (signGrade > 150 || execGrade > 150)
		throw GradeTooLowException();
}

Form::Form(const Form& src)
	: _name(src._name), _signed(src._signed), _signGrade(src._signGrade), _execGrade(src._execGrade)
{
	// std::cout << "Form copy constructor called" << std::endl;
}

Form& Form::operator=(const Form& src)
{
	if (this != &src)
	{
		// Note: name, gradeToSign, and gradeToExecute are const
		// and cannot be assigned to
		_signed = src._signed;
	}
	return (*this);
}

Form::~Form()
{
	// std::cout << "Form destructor called" << std::endl;
}

const std::string& Form::getName() const
{
	return (_name);
}

bool Form::isSigned() const
{
	return (_signed);
}

int Form::getSignGrade() const
{
	return (_signGrade);
}

int Form::getExecGrade() const
{
	return (_execGrade);
}

void Form::beSigned(const Bureaucrat& b)
{
	if (b.getGrade() > _signGrade)
		throw GradeTooLowException();
	_signed = true;
}

const char *Form::GradeTooHighException::what() const throw()
{
	return ("Grade is too high");
}

const char *Form::GradeTooLowException::what() const throw()
{
	return ("Grade is too low");
}

std::ostream& operator<<(std::ostream& output, const Form& f)
{
	output << "Form: " << f.getName()
			<< ", signed: " << (f.isSigned() ? "true" : "false")
			<< ", sign grade: " << f.getSignGrade()
			<< ", exec grade: " << f.getExecGrade() << std::endl;
	return (output);
}
