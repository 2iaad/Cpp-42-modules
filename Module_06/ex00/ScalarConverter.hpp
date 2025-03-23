#pragma once

#include <iostream>

enum Scalar { // sizeof enums huwa 4 Bytes.
	Character = 0,
	Integer = 1,
	Float = 2,
	Double = 3,
	Literal = 4
};

class ScalarConverter {
public:
	ScalarConverter();
	ScalarConverter(const ScalarConverter &other);
	ScalarConverter	&operator=(const ScalarConverter &other);
	~ScalarConverter();

	/**
	 * @brief convert function;
	 * 
	 * 1 - detect the type of the literal passed as a parameter.
	 * 		-> i do this using the identifyType()
	 *
	 * 2 - convert it from string to its actual type.
	 * then convert it explicitly to the three other data types.
	 * 
	 * 3 - Lastly, display the results.
	 * 
	 * @param toConvert is the string i will need to convert
	 */

	static	void	convert(std::string	toConver);
};

/* -----------#  Type Checkers  #----------- */

bool	CheckChar(std::string	&arg);
bool	CheckInt(std::string	&arg);
bool	CheckFloat(std::string	&arg);
bool	CheckDouble(std::string	&arg);
bool	CheckLiteral(std::string	&arg);

void	identifyType(std::string &arg, Scalar *type);