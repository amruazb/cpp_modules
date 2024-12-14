/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabashee <aabashee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 19:54:15 by aabashee          #+#    #+#             */
/*   Updated: 2024/09/03 19:54:17 by aabashee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	std::cout << "\033[1;32m😺 Cat default constructor called ✔️\033[0m" << std::endl;
	this->type = "\033[1;34mCat 😺\033[0m";
}

Cat::Cat( const Cat &copy ) : Animal(copy)
{
	std::cout << "\033[1;32m😺 Cat copy constructor called ✔️\033[0m" << std::endl;
}

Cat &Cat::operator=(const Cat &rhs)
{
	std::cout << "\033[1;32m😺 Cat assignment operator called ✔️\033[0m" << std::endl;
	if (this != &rhs)
		this->type = rhs.type;
	return (*this);
}

Cat::~Cat()
{
	std::cout << "\033[1;31m😺 Cat destructor called 🧹\033[0m" << std::endl;
}

void Cat::makeSound() const
{
	std::cout << "\033[1;35m😺 Meow Meow 🔊\033[0m" << std::endl;
}
