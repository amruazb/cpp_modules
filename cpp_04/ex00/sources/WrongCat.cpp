/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabashee <aabashee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 19:54:34 by aabashee          #+#    #+#             */
/*   Updated: 2024/09/03 19:54:37 by aabashee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() 
{
	std::cout << "\033[1;32m🦁 WrongCat default constructor called 🆗\033[0m" << std::endl;
	this->_type = "\033[1;34mWrongCat 🦁\033[0m";
}

WrongCat::WrongCat(WrongCat const & src) : WrongAnimal(src)
{
	std::cout << "\033[1;32m🦁 WrongCat copy constructor called 🆗\033[0m" << std::endl;
}

WrongCat &WrongCat::operator=(WrongCat const & rhs)
{
	std::cout << "\033[1;32m🦁 WrongCat assignment operator called 🆗\033[0m" << std::endl;
	if (this != &rhs)
	{
		this->_type = rhs._type;
	}
	return (*this);
}

WrongCat::~WrongCat()
{
	std::cout << "\033[1;31m🦁 WrongCat destructor called 🧴\033[0m" << std::endl;
}

void WrongCat::makeSound() const
{
	std::cout << "\033[1;33m🐕 Heoow Heoow! (Wait, what?) 🐕\033[0m" << std::endl;
}
