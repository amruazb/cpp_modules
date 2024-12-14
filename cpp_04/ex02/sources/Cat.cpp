/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabashee <aabashee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 19:59:59 by aabashee          #+#    #+#             */
/*   Updated: 2024/09/03 20:00:02 by aabashee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : AAnimal(), brain(new Brain())
{
	std::cout << GREEN << "😺 Cat constructor called ✔️" << RESET << std::endl;
	this->type = CYAN + "Cat 😺" + RESET;
	for (int eachIdea = 0; eachIdea < 100; eachIdea++)
	{
		brain->setIdea(eachIdea, "Some Cat Ideas 🧠");
	}
}

Cat::Cat( const Cat &copy ) : AAnimal(copy), brain(new Brain(*copy.brain)) // Deep copy of brain
{
	std::cout << GREEN << "😺 Cat copy constructor called ✔️" << RESET << std::endl;
}

Cat &Cat::operator=(const Cat &rhs)
{
	std::cout << GREEN << "😺 Cat assignment operator called ✔️" << RESET << std::endl;
	if (this != &rhs)
	{
        AAnimal::operator=(rhs);
        delete brain; // Free the old brain memory
        brain = new Brain(*rhs.brain); // Deep copy of brain
    }
    return *this;
}

Cat::~Cat()
{
	std::cout << RED << "😺 Cat destructor called 🧹" << RESET << std::endl;
	delete brain; // Free brain memory
}

void Cat::makeSound() const
{
	std::cout << CYAN << "😺 Meow Meow 🔊" << RESET << std::endl;
}

std::string Cat::getType() const
{
    return (type);
}

std::string Cat::showIdea(int eachIdea) const
{
	return (brain->getIdea(eachIdea));
}

void Cat::teachIdea(int eachIdea, std::string idea)
{
	brain->setIdea(eachIdea, idea);
}
