#include <iostream>

void add(int a, int b)
{

	std::cout <<"The addition of two numbers is " << a + b << std::endl;

}

void add(double a, double b)
{

	std::cout << "Addition is " << a + b << std::endl;

}

int main()

{

	int first, second;
	double fir, sec;

	std::cout << " Enter two Integers" << std::endl;
	std::cin >> first >> second;
	add(first, second);
	std::cout << " Enter two doubles" << std::endl;
	std::cin >> fir >> sec;
	add(fir, sec);

}

