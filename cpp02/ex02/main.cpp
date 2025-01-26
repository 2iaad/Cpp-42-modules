#include "Fixed.hpp"
#include <iostream>

/*

	Difference between:
		Fixed	&Fixed::operator++( void );
		Fixed	Fixed::operator++( int n );
	Difference between:
		value << Fractional_b
		value * (1 << Fractional_b)
	Difference between:
		toInt();
		toFloat();
	Why
		Fixed ( 3,42f ), why f

*/


int main( void ) {

	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );

	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	
	std::cout << b << std::endl;

	std::cout << Fixed::max( a, b ) << std::endl;
	return 0;

}