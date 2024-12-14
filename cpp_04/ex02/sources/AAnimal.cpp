/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabashee <aabashee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 19:59:41 by aabashee          #+#    #+#             */
/*   Updated: 2024/09/03 19:59:43 by aabashee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal() : type("Abstract Animal")
{
	std::cout << GREEN << "🐾 AAnimal constructor called ✔️" << RESET << std::endl;
}

AAnimal::AAnimal(const AAnimal& src) : type(src.type)
{   
	std::cout << BLUE << "🐾 AAnimal copy constructor called ✔️" << RESET << std::endl;
    *this = src;
}

AAnimal& AAnimal::operator=(const AAnimal& rhs)
{
    // Assignment operator implementation
    if (this != &rhs) {
        type = rhs.type;
    }
    return *this;
}

AAnimal::~AAnimal()
{
    std::cout << RED << "🐾 AAnimal destructor called 🧹" << RESET << std::endl;
}
