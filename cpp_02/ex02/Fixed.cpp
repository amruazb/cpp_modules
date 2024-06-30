#include "Fixed.hpp"


// Default constructor
Fixed::Fixed() : value(0) {
    std::cout << "Default constructor called" << std::endl;
}

// Integer constructor
Fixed::Fixed(const int intValue) {
    std::cout << "Int constructor called" << std::endl;
    this->value = intValue << fractionalBits;  // Convert int to fixed-point
}

// Float constructor
Fixed::Fixed(const float floatValue) {
    std::cout << "Float constructor called" << std::endl;
    this->value = roundf(floatValue * (1 << fractionalBits));  // Convert float to fixed-point
}

// Copy constructor
Fixed::Fixed(const Fixed& other) {
    std::cout << "Copy constructor called" << std::endl;
    *this = other;
}

// Copy assignment operator
Fixed& Fixed::operator=(const Fixed& other) {
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &other) {
        this->value = other.getRawBits();
    }
    return *this;
}

// Destructor
Fixed::~Fixed() {
    std::cout << "Destructor called" << std::endl;
}

// Getter for raw bits
int Fixed::getRawBits(void) const {
    return this->value;
}

// Setter for raw bits
void Fixed::setRawBits(int const raw) {
    this->value = raw;
}

// Convert fixed-point to float
float Fixed::toFloat(void) const {
    return static_cast<float>(this->value) / (1 << fractionalBits);
}

// Convert fixed-point to int
int Fixed::toInt(void) const {
    return this->value >> fractionalBits;
}

// Addition operator
Fixed Fixed::operator+(const Fixed& other) const {
    Fixed result;
    result.setRawBits(this->getRawBits() + other.getRawBits());
    return result;
}

// Subtraction operator
Fixed Fixed::operator-(const Fixed& other) const {
    Fixed result;
    result.setRawBits(this->getRawBits() - other.getRawBits());
    return result;
}

// Multiplication operator
Fixed Fixed::operator*(const Fixed& other) const {
    Fixed result;
    result.setRawBits((this->getRawBits() * other.getRawBits()) >> fractionalBits);
    return result;
}

// Division operator
Fixed Fixed::operator/(const Fixed& other) const {
    Fixed result;
    result.setRawBits((this->getRawBits() << fractionalBits) / other.getRawBits());
    return result;
}

// Overload insertion operator for printing
std::ostream& operator<<(std::ostream& os, const Fixed& fixed) {
    os << fixed.toFloat();
    return os;
}

