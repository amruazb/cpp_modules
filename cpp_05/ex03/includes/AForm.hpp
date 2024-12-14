/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabashee <aabashee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 22:53:21 by aabashee          #+#    #+#             */
/*   Updated: 2024/11/04 22:53:23 by aabashee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include "Bureaucrat.hpp"

class Bureaucrat;

class AForm
{
private:
	const std::string	_name;
	bool				_signed;
	const int			_signGrade;
	const int			_execGrade;

public:
	AForm(const std::string& name, int signGrade, int execGrade);
	AForm(const AForm& src);
	AForm& operator=(const AForm& src);
	virtual	~AForm();

	/* ------------------- Getters ------------------- */
	const std::string& getName() const;
	bool isSigned() const;
	int getSignGrade() const;
	int getExecGrade() const;

	/* ---------------- Member Functions ---------------- */
	void beSigned(const Bureaucrat& bureaucrat);
	virtual void execute(Bureaucrat const & executor) const = 0;

	/* ---------------- Exception Classes ---------------- */
	class GradeTooHighException : public std::exception {
	public:
		virtual const char* what() const throw();
	};

	class GradeTooLowException : public std::exception {
	public:
		virtual const char* what() const throw();
	};

	class FormNotSignedException : public std::exception {
	public:
		virtual const char* what() const throw();
	};
};

std::ostream& operator<<(std::ostream& out, const AForm& form);

#endif // FORM_HPP
