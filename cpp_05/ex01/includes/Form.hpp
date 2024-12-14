/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabashee <aabashee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 22:45:38 by aabashee          #+#    #+#             */
/*   Updated: 2024/11/04 22:45:40 by aabashee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
private:
	const std::string	_name;
	bool				_signed;
	const int			_signGrade;
	const int			_execGrade;

	Form();
public:
	Form(const std::string& name, int signGrade, int execGrade);
	Form(const Form& src);
	~Form();
	
	Form& operator=(const Form& src);

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
	const std::string& getName() const;
	bool isSigned() const;
	int getSignGrade() const;
	int getExecGrade() const;

	/* methods */
	void beSigned(const Bureaucrat& bureaucrat);
};

std::ostream& operator<<(std::ostream& output, const Form& f);

#endif // FORM_HPP
