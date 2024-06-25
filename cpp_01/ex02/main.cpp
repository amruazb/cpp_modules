#include <iostream>

int main()
{
	std::string brain = "HI THIS IS BRAIN";
	std::string *stringptr = & brain;
	std::string &stringref = brain;
   	std::cout << "************************************" << std::endl;
	std::cout << "          STRING VALUE              " << std::endl;
	std::cout << "************************************" << std::endl;
	std::cout << "String : " << brain << std::endl;
	std::cout << "String Pointer : " << *stringPTR << std::endl;
	std::cout << "String Reference : " << stringREF << std::endl;
	std::cout << "************************************" << std::endl;
	std::cout << "          MEMORY ADDRESS            " << std::endl;
	std::cout << "************************************" << std::endl;
	std::cout << "String : " << &brain << std::endl;
	std::cout << "String Pointer : " << stringPTR << std::endl;
	std::cout << "String Reference : " << &stringREF << std::endl;
}

