/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabashee <aabashee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 19:55:21 by aabashee          #+#    #+#             */
/*   Updated: 2024/09/03 19:55:23 by aabashee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>
# include "Aesthetic.hpp"

class Animal
{
protected:
	std::string	type;

public:
	Animal();
	Animal(const Animal & src);
	Animal &operator=(const Animal & rhs);
	virtual ~Animal(); // destructor should be virtual
	
	std::string getType() const;
	virtual void makeSound() const;
};

#endif
