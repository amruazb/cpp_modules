#ifndef FIXED_HPP
# define FIXED_HPP

#include<iostream>
#include<string>

class Fixed
{
	private:
		int value;
		static const int bit = 8;

	public:
		Fixed();
		Fixed(const Fixed &copy);
		Fixed &operator=(const Fixed &rhs);
		~Fixed();
		int getRawBits( void ) const;
		void setRawBits( int const raw);
};

#endif
