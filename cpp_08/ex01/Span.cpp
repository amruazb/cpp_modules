/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabashee <aabashee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/27 15:37:06 by aabashee          #+#    #+#             */
/*   Updated: 2024/12/27 15:37:08 by aabashee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"


Span::Span(unsigned int n) : _n(n)
{
    // std::cout << "Span constructor" << std::endl;
    _v.reserve(n);
}

Span::Span(const Span &src) : _n(src._n), _v(src._v)
{
    // std::cout << "Span copy constructor" << std::endl;
}

Span &Span::operator=(const Span &src)
{
    // std::cout << "Span operator=" << std::endl;
    if (this != &src)
    {
        _n = src._n;
        _v = src._v;
    }
    return (*this);
}

Span::~Span()
{
    // std::cout << "Span destructor" << std::endl;
}

const char *Span::OutOfRangeException::what() const throw()
{
    return ("Span is full");
}

const char *Span::NoSpanException::what() const throw()
{
    return ("Span is empty or has only one element");
}

void Span::addNumber(int n)
{
    if (_v.size() >= _n)
        throw OutOfRangeException();
    _v.push_back(n);
}

void Span::addNumber(std::vector<int>::iterator begin, std::vector<int>::iterator end)
{
    if (_v.size() + std::distance(begin, end) > _n)
        throw OutOfRangeException();
    _v.insert(_v.end(), begin, end);
}

int Span::shortestSpan()
{
    if (_v.size() <= 1)
        throw NoSpanException();
    std::vector<int> sorted_v = _v;
    std::sort(sorted_v.begin(), sorted_v.end());
    int min = INT_MAX;
    for (std::vector<int>::size_type i = 1; i < sorted_v.size(); i++)
    {
        min = std::min(min, sorted_v[i] - sorted_v[i - 1]);
    }
    return (min);
}

int Span::longestSpan()
{
    if (_v.size() <= 1)
        throw NoSpanException();
    int min = *std::min_element(_v.begin(), _v.end());
    int max = *std::max_element(_v.begin(), _v.end());
    return (max - min);
}

const std::vector<int> &Span::getNumbers() const
{
    return (_v);
}

