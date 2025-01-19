/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabashee <aabashee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/27 15:36:17 by aabashee          #+#    #+#             */
/*   Updated: 2024/12/27 15:36:19 by aabashee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <algorithm>
#include <vector>
#include <list>

template <typename T>
typename T::iterator easyfind(T &container, int value);

class NotFoundException : public std::exception
{
public:
	virtual const char *what() const throw()
	{
		return "Value not found";
	}
};

#include "easyfind.tpp"

#endif