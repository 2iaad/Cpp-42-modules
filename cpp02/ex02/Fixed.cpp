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

Fixed	Fixed::min(Fixed &fixed1, Fixed &fixed2)
{
	if (fixed1 > fixed2)
		return (Fixed( fixed2 ));
	return (Fixed( fixed1 ));
}

Fixed	Fixed::max( Fixed &fixed1, Fixed &fixed2)
{
	if (fixed1 >= fixed2)
		return (Fixed( fixed1 ));
	return (Fixed( fixed2 ));
}

Fixed	Fixed::operator+( const Fixed &fixed1 ) const
{
	return (Fixed(fixed1.toFloat() + this->toFloat()));
}

Fixed	Fixed::operator-( const Fixed &fixed1 ) const
{
	return (Fixed(fixed1.toFloat() - this->toFloat()));
}

Fixed	Fixed::operator*( const Fixed &fixed1 ) const
{
	return (Fixed(fixed1.toFloat() * this->toFloat()));
}

Fixed	Fixed::operator/( const Fixed &fixed1 ) const
{
	return (Fixed(fixed1.toFloat() / this->toFloat()));
}

bool	Fixed::operator>( const Fixed &fixed1 ) const
{
	return (this->toFloat() > fixed1.toFloat());
}
bool	Fixed::operator<( const Fixed &fixed1 ) const
{
	return (this->toFloat() < fixed1.toFloat());
}
bool	Fixed::operator>=( const Fixed &fixed1 ) const
{
	return (this->toFloat() >= fixed1.toFloat());
}

bool	Fixed::operator<=( const Fixed &fixed1 ) const
{
	return (this->toFloat() <= fixed1.toFloat());
}

bool	Fixed::operator==( const Fixed &fixed1 ) const
{
	return (this->toFloat() == fixed1.toFloat());
}

bool	Fixed::operator!=( const Fixed &fixed1 ) const
{
	return (this->toFloat() != fixed1.toFloat());
}

Fixed	&Fixed::operator++( void )
{
	(this->N)++;
	return (*this);
}

Fixed	&Fixed::operator--( void )
{
	(this->N)--;
	return (*this);
}

Fixed	Fixed::operator++( int n )
{
	Fixed	aux = *this;
	if (n < 0)
	{
		while (n <= 0)
		{
			--*this;
			n++;
		}
	}
	else
	{
		while (n >= 0)
		{
			++*this;
			n--;
		}
	}
	return (aux);
}

Fixed	Fixed::operator--( int n )
{
	Fixed	aux = *this;
	if (n < 0)
	{
		while (n <= 0)
		{
			++*this;
			n++;
		}
	}
	else
	{
		while (n >= 0)
		{
			--*this;
			n--;
		}
	}
	return (aux);
}
