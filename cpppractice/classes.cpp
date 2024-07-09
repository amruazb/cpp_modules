#include <iostream>

class school
{
	private:
		std::string name;
		std::string subject;
		int marks;
	public:
		void getdata();
		void display_data();
};

void school::getdata()
{
	std::cout << " Enter student name" << std::endl;
	std::cin >> name;
	std::cout << " Enter the subject" << std::endl;
	std::cin >> subject;
	std::cout << " Enter student marks" << std::endl;
	std::cin >> marks;
}

void school::display_data()
{
	std::cout << " Student name: " << name << std::endl;
	std::cout << " subject name: " << subject << std::endl;
	std::cout << " Student marks: " << marks << std::endl;
}

int main()
{
	school student1, student2;//syntax for objects is simple class_name objects name;
	student1.getdata();
	student2.getdata();

	student1.display_data();
	student2.display_data();//we can make as many objects as we want
}

