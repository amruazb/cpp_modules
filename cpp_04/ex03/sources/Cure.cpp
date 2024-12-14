/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabashee <aabashee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 20:02:33 by aabashee          #+#    #+#             */
/*   Updated: 2024/09/03 20:02:35 by aabashee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure() : AMateria("cure")
{
	// std::cout << "Cure default constructor called" << std::endl;
}

Cure::Cure(const Cure &copy) : AMateria(copy)
{
	// std::cout << "Cure copy constructor called" << std::endl;
	*this = copy;
}

Cure &Cure::operator=(const Cure &copy)
{
	// std::cout << "Cure assignation operator called" << std::endl;
	if (this == &copy)
		return (*this);
	this->_type = copy._type;
	return (*this);
}

Cure::~Cure()
{
	// std::cout << "Cure destructor called" << std::endl;
}

AMateria *Cure::clone() const
{
	// std::cout << "Cure clone function called" << std::endl;
	return (new Cure(*this));
}
