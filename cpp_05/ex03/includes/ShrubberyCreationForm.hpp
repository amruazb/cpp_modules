/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabashee <aabashee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 22:53:48 by aabashee          #+#    #+#             */
/*   Updated: 2024/11/04 22:53:51 by aabashee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include "AForm.hpp"
# include <fstream>
# include <exception>

class ShrubberyCreationForm : public AForm
{
private:
	const std::string	_target;

public:
	ShrubberyCreationForm(const std::string& target);
	ShrubberyCreationForm(const ShrubberyCreationForm& src);
	ShrubberyCreationForm& operator=(const ShrubberyCreationForm& src);
	~ShrubberyCreationForm();

	/* ---------------- Member Functions ---------------- */
	void execute(const Bureaucrat& executor) const;

	/* ---------------- exception classes ---------------- */
	class FileNotOpenException : public std::exception {
		virtual const char* what() const throw();
	};
};

#endif // SHRUBBERYCREATIONFORM_HPP
