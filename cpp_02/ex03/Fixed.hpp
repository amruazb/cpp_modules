/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabashee <aabashee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/29 19:48:29 by aabashee          #+#    #+#             */
/*   Updated: 2024/06/29 19:48:32 by aabashee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <cmath>
#include <ostream>

class Fixed
{
private:
	int					fixedPointValue;
	static const	int	fractionalBits = 8;

public:
	Fixed();
	Fixed( const int intNumber );
	Fixed( const float floatNumber );
	Fixed(const Fixed &fixed);
	~Fixed();

	float	toFloat(void) const;
	int		toInt(void) const;
	int		getFixedPointValue(void) const;

	// operator overloading
	Fixed	&operator=(const Fixed &fixed);
	bool	operator<(const Fixed &fixed) const;
	bool	operator>(const Fixed &fixed) const;
	bool	operator<=(const Fixed &fixed) const;
	bool	operator>=(const Fixed &fixed) const;
	bool	operator==(const Fixed &fixed) const;
	bool	operator!=(const Fixed &fixed) const;

	Fixed	operator+(const Fixed &fixed);
	Fixed	operator-(const Fixed &fixed);
	Fixed	operator*(const Fixed &fixed);
	Fixed	operator/(const Fixed &fixed);

	Fixed	operator++(); // Prefix increment
	Fixed	operator++(int); // Postfix increment
	Fixed	operator--(); // Prefix decrement
	Fixed	operator--(int); // Postfix decrement

	// static member functions
	static Fixed	&min(Fixed &fixed1, Fixed &fixed2);
	static const Fixed	&min(const Fixed &fixed1, const Fixed &fixed2);
	static Fixed	&max(Fixed &fixed1, Fixed &fixed2);
	static const Fixed	&max(const Fixed &fixed1, const Fixed &fixed2);
};

std::ostream	&operator<<(std::ostream &os, const Fixed &fixed);

#endif
