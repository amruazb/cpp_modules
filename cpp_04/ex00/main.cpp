/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabashee <aabashee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 19:54:46 by aabashee          #+#    #+#             */
/*   Updated: 2024/09/03 19:54:50 by aabashee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main(void)
{
	std::cout << "\033[1;32m---- Right Way of doing it ----\033[0m" << std::endl;
	const Animal *meta = new Animal(); // Metamorphoses into an Animal
	const Animal *mydog = new Dog();
	const Animal *mycat = new Cat();
	
	std::cout << meta->getType() << " " << std::endl;
	std::cout << mydog->getType() << " " << std::endl;
	std::cout << mycat->getType() << " " << std::endl;
	
	meta->makeSound();
	mydog->makeSound();
	mycat->makeSound(); // will output the cat sound!
	
	delete meta;
	delete mydog;
	delete mycat;
	// ----------------------------------------------------------
	std::cout << "\033[1;31m---- Wrong Way of doing it ----\033[0m" << std::endl;
	std::cout << std::endl << std::endl;
	
	const WrongAnimal *Metamorphoses = new WrongAnimal();
	const WrongAnimal *deformedCat = new WrongCat();
	
	std::cout << deformedCat->getType() << " " << std::endl;
	deformedCat->makeSound(); // will output the wrong cat sound!
	Metamorphoses->makeSound();
	delete Metamorphoses;
	delete deformedCat;
	return (0);
}
