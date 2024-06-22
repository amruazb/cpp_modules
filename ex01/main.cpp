#include "phonebook.hpp"


int main()
{
	PhoneBook Phone;
	std::string command;

	while(42)
	{

		std::cout << std::endl;
		std::cout << "COMMANDS" << std::endl;
		std::cout << "1		ADD" << std::endl;
		std::cout << "2		SEARCH" << std::endl;
		std::cout << "3		EXIT" << std::endl;
		
		std::cin >> command;
		std::cout << command << std::endl;

		if(std::cin.fail())
		{
			std::cin.clear();
			std::cin.ignore(10000, '\n');
			std::cout << "Invalid command" << std::endl;
			break;
		}
		if (command == "1" || command == "ADD")
			Phone.addContact();
		else if (command == "2" || command == "SEARCH")
			Phone.searchContact();
		else if (command == "3" || command == "EXIT")
			break;
	}
}


