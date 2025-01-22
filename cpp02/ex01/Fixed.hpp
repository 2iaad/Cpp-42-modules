#pragma once

#include <iostream>
#include <cmath>

class Fixed
{
private:
	int N;
	static const int Fractional_b = 8;
public:
	Fixed();
	Fixed(const int value);
	Fixed(const float value);
	Fixed(const Fixed &other);
	~Fixed();

	Fixed	&operator=(const Fixed &other);

	int		getRawBits( void ) const;
	void	setRawBits( int const raw );

	int		toInt( void ) const;
	float	toFloat( void ) const;
};

std::ostream	&operator<<(std::ostream &out, const Fixed &fixed );