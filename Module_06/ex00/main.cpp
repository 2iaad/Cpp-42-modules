#include "ScalarConverter.hpp"

/**
 * @brief Done with the Type identification.
 * 
 * (ba9i lia pseudo-literals) + Non displayable + impossible.
 * 
 */

int main(int ac, char **av)
{
	if (ac != 2)
		return std::cout << "Invalide number of arguments!" << std::endl, 1;

	ScalarConverter::convert(av[1]);

	return EXIT_SUCCESS;
}
