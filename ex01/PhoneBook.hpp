#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <string>
#include <iostream>
#include <iomanip>

class Contact{

    public:
        std::string     First_Name;
        std::string     Last_Name;
        std::string     Nickname;
        std::string	    Phone_Number;
        std::string	    Darkest_Secret;
};

class PhoneBook
{
	public:
		Contact Contacts[8];
		int count;

		PhoneBook();
		~PhoneBook();
		void addContact();
		void searchContact();
		std::string checklen(std::string data);
};

#endif
