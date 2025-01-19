/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabashee <aabashee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/27 15:37:27 by aabashee          #+#    #+#             */
/*   Updated: 2024/12/27 15:37:29 by aabashee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <list>
#include <algorithm>
#include <stack>
#include <iostream>

/* definition */
template <typename T>
class MutantStack : public std::stack<T>
{
public:
	MutantStack();
	MutantStack(const MutantStack<T>& other);
	virtual ~MutantStack();

	MutantStack<T>& operator=(const MutantStack<T>& other);

	typedef typename std::stack<T>::container_type::iterator iterator;
	
	iterator begin();
	iterator end();
};

#include "MutantStack.tpp"

#endif	// MUTANTSTACK_HPP
