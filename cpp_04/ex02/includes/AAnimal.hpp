/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabashee <aabashee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 19:57:36 by aabashee          #+#    #+#             */
/*   Updated: 2024/09/03 19:57:38 by aabashee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_HPP
# define AANIMAL_HPP

# include <iostream>
# include "Aesthetic.hpp"

/**
	 * @brief Pure virtual function that makes a sound.
	 * 
	 * This function is declared as pure virtual, meaning it has no implementation in this class.
	 * Subclasses of AAnimal must provide their own implementation of this function.
*/
class AAnimal {
protected:
    std::string type;

public:
    AAnimal();
    AAnimal(const AAnimal& src);
	AAnimal& operator=(const AAnimal& src);
    virtual ~AAnimal();  // Virtual destructor for polymorphism

    virtual std::string getType() const = 0;
    virtual void makeSound() const = 0;
};

#endif
