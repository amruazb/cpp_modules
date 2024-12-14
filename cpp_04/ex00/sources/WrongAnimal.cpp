/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabashee <aabashee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 19:54:28 by aabashee          #+#    #+#             */
/*   Updated: 2024/09/03 19:54:30 by aabashee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	std::cout << "\033[1;32m🐾 WrongAnimal default constructor called 👹\033[0m" << std::endl;
	this->_type = "WrongAnimal";  // Underscore in _type to highlight private member
}

WrongAnimal::WrongAnimal(WrongAnimal const & src)
{
	std::cout << "\033[1;32m🐾 WrongAnimal copy constructor called 👹\033[0m" << std::endl;
	*this = src;
}

WrongAnimal &WrongAnimal::operator=(WrongAnimal const & rhs)
{
	std::cout << "\033[1;32m🐾 WrongAnimal assignment operator called 👹\033[0m" << std::endl;
	if (this != &rhs)
	{
		this->_type = rhs._type;
	}
	return (*this);
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "\033[1;31m🐾 WrongAnimal  destructor called 🧴\033[0m" << std::endl;
}

std::string WrongAnimal::getType() const
{
	return (this->_type);
}

void WrongAnimal::makeSound() const
{
	std::cout << "\033[1;33m❓ WrongAnimal makes a confusing sound 🤷\033[0m" << std::endl;
}
