/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabashee <aabashee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 22:50:53 by aabashee          #+#    #+#             */
/*   Updated: 2024/11/04 22:50:55 by aabashee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include "AForm.hpp"
# include <cstdlib>

class RobotomyRequestForm : public AForm
{
private:
	const std::string	_target;

public:
	RobotomyRequestForm(const std::string& target);
	RobotomyRequestForm(const RobotomyRequestForm& src);
	RobotomyRequestForm& operator=(const RobotomyRequestForm& src);
	~RobotomyRequestForm();

	/* ---------------- Member Functions ---------------- */
	void execute(const Bureaucrat& executor) const;
};

#endif // ROBOTOMYREQUESTFORM_HPP
