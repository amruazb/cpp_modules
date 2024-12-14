/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabashee <aabashee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 19:54:22 by aabashee          #+#    #+#             */
/*   Updated: 2024/09/03 19:54:24 by aabashee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
    std::cout << "\033[1;32m🐶 Dog default constructor called ✔️\033[0m" << std::endl;
	this->type = "\033[1;34mDog 🐶\033[0m";
}

Dog::Dog(const Dog &copy) : Animal(copy)
{
    std::cout << "\033[1;32m🐶 Dog copy constructor called ✔️\033[0m" << std::endl;
	*this = copy;
}

Dog &Dog::operator=(const Dog &rhs)
{
	std::cout << "\033[1;32m🐶 Dog assignment operator called ✔️\033[0m" << std::endl;
	if (this != &rhs)
		this->type = rhs.type;
	return (*this);
}

Dog::~Dog()
{
	std::cout << "\033[1;31m🐶 Dog destructor called 🧹\033[0m" << std::endl;
}

void Dog::makeSound() const
{
	std::cout << "\033[1;35m🐶 Woof Woof 🔊\033[0m" << std::endl;
}
