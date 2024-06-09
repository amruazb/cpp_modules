#ifndef	PHONEBOOK_H
#define	PHONEBOOK_H

#include "Contact.hpp"

class PhoneBook {
pubilc:
	PhoneBook();
	void addContact();
	void searchContact();
private:
	Contact contacts[8];
	int	current_index;
	int	total_contacts;
};

#endif

