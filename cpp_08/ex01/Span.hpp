/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabashee <aabashee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/27 15:37:11 by aabashee          #+#    #+#             */
/*   Updated: 2024/12/27 15:37:13 by aabashee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <exception>
#include <vector>
#include <algorithm>
#include <iostream>
#include <fstream>
#include <ctime>
#include <climits>

class Span
{
private:
	unsigned int		_n;
	std::vector<int>	_v;

public:
	Span(unsigned int n);
	Span(const Span &src);
	Span &operator=(const Span &src);
	~Span();

	void addNumber(int n);
	void addNumber(std::vector<int>::iterator begin, std::vector<int>::iterator end);
	int shortestSpan();
	int longestSpan();

	class OutOfRangeException : public std::exception
	{
	public:
		virtual const char *what() const throw();
	};

	class NoSpanException : public std::exception
	{
	public:
		virtual const char *what() const throw();
	};

	const std::vector<int>& getNumbers() const;
};

#endif  // SPAN_HPP
