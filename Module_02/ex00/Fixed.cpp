#include "Fixed.hpp"

Fixed::Fixed()
{
	this->FPvalue = 0;
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(int value)
{
	this->FPvalue = value;
	std::cout << "Default constructor called" << std::endl;
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