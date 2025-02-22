#include "Fixed.hpp"

Fixed::Fixed()
{
	this->N = 0;
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int value) : N(value << Fractional_b)
{
	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float value) : N((int) roundf(value * (1 << Fractional_b)))
{
	std::cout << "Float constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &other) : N(other.N)
{
	std::cout << "Copy constructor called" << std::endl;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

int		Fixed::getRawBits( void ) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return this->N;
}

void	Fixed::setRawBits( int const raw )
{
	std::cout << "setRawBits member function called" << std::endl;
	this->N = raw;
}

int		Fixed::toInt( void ) const
{
	return ((int) roundf ((float)this->N / (1 << this->Fractional_b)));
}

float	Fixed::toFloat( void ) const
{
	return((float)this->N / (1 << this->Fractional_b));
}

Fixed	&Fixed::operator=(const Fixed &other)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &other)
		this->N = other.getRawBits();
	return (*this);
}

std::ostream	&operator<<(std::ostream &out, const Fixed &fixed)
{
	out << fixed.toFloat();
	return (out);
}