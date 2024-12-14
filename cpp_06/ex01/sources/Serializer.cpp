/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabashee <aabashee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 16:55:52 by aabashee          #+#    #+#             */
/*   Updated: 2024/12/02 16:56:35 by aabashee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

Serializer::Serializer()
{
	// std::cout << "Serializer default constructor" << std::endl;
}

Serializer::Serializer(Serializer const &src)
{
	// std::cout << "Serializer copy constructor" << std::endl;
	*this = src;
}

Serializer::~Serializer()
{
	// std::cout << "Serializer destructor" << std::endl;
}

Serializer	&Serializer::operator=(Serializer const &rhs)
{
	// std::cout << "Serializer assignation operator" << std::endl;
	if (this != &rhs)
	{
		// some code here
	}
	return (*this);
}

unsigned long int	Serializer::serialize(Data *ptr)
{
	// `reinterpret_cast` is used in C++ for low-level casting
	// that allows you to convert any pointer type to any other
	// pointer type, even if the types are unrelated.
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data*	Serializer::deserialize(uintptr_t raw)
{
	return (reinterpret_cast<Data *>(raw));
}
