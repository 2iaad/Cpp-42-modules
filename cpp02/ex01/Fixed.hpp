#pragma once

#include <iostream>

class Fixed
{
private:
	int FPvalue;
	static const int Fractional_bits;
public:
	Fixed();
	Fixed(const int value);
	Fixed(const Fixed &other);
	~Fixed();
	int		getRawBits( void ) const;
	void	setRawBits( int const raw );
};
