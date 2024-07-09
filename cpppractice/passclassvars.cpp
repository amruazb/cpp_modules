#include <iostream>

class abc
{
	private:
		int number;
	public:
		void getdata(int);
		void display_data();
};

void abc::getdata(int x)
{
	number=x;
}

void abc::display_data()
{
	cout << "Hello this is class abc and value inside number is : " << number << std::endl;
}

class xyz
{
	private:
		int number;
	public:
		void getdata(int);
		void display_data();
};

