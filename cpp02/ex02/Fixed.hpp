#pragma once

#include <iostream>
#include <cmath>

class Fixed
{
private:
	int				N;
	static const int Fractional_b = 8;
public:
	Fixed();
	Fixed(const int value);
	Fixed(const float value);
	Fixed(const Fixed &other);
	~Fixed();


	int		getRawBits( void ) const;
	void	setRawBits( int const raw );

	int		toInt( void ) const;
	float	toFloat( void ) const;

	Fixed	&operator=(const Fixed &other);
	Fixed	operator+( const Fixed &other ) const;
	Fixed	operator-( const Fixed &other ) const; 
	Fixed	operator*( const Fixed &other ) const;
	Fixed	operator/( const Fixed &other ) const;
	Fixed	&operator++( void );
	Fixed	&operator--( void );
	Fixed	operator++( int n );
	Fixed	operator--( int n );

	bool	operator>( const Fixed &other ) const;
	bool	operator<( const Fixed &other ) const;
	bool	operator>=( const Fixed &other ) const;
	bool	operator<=( const Fixed &other ) const;
	bool	operator==( const Fixed &other ) const;
	bool	operator!=( const Fixed &other ) const;


	static Fixed	min( Fixed &fixed1, Fixed &fixed2);
	static Fixed	min( const Fixed &fixed1, const Fixed &fixed2);

	static Fixed	max( Fixed &fixed1, Fixed &fixed2);
	static Fixed	max( const Fixed &fixed1, const Fixed &fixed2);
};

std::ostream	&operator<<(std::ostream &out, const Fixed &fixed );