/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabashee <aabashee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/29 19:42:12 by aabashee          #+#    #+#             */
/*   Updated: 2024/06/29 19:42:15 by aabashee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : value(0)
{
	std::cout << "Default constructor called " << std::endl;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed& other)
{
	std::cout << "Copy constructor called " << std::endl;
	*this = other;
}

Fixed &Fixed::operator=(const Fixed& other)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &other)
		this->value = other.getRawBits();
	return(*this);
}

int Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called " << std::endl;
	return(this->value);
}

void Fixed::setRawBits( int const raw )
{
	std::cout << "setRawBits member function called " << std::endl;
	this->value = raw;
}

