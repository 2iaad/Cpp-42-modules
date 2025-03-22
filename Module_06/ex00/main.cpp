#include "ScalarConverter.hpp"

bool	CheckChar(std::string	&arg)
{
    return arg.size() == 1 && std::isalpha(arg[0]) && std::isprint(arg[0]);
}

bool	CheckInt(std::string	&arg)
{
	int	i = 0;

    if (arg[i] == '-' || arg[i] == '+')
        i++;
    while (i < arg.size())
        if (!std::isdigit(arg[i++]))
            return false;
    return true;
}

bool	CheckFloat(std::string	&arg)

    if (arg.find( '.' ) == std::string::npos || arg.back() != 'f' 
        || arg.find( '.' ) == 0 || arg.find( '.' ) == arg.length() - 2 )
        return false;
    int found = 0;
    if ( arg[i] == '-' || arg[i] == '+' )
        i++;
    while (i < arg.length() - 1) {
        if ( arg[i] == '.' )
            found++;
        if ( ( !std::isdigit( arg[i] ) && arg[i] != '.' ) || found > 1 )
            return false;
		i++;
    }

    return true;
}

void	identifyType(std::string	&arg, Scalar	*type)
{
	if (CheckChar(arg))
	{
		std::cout << "Char" << std::endl;
		*type = Character;
	}
	else if (CheckInt(arg))
	{
		std::cout << "Int" << std::endl;
		*type = Integer;
	}
	else if (CheckFloat(arg))
	{
		std::cout << "Float" << std::endl;
		*type = Float;
	}
}

int main(int ac, char **av)
{
	if (ac != 2)
		return std::cout << "Invalide number of arguments!" << std::endl, 1;

	Scalar type;
	std::string str = av[1];
	identifyType(str, &type);

	std::cout << type << std::endl;

	return EXIT_SUCCESS;
}
	// ScalarConverter obj;