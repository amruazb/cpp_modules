#include <iostream>
#include "PhoneBook.hpp"
#include "Contact.hpp"

void Contact::setDetails()
{
	std::cout << "Enter first name: ";
	std::getline(std::cin, first_name);
	std::cout << "Enter last name: ";
	std::getline(std::cin, last_name);
	std::cout << "Enter nickname: ";
	std::getline(std::cin, nickname);
	std::cout << "Enter darkest secret: ";
	std::getline(std::cin, darkest_secret);
}
void Contact::displaySummary(int index) const
{
	std::cout << " | "
		<< first_name.substr(0, 10) << " | "
		<< last_name.substr(0, 10) << " | "
		<< nickname.substr(0, 10) << " | "
		<< index << std::endl;
}

void Contact::displayDetails() const
{
	std::cout << "First name: " << first_name << std::endl;
	std::cout << "Last name: " << last_name << std::endl;
	std::cout << "Nickname: " << nickname << std::endl;
	std::cout << "Darkest secret: " << darkest_secret << std::endl;
}