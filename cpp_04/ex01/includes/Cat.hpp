/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabashee <aabashee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 19:55:41 by aabashee          #+#    #+#             */
/*   Updated: 2024/09/03 19:55:44 by aabashee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Cat : public Animal
{
private:
	Brain	*brain;

public:
	Cat();
	Cat(const Cat &src);
	Cat &operator=(const Cat &rhs);
	virtual ~Cat(); // Virtual destructor for polymorphism

	void makeSound() const;
	std::string showIdea(int eachIdea) const;
	void teachIdea(int eachIdea, std::string idea);
};

#endif
