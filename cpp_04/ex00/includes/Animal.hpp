/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabashee <aabashee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 19:31:45 by aabashee          #+#    #+#             */
/*   Updated: 2024/09/07 19:23:11 by aabashee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>

class Animal
{
protected:
	std::string	type;

public:
	Animal();
	Animal( const Animal & src );
	Animal &operator= ( const Animal & src );
	virtual ~Animal();//when we use virtual in main class to clean from both inherit and the base classes all will be destructed
	
	std::string getType() const;
	virtual void makeSound() const;
};

#endif
