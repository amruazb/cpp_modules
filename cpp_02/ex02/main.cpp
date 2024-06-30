#include "Fixed.hpp"
#include <iostream>

int main()
{
    Fixed a;
    Fixed const b(10);
    Fixed const c(42.42f);
    Fixed const d(b);
    Fixed const e = Fixed(5.05f) * Fixed(2);

    a = Fixed(1234.4321f);

    std::cout << "a is " << a << std::endl;
    std::cout << "b is " << b << std::endl;
    std::cout << "c is " << c << std::endl;
    std::cout << "d is " << d << std::endl;
    std::cout << "e is " << e << std::endl;

    std::cout << "a + b is " << a + b << std::endl;
    std::cout << "a - b is " << a - b << std::endl;
    std::cout << "a * b is " << a * b << std::endl;
    std::cout << "a / b is " << a / b << std::endl;
}

