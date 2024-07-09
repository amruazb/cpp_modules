#include <iostream>


class demo1
{
	public:
		void show_data()
		{
			std::cout << "Hello this is demo1" << std::endl;
		}
};


class demo2
{
	public:
		void show_data()
		{
			std::cout << "Hello  this is class demo2" << std::endl;
		}
};

int main()
{
	demo1 obj1;
	demo2 obj2;
	obj1.show_data();
	obj2.show_data();
}



