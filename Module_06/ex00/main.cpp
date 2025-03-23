#include "ScalarConverter.hpp"

/**
 * @brief Done with the Type identification. (ba9i lia pseudo-literals)
 * 
 */

int main(int ac, char **av)
{
	if (ac != 2)
		return std::cout << "Invalide number of arguments!" << std::endl, 1;

	Scalar type;

	identifyType(av[1], &type);

	std::cout << type << std::endl;

	return EXIT_SUCCESS;
}
