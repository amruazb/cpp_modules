/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabashee <aabashee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 19:56:49 by aabashee          #+#    #+#             */
/*   Updated: 2024/09/03 19:56:51 by aabashee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal(), brain(new Brain())
{
    std::cout << GREEN << "🐶 Dog constructor called ✔️" << RESET << std::endl;
	this->type = CYAN + "Dog 🐶" + RESET;
	for (int eachIdea = 0; eachIdea < 100; eachIdea++)
	{
		brain->setIdea(eachIdea, "Some Dog Ideas 🧠");
	}
}

Dog::Dog(const Dog &copy) : Animal(copy), brain(new Brain(*copy.brain))
{
    std::cout << GREEN << "🐶 Dog copy constructor called ✔️" << RESET << std::endl;
}

Dog &Dog::operator=(const Dog &rhs)
{
	std::cout << GREEN << "🐶 Dog assignment operator called ✔️" << RESET << std::endl;
	if (this != &rhs)
	{
        Animal::operator=(rhs);
        delete brain; // Free the old brain memory
        brain = new Brain(*rhs.brain); // Deep copy of brain
    }
    return *this;
}

Dog::~Dog()
{
	std::cout << RED << "🐶 Dog destructor called 🧹" << RESET << std::endl;
	delete brain; // Free brain memory
	std::cout << RED << "🐶 Dog Brain memory freed 🧠" << RESET << std::endl;
}

void Dog::makeSound() const
{
	std::cout << CYAN << "🐶 Woof Woof 🔊" << RESET << std::endl;
}

std::string Dog::showIdea(int eachIdea) const
{
	return (brain->getIdea(eachIdea));
}

void Dog::teachIdea(int eachIdea, std::string idea)
{
	brain->setIdea(eachIdea, idea);
}