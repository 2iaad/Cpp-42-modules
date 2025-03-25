#pragma once

#include <stdio.h>
#include <iostream>

enum Scalar { // sizeof enums huwa 4 Bytes.
	Character,
	Integer,
	Float,
	Double,
	Literal,
	NONE
};

typedef	struct	s_data {
	char	Char;
	int		Integer;
	float	Float;
	double	Double;

	Scalar	type;
} t_data;

class ScalarConverter {
private:
	ScalarConverter();
	ScalarConverter(const ScalarConverter &other);
public:
	ScalarConverter	&operator=(const ScalarConverter &other);
	~ScalarConverter();

	/**
	 * @brief convert function;
	 * 
	 * 1 - detect the type of the literal passed as a parameter.
	 * 		-> i do this using the identifyType()
	 *
	 * 2 - convert it from string to double since it will hold all the value.
	 * then convert it explicitly to the three other data types.
	 * 		-> i do this in printer()
	 * 
	 * 3 - Lastly, display the results.
	 * 
	 * @param toConvert is the string i will need to convert
	 */

	static	void	convert(std::string	toConver);
};
