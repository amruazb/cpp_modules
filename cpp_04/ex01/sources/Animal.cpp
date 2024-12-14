/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabashee <aabashee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 19:56:18 by aabashee          #+#    #+#             */
/*   Updated: 2024/09/03 19:56:22 by aabashee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
	std::cout << GREEN << "🐾 Animal constructor called ✔️" << RESET << std::endl;
	this->type = std::string(BLUE) + "Animal" + std::string(RESET);
}

Animal::Animal( const Animal & src )
{
	std::cout << BLUE << "🐾 Animal copy constructor called ✔️" << RESET << std::endl;
	*this = src;
}

Animal &Animal::operator= ( const Animal & rhs )
{
	std::cout << BLUE << "🐾 Animal assignation operator called ✔️" << RESET << std::endl;
	this->type = rhs.type;
	return *this;
}

Animal::~Animal()
{
	std::cout << RED << "🐾 Animal destructor called 🧹" << RESET << std::endl;
}

std::string Animal::getType() const
{
	return (this->type);
}

void Animal::makeSound() const
{
	std::cout << MAGENTA << "🐾 Animal sound ✔️" << RESET << std::endl;
}
