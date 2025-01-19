/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabashee <aabashee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/14 13:33:49 by aabashee          #+#    #+#             */
/*   Updated: 2024/12/14 13:33:51 by aabashee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>
#include <exception>

template <typename T>
class Array
{
private:
    T*				_array;
    unsigned int	_size;

public:
    Array();
    Array(unsigned int n);
    Array(const Array& src);
    Array& operator=(const Array& src);
    ~Array();

    T& operator[](unsigned int index);
    const T& operator[](unsigned int index) const;

    unsigned int size() const;

    class OutOfLimitsException : public std::exception
    {
    public:
        virtual const char* what() const throw() {
            return "Index out of limits";
        }
    };
};

#include "Array.tpp"

#endif // ARRAY_HPP
