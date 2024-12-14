/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabashee <aabashee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 19:58:05 by aabashee          #+#    #+#             */
/*   Updated: 2024/09/03 19:58:07 by aabashee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "AAnimal.hpp"
# include "Brain.hpp"

class Dog : public AAnimal
{
private:
	Brain	*brain;

public:
	Dog();
	Dog(const Dog &copy);
	Dog &operator=(const Dog &rhs);
	virtual ~Dog();

	void makeSound() const;
	std::string getType() const;
	std::string showIdea(int eachIdea) const;
	void teachIdea(int eachIdea, std::string idea);
};

#endif
