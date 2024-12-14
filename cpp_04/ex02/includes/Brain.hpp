/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabashee <aabashee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 19:57:51 by aabashee          #+#    #+#             */
/*   Updated: 2024/09/03 19:57:54 by aabashee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>
# include "Aesthetic.hpp"

class Brain
{
protected:
	std::string	ideas[100];

public:
	Brain();
	Brain(const Brain &src);
	Brain &operator=(const Brain &rhs);
	~Brain();

	std::string	getIdea(int index) const;
	void		setIdea(int index, std::string idea);
};

#endif