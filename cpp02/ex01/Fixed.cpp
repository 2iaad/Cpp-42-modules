#include "Fixed.hpp"

Fixed::Fixed()
{
	this->FPvalue = 0;
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int value)
{
	this->FPvalue = value;
	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float value)
{
	std::cout << "Float constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &other) : FPvalue(other.FPvalue)
{
	// Fractional_bits = other.Fractional_bits;
	std::cout << "Copy constructor called" << std::endl;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

int		Fixed::getRawBits( void ) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return this->FPvalue;
}

void	Fixed::setRawBits( int const raw )
{
	std::cout << "setRawBits member function called" << std::endl;
	this->FPvalue = raw;
}

float	toFloat( void ) const
{

}

int		toInt( void ) const
{
	
}