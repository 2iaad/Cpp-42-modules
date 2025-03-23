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

/*	|#-----------------------------------------------------#|
	|#						Functions 					   #|
	|#-----------------------------------------------------#|
*/

void	ScalarConverter::convert(std::string	toConvert)
{
	(void)toConvert;
}

bool	CheckChar(std::string	&arg)
{
    return arg.size() == 1 && std::isalpha(arg[0]) && std::isprint(arg[0]);
}

bool	CheckInt(std::string	&arg)
{
	size_t	i = 0;

    if (arg[i] == '-' || arg[i] == '+')
        i++;
    while (i < arg.size())
        if (!std::isdigit(arg[i++]))
            return false;
	
	std::cout << "Int" << std::endl;
    return true;
}

bool	CheckFloat(std::string	&arg)
{
	size_t	i = 0, point = arg.find('.');
	size_t	count = std::count(arg.begin(), arg.end(), '.');

    if (   point == std::string::npos // ila point makinach
        || point == 0 				 // ila point kant f arg[0]
		|| point == arg.size() - 2  // ila kant -> ".f"
		|| arg.back() != 'f' 	   // ila makantch f flkhr
		|| count > 1) 			  // kayn kter mn '.'
        return false;

    if (arg[i] == '-' || arg[i] == '+')
        i++;
    while (i < arg.size() - 1)
	{
        if ((!std::isdigit(arg[i]) && arg[i] != '.' )) return false;
		i++;
    }
	std::cout << "Float" << std::endl;
    return true;
}

bool	CheckDouble(std::string	&arg)
{
	size_t	i = 0, point = arg.find('.');
	size_t	count = std::count(arg.begin(), arg.end(), '.');

    if (   point == std::string::npos
		|| point == 0
		|| point == arg.size() - 1
		|| count > 1)
        return false;

    if (arg[i] == '-' || arg[i] == '+')
        i++;
    while (i < arg.size())
	{
        if ((!std::isdigit(arg[i]) && arg[i] != '.' )) return false;
		i++;
    }
	std::cout << "Double" << std::endl;
    return true;
}

void	identifyType(std::string	arg, Scalar	*type)
{
	if (CheckChar(arg))			*type = Character;
	else if (CheckInt(arg))		*type = Integer;
	else if (CheckFloat(arg))	*type = Float;
	else if (CheckDouble(arg))	*type = Double;
	else
		std::cout << "Walou !" << std::endl;
}