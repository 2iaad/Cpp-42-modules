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

/**
 * @brief convert function;
 * 
 * detect the type of the literal passed as a parameter.
 * convert it from string to its actual type.
 * then convert it explicitly to the three other data types.
 * Lastly, display the results.
 * 
 * @param toConvert is the string i will need to convert
 */

void	ScalarConverter::convert(std::string	toConvert)
{
	(void)toConvert;
}