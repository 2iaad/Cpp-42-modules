#pragma once

#include <iostream>

class Fixed
{
private:
	int FPvalue;
	static const int Fractional_bits = 8;
public:
	Fixed();
	Fixed(int value);
	~Fixed();
	int		getRawBits( void ) const;
	void	setRawBits( int const raw );
};