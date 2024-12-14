/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabashee <aabashee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 19:56:28 by aabashee          #+#    #+#             */
/*   Updated: 2024/09/03 19:56:30 by aabashee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	std::cout << GREEN << "🧠 Brain constructor called ✔️" << RESET << std::endl;
}

Brain::Brain(const Brain &src)
{
	std::cout << GREEN << "🧠 Brain copy constructor called ✔️" << RESET << std::endl;
	*this = src;
}

Brain	&Brain::operator=(const Brain &rhs)
{
	std::cout << GREEN << "🧠 Brain assignation operator called ✔️" << RESET << std::endl;
	if (this != &rhs)
	{
		for (int eachIdea = 0; eachIdea < 100; eachIdea++)
		{
			this->ideas[eachIdea] = rhs.ideas[eachIdea];
		}
	}
	return (*this);
}

Brain::~Brain()
{
	std::cout << RED << "🧠 Brain destructor called 🧹" << RESET << std::endl;
}

std::string	Brain::getIdea(int index) const
{
	return (this->ideas[index]);
}

void	Brain::setIdea(int index, std::string idea)
{
	this->ideas[index] = idea;
}
