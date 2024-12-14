/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabashee <aabashee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 22:50:40 by aabashee          #+#    #+#             */
/*   Updated: 2024/11/04 22:50:42 by aabashee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <string>
#include <exception>
#include "AForm.hpp"

class AForm;

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
	class GradeTooHighException : public std::exception
    {
    public:
        virtual const char *what() const throw();
    };

    class GradeTooLowException : public std::exception
    {
    public:
        virtual const char *what() const throw();
    };

	/* Getters */
	const std::string&	getName() const;
	int getGrade() const;

	/* methods */
	void incrementGrade();
	void decrementGrade();
	
	void signForm(AForm& form);
	void executeForm(AForm const & form);
};

std::ostream& operator<<(std::ostream& os, const Bureaucrat& src);

#endif // BUREAUCRAT_HPP
