/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabashee <aabashee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/14 13:34:06 by aabashee          #+#    #+#             */
/*   Updated: 2024/12/14 13:34:08 by aabashee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

template <typename T>
Array<T>::Array() : _array(NULL), _size(0)
{
    // std::cout << "Array default constructor" << std::endl;
}

template <typename T>
Array<T>::Array(unsigned int n) : _array(new T[n]()), _size(n)
{
    // std::cout << "Array constructor with size" << std::endl;
}

template <typename T>
Array<T>::Array(const Array& src) : _array(new T[src._size]), _size(src._size)
{
    // std::cout << "Array copy constructor" << std::endl;
    for (size_t i = 0; i < _size; i++)
        _array[i] = src._array[i];
}

template <typename T>
Array<T>& Array<T>::operator=(const Array& src)
{
    // std::cout << "Array assignment operator" << std::endl;
    if (this == &src)
        return (*this);
    delete[] _array;
    _array = new T[src._size];
    _size = src._size;
    for (size_t i = 0; i < _size; i++)
        _array[i] = src._array[i];
    return (*this);
}

template <typename T>
Array<T>::~Array()
{
    // std::cout << "Array destructor" << std::endl;
    delete[] _array;
}

template <typename T>
T& Array<T>::operator[](unsigned int index)
{
    if (index >= _size)
        throw OutOfLimitsException();
    return _array[index];
}

template <typename T>
const T& Array<T>::operator[](unsigned int index) const
{
    if (index >= _size)
        throw OutOfLimitsException();
    return _array[index];
}

template <typename T>
unsigned int Array<T>::size() const
{
    return _size;
}
