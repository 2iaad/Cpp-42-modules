#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter()
{
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
	}
	std::cout << "ScalarConverter Copy Assignment Operator called" << std::endl;
	return *this;
}

ScalarConverter::~ScalarConverter()
{
	std::cout << "ScalarConverter Destructor called" << std::endl;
}
/*	|#-----------------------------------------------------#|
	|#						Identifyer 					   #|
	|#-----------------------------------------------------#|
*/
bool	CheckChar(std::string	&arg)
{
    return arg.size() == 1 && !std::isdigit(arg[0]);
}

bool	CheckInt(std::string	&arg)
{
	size_t	i = 0;

    if (arg[i] == '-' || arg[i] == '+')
        i++;
    while (i < arg.size())
        if (!std::isdigit(arg[i++]))
            return false ;
	
	std::cout << "{Int}\n" << std::endl;
    return true ;
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
        return false ;

    if (arg[i] == '-' || arg[i] == '+')
        i++;
    while (i < arg.size() - 1) // loop 9bl manwsl l last 'f', 7it deja checkit 3liha
	{
        if (!std::isdigit(arg[i]) && arg[i] != '.' ) return false ;
		i++;
    }
	std::cout << "{Float}\n" << std::endl;
    return true ;
}

bool	CheckDouble(std::string	&arg)
{
	size_t	i = 0, point = arg.find('.');
	size_t	count = std::count(arg.begin(), arg.end(), '.');

    if (   point == std::string::npos
		|| point == 0
		|| point == arg.size() - 1
		|| count > 1)
        return false ;

    if (arg[i] == '-' || arg[i] == '+')
        i++;
    while (i < arg.size())
	{
        if ((!std::isdigit(arg[i]) && arg[i] != '.' )) return false ;
		i++;
    }
	std::cout << "{Double}\n" << std::endl;
    return true ;
}

bool	CheckLiteral(std::string	&arg)
{
	if (   arg == "-inff" || arg == "-inf"
		|| arg == "+inff" || arg == "+inf"
		|| arg == "nanf"  || arg == "nan" )
		{
			std::cout << "{Literal}\n" << std::endl;
			return true ;
		}
	return false ;
}

void	identifyType(std::string	&arg, t_data	*s)
{
	if (CheckChar(arg))			s->type = Character;
	else if (CheckInt(arg))		s->type = Integer;
	else if (CheckFloat(arg))	s->type = Float;
	else if (CheckDouble(arg))	s->type = Double;
	else if (CheckLiteral(arg))	s->type = Literal;
	else
		std::cout << "Walou !" << std::endl;
}
/*	|#-----------------------------------------------------#|
	|#						Printers 					   #|
	|#-----------------------------------------------------#|
*/
void	printLiteral(t_data s)
{
	std::cout << "char: impossible!" << std::endl;
	std::cout << "int: impossible!" << std::endl;
	std::cout << "float: " << s.Float << 'f' << std::endl;
	std::cout << "double: " << s.Double << std::endl;
}

void	printNumber(t_data s)
{
	if (std::isprint(s.Char))
		std::cout << "char: '" << s.Char << "'" << std::endl;
	else
		std::cout << "char: " << "Non displayable" << std::endl;
	std::cout << "int: " << s.Integer << std::endl;
	std::cout << "float: " << s.Float << 'f' << std::endl;
	std::cout << "double: " << s.Double << std::endl;
}

void	printer(std::string	&str, t_data s)
{
	if (s.type == Character) // ila kan *char* -> makhasch ndwzo l strtod()
	{
		s.Char = str[0];
		s.Integer = static_cast< int >(s.Char);
		s.Float = static_cast< float >(s.Integer);
		s.Double = static_cast< int >(s.Integer);
	}
	else
	{
		s.Double = std::strtod(str.c_str(), NULL);

		if (s.Double < INT_MIN || s.Double > INT_MAX)
			s.type = Literal;
		s.Float = static_cast< float > (s.Double);
		s.Integer = static_cast< int > (s.Double);
		s.Char = static_cast< char > (s.Double);
	}

	switch (s.type)
	{
		case 0 :	return printNumber(s);
		case 1 :	return printNumber(s);
		case 2 :	return printNumber(s);
		case 3 :	return printNumber(s);
		case 4 :	return printLiteral(s);
		default :
			return (void) (std::cout << "Unknown type !" << std::endl);
	}
}
/*	|#-----------------------------------------------------#|
	|#						Converter 					   #|
	|#-----------------------------------------------------#|
*/
void	ScalarConverter::convert(std::string	toConvert)
{
	t_data	s;

	identifyType(toConvert, &s);
	printer(toConvert, s);
}