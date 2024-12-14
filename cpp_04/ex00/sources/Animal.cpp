/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabashee <aabashee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 19:53:55 by aabashee          #+#    #+#             */
/*   Updated: 2024/09/03 19:53:57 by aabashee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
	std::cout << "\033[1;32m🐾 Animal default constructor called ✔️\033[0m" << std::endl;
	this->type = "\033[1;34mAnimal 🐾\033[0m";
}

Animal::Animal( const Animal & src )
{
	std::cout << "\033[1;33m🐾 Animal copy constructor called ✔️\033[0m" << std::endl;
	*this = src;
}

Animal &Animal::operator= ( const Animal & rhs )
{
	std::cout << "\033[1;34m🐾 Animal assignment operator called ✔️\033[0m" << std::endl;
	this->type = rhs.type;
	return *this;
}

Animal::~Animal()
{
	std::cout << "\033[1;31m🐾 Animal destructor called 🧹\033[0m" << std::endl;
}

std::string Animal::getType() const
{
	return (this->type);
}

void Animal::makeSound() const
{
	std::cout << "\033[1;35m🐾 Animal sound 🔊\033[0m" << std::endl;
}
