/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabashee <aabashee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 16:53:45 by aabashee          #+#    #+#             */
/*   Updated: 2024/11/18 16:53:47 by aabashee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <string>
#include <exception>

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
};

std::ostream& operator<<(std::ostream& os, const Bureaucrat& bureaucrat);

#endif // BUREAUCRAT_HPP
