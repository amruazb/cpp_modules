#ifndef CONTACT_H
#define	CONTACT_H

#include <string>

class Contact {
	public:
		void setDetails();
		void displaySummary(int index) const;
		void displayDetails() const;
	private:
		std::string first_name;
		std::string last_name;
		std::string 