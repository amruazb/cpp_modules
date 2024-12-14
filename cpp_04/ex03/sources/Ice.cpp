/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabashee <aabashee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 20:02:39 by aabashee          #+#    #+#             */
/*   Updated: 2024/09/03 20:02:41 by aabashee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice() : AMateria("ice")
{
	// std::cout << "Ice default constructor called" << std::endl;
}

Ice::Ice(const Ice &copy) : AMateria(copy)
{
	// std::cout << "Ice copy constructor called" << std::endl;
	*this = copy;
}


Ice &Ice::operator=(const Ice &copy)
{
	// std::cout << "Ice assignation operator called" << std::endl;
	if (this == &copy)
		return (*this);
	this->_type = copy._type;
	return (*this);
}

Ice::~Ice()
{
	// std::cout << "Ice destructor called" << std::endl;
}

AMateria *Ice::clone() const
{
	// std::cout << "Ice clone function called" << std::endl;
	return (new Ice(*this));
}
