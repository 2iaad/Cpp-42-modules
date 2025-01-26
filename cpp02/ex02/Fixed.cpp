#include "Fixed.hpp"

Fixed::Fixed() : N(0) {
	// std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int value) : N(value << Fractional_b) {
	// std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float value) : N((int) roundf(value * (1 << Fractional_b))) {
	// std::cout << "Float constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &other) : N(other.N) {
	// std::cout << "Copy constructor called" << std::endl;
}

Fixed::~Fixed() {
	// std::cout << "Destructor called" << std::endl;
}

int		Fixed::getRawBits( void ) const
{
	// std::cout << "getRawBits member function called" << std::endl;
	return this->N;
}

void	Fixed::setRawBits( int const raw )
{
	// std::cout << "setRawBits member function called" << std::endl;
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
	// we pass by reference to not create a new copy of the Obj. (to not call CP CONS)
	// const to not change the "other" object, for safety.
/*
	return reference in case of chain assignements , a = b = c.
	it will keep returning a copy but now the Object itself.
	the CP CONS will be called twice bec it will create a copy to return it.
*/

{
	// std::cout << "Copy assignment operator called" << std::endl;
	if (this != &other)
		this->N = other.getRawBits();
	return (*this);
	// return *this because we need to return reference to the object pointed by this
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


Fixed	Fixed::max( const Fixed &fixed1, const Fixed &fixed2)
{
	if (fixed1 >= fixed2)
		return (Fixed( fixed1 ));
	return (Fixed( fixed2 ));
}

Fixed	Fixed::operator+( const Fixed &other ) const
{
	return (Fixed(other.toFloat() + this->toFloat()));
}

Fixed	Fixed::operator-( const Fixed &other ) const
{
	return (Fixed(other.toFloat() - this->toFloat()));
}

Fixed	Fixed::operator*( const Fixed &other ) const
{
	return (Fixed(other.toFloat() * this->toFloat()));
}

Fixed	Fixed::operator/( const Fixed &other ) const
{
	return (Fixed(other.toFloat() / this->toFloat()));
}

bool	Fixed::operator>( const Fixed &other ) const
{
	return (this->toFloat() > other.toFloat());
}
bool	Fixed::operator<( const Fixed &other ) const
{
	return (this->toFloat() < other.toFloat());
}
bool	Fixed::operator>=( const Fixed &other ) const
{
	return (this->toFloat() >= other.toFloat());
}

bool	Fixed::operator<=( const Fixed &other ) const
{
	return (this->toFloat() <= other.toFloat());
}

bool	Fixed::operator==( const Fixed &other ) const
{
	return (this->toFloat() == other.toFloat());
}

bool	Fixed::operator!=( const Fixed &other ) const
{
	return (this->toFloat() != other.toFloat());
}

Fixed	&Fixed::operator++( void )
{
	this->N++;
	return (this->N++, *this);
}

Fixed	&Fixed::operator--( void )
{
	return (this->N--, *this);
}

Fixed	Fixed::operator++( int n )
{
	Fixed	tmp = *this;
	this->N++;
	return (tmp);
}

Fixed	Fixed::operator--( int n )
{
	Fixed	tmp = *this;
	this->N--;
	return (tmp);
}
