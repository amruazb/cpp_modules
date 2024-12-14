/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabashee <aabashee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 19:58:12 by aabashee          #+#    #+#             */
/*   Updated: 2024/09/03 19:58:14 by aabashee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"

int main(void)
{
    const AAnimal* mycat = new Cat();
    const AAnimal* mydog = new Dog();
    // AAnimal test; // Error: cannot instantiate abstract class

    const Cat* catPtr = dynamic_cast<const Cat*>(mycat);
    if (catPtr != NULL) {
        catPtr->showIdea(0);
    }
	
    const Dog* dogPtr = dynamic_cast<const Dog*>(mydog);
    if (dogPtr != NULL) {
        dogPtr->showIdea(99);
    }

    delete mycat;
    delete mydog;

    // More tests
    const int numAnimals = 100;
    AAnimal *animals[numAnimals];

    // Fill the array with Dog and Cat objects
    for (int index = 0; index < numAnimals; ++index)
    {
        if (index < numAnimals / 2)
        {
            animals[index] = new Dog();
        }
        else
        {
            animals[index] = new Cat();
        }
    }

    // Test deep copy
    Dog dog1;
    Dog dog2 = dog1; // Copy constructor
    dog1.teachIdea(0, "Original Dog Idea");
    dog2.teachIdea(0, "Copied Dog Idea");

    std::cout << YELLOW << "Dog1 Idea 🧠: " << dog1.showIdea(0) << RESET << std::endl;
    std::cout << YELLOW << "Dog2 Idea 🧠: " << dog2.showIdea(0) << RESET << std::endl;

    Cat cat1;
    Cat cat2 = cat1; // Copy constructor
    cat1.teachIdea(0, "Original Cat Idea");
    cat2.teachIdea(0, "Copied Cat Idea");

    std::cout << YELLOW << "Cat1 Idea 🧠: " << cat1.showIdea(0) << RESET << std::endl;
    std::cout << YELLOW << "Cat2 Idea 🧠: " << cat2.showIdea(0) << RESET << std::endl;

    for (int index = 0; index < numAnimals; ++index)
    {
        delete animals[index];
    }

    return 0;
}
