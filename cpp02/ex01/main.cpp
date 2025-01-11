#include "Fixed.hpp"

int main( void ) {

	Fixed a;
	Fixed b( a );
	Fixed c;
	Fixed d(b);

	c = b;

	std::cout << d.getRawBits() << std::endl;
	return 0;
}
