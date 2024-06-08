#include <iostream>
#include "PhoneBook.hpp"
#include "Contact.hpp"

PhoneBook::PhoneBook() : cuurent_index(0), total_contacts(0) {}

void	PhoneBook::addContact()
{
	if (total_contacts < 8)
		total_contacts++;
	current_index = (current_indexx + 1) % 8;
	contacts[current_index].setDetails();
}

void	PhoneBook:searchContact()
{
	for (int i = 0; i < total_contacts; i++)
		contacts[i].displaySummary(i);
	int index;
	std::cout << "Enter the index of the contact to display: ";
	std::cin >> index;
	if (index >= 0 && index < total_contacts)
		contacts[index].displayDetails();
	else
		std::cout << "Invalid index." << std::endl;
}

