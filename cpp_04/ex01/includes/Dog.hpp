/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabashee <aabashee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 19:55:48 by aabashee          #+#    #+#             */
/*   Updated: 2024/09/03 19:55:50 by aabashee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Dog : public Animal
{
private:
	Brain	*brain;

public:
	Dog();
	Dog(const Dog &copy);
	Dog &operator=(const Dog &rhs);
	~Dog();

	void makeSound() const;
	std::string showIdea(int eachIdea) const;
	void teachIdea(int eachIdea, std::string idea);
};

#endif