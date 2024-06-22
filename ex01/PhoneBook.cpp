#include "phonebook.hpp"

PhoneBook::PhoneBook()
{
	count = 0;
}

std::string PhoneBook::checklen(std::string data)
{
	if (data.length() > 10)
	{
		data.resize(9);
		data += ".";
	}
	return data;
}

void PhoneBook::addContact()
{
	std::cout << "PLEASE ADD CONTACTS" << std::endl;
	if (count == 8)
	{
		for (int i = 1; i < count; i++)
			Contacts[i-1] = Contacts[i];
		count--;
	}
	std::cout << "PLEASE ENTER THE FIRST NAME" <<std::endl;
	std::getline(std::cin >> std::ws, Contacts[count].First_Name);
	while(Contacts[count].First_Name.empty())
	{
		std::cout << "empty value so add again" << std::endl;
		std::getline(std::cin >> std::ws, Contacts[count].First_Name);
	}
	std::cout << "PLEASE ENTER THE LAST NAME" << std::endl;
	std::getline(std::cin >> std::ws, Contacts[count].Last_Name);
	while(Contacts[count].Last_Name.empty())
	{
		std::cout << "empty value so add again" << std::endl;
		std::getline(std::cin >> std::ws, Contacts[count].Last_Name);
	}
	std::cout << "PLEASE ENTER THE NICK NAME" << std::endl;
	std::getline(std::cin >> std::ws, Contacts[count].Nickname);
	while(Contacts[count].Last_Name.empty())
	{
		std::cout << "empty value so add again" << std::endl;
		std::getline(std::cin >> std::ws, Contacts[count].Nickname);
	}
	std::cout << "PLEASE ENTER THE PHONE NUMBER" << std::endl;
	std::getline(std::cin >> std::ws, Contacts[count].Phone_Number);
	while(Contacts[count].Last_Name.empty())
	{
		std::cout << "empty value so add again" << std::endl;
		std::getline(std::cin >> std::ws, Contacts[count].Phone_Number);
	}
	std::cout << "PLEASE ENTER THE DARKEST SECRECT" <<std::endl;
	std::getline(std::cin >> std::ws, Contacts[count].Darkest_Secret);
	while(Contacts[count].Darkest_Secret.empty())
	{
		std::cout << "empty value so add again" << std::endl;
		std::getline(std::cin >> std::ws, Contacts[count].Darkest_Secret);
	}
	count++;
}

void PhoneBook::searchContact()
{
	int search_index;

	std::cout <<std::right << "|";
	std::cout <<std::right << std::setw(10) << "INDEX" << "|";
	std::cout <<std::right << std::setw(10) << "FIRST NAME" << "|";
	std::cout <<std::right << std::setw(10) << "LAST NAME" << "|";
	std::cout <<std::right << std::setw(10) << "NICK NAME" << "|" << std::endl;

	for (int i = 0; i < count; i++)
	{
		std::cout << std::right << "|";
		std::cout << std::right << std::setw(10) << i + 1 << "|";
		std::cout << std::right << std::setw(10) << checklen(Contacts[i].First_Name) << "|";
		std::cout << std::right << std::setw(10) << checklen(Contacts[i].Last_Name) << "|";
		std::cout << std::right << std::setw(10) << checklen(Contacts[i].Nickname) << "|" << std::endl;
	}

	std::cout << "PLEASE ENTER AND INDEX" << std::endl;
	std::cin >> search_index;
	search_index--;

	if (search_index >= 0 && search_index < count)
	{
		std::cout << std::endl;
		std::cout << "FIRST NAME	: " << Contacts[search_index].First_Name << std::endl;
		std::cout << "LAST NAME		: " << Contacts[search_index].Last_Name << std::endl;
		std::cout << "NICK NAME		: " << Contacts[search_index].Nickname << std::endl;
		std::cout << "PHONE NO		: " << Contacts[search_index].Phone_Number << std::endl;
		std::cout << "DARKEST SECRET: " << Contacts[search_index].Darkest_Secret << std::endl;
		std::cout << std::endl;
	}
	else
		std::cout << "*INVALID INDEX*" << std::endl;
}


PhoneBook::~PhoneBook() {}