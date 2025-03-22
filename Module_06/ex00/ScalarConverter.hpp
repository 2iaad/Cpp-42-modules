#pragma once

#include <iostream>

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
