#pragma once

#include <iostream>
#include <cmath>

class Fixed
{
private:
	int				 N;
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
	Fixed	operator++( int );
	Fixed	operator--( int );

	bool	operator>( const Fixed &other ) const;
	bool	operator<( const Fixed &other ) const;
	bool	operator>=( const Fixed &other ) const;
	bool	operator<=( const Fixed &other ) const;
	bool	operator==( const Fixed &other ) const;
	bool	operator!=( const Fixed &other ) const;


	static Fixed	min( Fixed &left, Fixed &right);
	static Fixed	min( const Fixed &left, const Fixed &right);

	static Fixed	max( Fixed &left, Fixed &right);
	static Fixed	max( const Fixed &left, const Fixed &right);
};

std::ostream	&operator<<(std::ostream &out, const Fixed &fixed );