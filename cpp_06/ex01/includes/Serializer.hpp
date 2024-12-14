/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabashee <aabashee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 16:56:38 by aabashee          #+#    #+#             */
/*   Updated: 2024/12/02 16:56:40 by aabashee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	SERIALIZER_HPP
#define SERIALIZER_HPP

#include <iostream>
#include <string>
#include <stdint.h>

struct	Data
{
	std::string	first_name;
	std::string	last_name;
	int			account_id;
};

class Serializer
{
private:
	Serializer();
	Serializer(Serializer const &src);
	~Serializer();

	Serializer	&operator=(Serializer const &rhs);
public:
	static uintptr_t			serialize(Data *ptr);
	static Data*				deserialize(uintptr_t raw);
};

#endif	// SERIALIZER_HPP