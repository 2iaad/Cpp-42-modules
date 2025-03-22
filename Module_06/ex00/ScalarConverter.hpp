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

	static	void	convert(std::string	toConver);
};

void	identifyType(std::string &arg, Scalar *type);