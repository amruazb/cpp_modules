/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabashee <aabashee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 22:50:46 by aabashee          #+#    #+#             */
/*   Updated: 2024/11/04 22:50:50 by aabashee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include "AForm.hpp"

class PresidentialPardonForm : public AForm
{
private:
	std::string	_target;

public:
	PresidentialPardonForm(const std::string& target);
	PresidentialPardonForm(const PresidentialPardonForm& src);
	~PresidentialPardonForm();
	
	PresidentialPardonForm& operator=(const PresidentialPardonForm& src);

	/* ---------------- Member Functions ---------------- */
	void execute(const Bureaucrat& executor) const;
};

#endif // PRESIDENTIALPARDONFORM_HPP
