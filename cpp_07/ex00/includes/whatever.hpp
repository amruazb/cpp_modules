/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabashee <aabashee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/14 13:26:24 by aabashee          #+#    #+#             */
/*   Updated: 2024/12/14 13:26:26 by aabashee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
#define WHATEVER_HPP

#include <iostream>

template<typename T> void swap(T& a, T& b)
{
    T tmp = a;
    a = b;
    b = tmp;
}

template<typename T> T min(T a, T b)
{
	return a < b ? a : b;
}

template<typename T> T max(T a, T b)
{
	return a > b ? a : b;
}

#endif	// WHATEVER_HPP