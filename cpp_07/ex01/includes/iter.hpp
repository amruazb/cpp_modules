/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabashee <aabashee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/14 13:26:56 by aabashee          #+#    #+#             */
/*   Updated: 2024/12/14 13:26:58 by aabashee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

#include <iostream>

template <typename T>void iter(T *arr, size_t size, void (*f)(T &))
{
    for (size_t i = 0; i < size; i++)
        f(arr[i]);
}

template <typename T>void print(T &i)
{
    std::cout << i << std::endl;
}

#endif    // ITER_HPP
