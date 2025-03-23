#pragma once

#include <iostream>

enum Scalar { // sizeof enums huwa 4 Bytes.
	Character = 1,
	Integer = 2,
	Float = 3,
	Double = 4
};

class ScalarConverter {
private:
	char	_c;
	int		_i;
	float	_f;
	double	_d;
public:
	ScalarConverter();
	ScalarConverter(const ScalarConverter &other);
	ScalarConverter	&operator=(const ScalarConverter &other);
	~ScalarConverter();

	/**
	 * @brief convert function;
	 * 
	 * detect the type of the literal passed as a parameter.
	 * 		-> i do this using the identifyType()
	 * convert it from string to its actual type.
	 * then convert it explicitly to the three other data types.
	 * Lastly, display the results.
	 * 
	 * @param toConvert is the string i will need to convert
	 */

	static	void	convert(std::string	toConver);
};

bool	CheckChar(std::string	&arg);
bool	CheckInt(std::string	&arg);
bool	CheckFloat(std::string	&arg);
bool	CheckDouble(std::string	&arg);

void	identifyType(std::string arg, Scalar *type);