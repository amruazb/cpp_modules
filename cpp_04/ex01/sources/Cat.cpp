/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabashee <aabashee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 19:56:36 by aabashee          #+#    #+#             */
/*   Updated: 2024/09/03 19:56:39 by aabashee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal(), brain(new Brain())
{
	std::cout << GREEN << "😺 Cat constructor called ✔️" << RESET << std::endl;
	this->type = CYAN + "Cat 😺" + RESET;
	for (int eachIdea = 0; eachIdea < 100; eachIdea++)
	{
		brain->setIdea(eachIdea, "Some Cat Ideas 🧠");
	}
}

Cat::Cat( const Cat &copy ) : Animal(copy), brain(new Brain(*copy.brain)) // Deep copy of brain
{
	std::cout << GREEN << "😺 Cat copy constructor called ✔️" << RESET << std::endl;
}

Cat &Cat::operator=(const Cat &rhs)
{
	std::cout << GREEN << "😺 Cat assignment operator called ✔️" << RESET << std::endl;
	if (this != &rhs)
	{
        Animal::operator=(rhs);
        delete brain; // Free the old brain memory
        brain = new Brain(*rhs.brain); // Deep copy of brain
    }
    return *this;
}

Cat::~Cat()
{
	std::cout << RED << "😺 Cat destructor called 🧹" << RESET << std::endl;
	delete brain; // Free brain memory
	std::cout << RED << "😺 Cat Brain memory freed 🧠" << RESET << std::endl;
}

void Cat::makeSound() const
{
	std::cout << CYAN << "😺 Meow Meow 🔊" << RESET << std::endl;
}

std::string Cat::showIdea(int eachIdea) const
{
	return (brain->getIdea(eachIdea));
}

void Cat::teachIdea(int eachIdea, std::string idea)
{
	brain->setIdea(eachIdea, idea);
}
