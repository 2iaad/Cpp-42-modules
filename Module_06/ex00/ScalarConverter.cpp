#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter()
{
	this->_c = 0;
	this->_i = 0;
	this->_f = 0.0f;
	this->_d = 0;
	std::cout << "ScalarConverter Constructor called" << std::endl;
}

ScalarConverter::ScalarConverter(const ScalarConverter &other)
{
	*this = other;
	std::cout << "ScalarConverter Copy Constructor called" << std::endl;
}

ScalarConverter	&ScalarConverter::operator=(const ScalarConverter &other)
{
	if (this != &other) {
		this->_c = other._c;
		this->_i = other._i;
		this->_f = other._f;
		this->_d = other._d;
	}
	std::cout << "ScalarConverter Copy Assignment Operator called" << std::endl;
	return *this;
}

ScalarConverter::~ScalarConverter()
{
	std::cout << "ScalarConverter Destructor called" << std::endl;
}

void	ScalarConverter::convert(std::string	toConvert)
{
	(void) toConvert;
}