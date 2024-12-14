/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabashee <aabashee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 22:44:31 by aabashee          #+#    #+#             */
/*   Updated: 2024/11/04 22:45:31 by aabashee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <string>
#include <exception>
#include "Form.hpp"

class Form;

class Bureaucrat
{
private:
	const std::string	_name;
	int					_grade;

	Bureaucrat();

public:
	Bureaucrat(const std::string& name, int grade);
	Bureaucrat(Bureaucrat const& bureaucrat);
	~Bureaucrat();
	
	Bureaucrat& operator=(Bureaucrat const& bureaucrat);

	/* Exceptions */
	class GradeTooHighException : public std::exception {
	public:
		virtual const char* what() const throw();
	};

	class GradeTooLowException : public std::exception {
	public:
		virtual const char* what() const throw();
	};

	/* Getters */
	const std::string&	getName() const;
	int getGrade() const;

	/* methods */
	void incrementGrade();
	void decrementGrade();

	void signForm(Form& form);
};

std::ostream& operator<<(std::ostream& os, const Bureaucrat& src);

#endif // BUREAUCRAT_HPP