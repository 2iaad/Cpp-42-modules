#include "RPN.hpp"

int main(int ac, char **av)
{
	if (ac != 2)
		return std::cerr << ARG_ERR << std::endl, 1;
	int result = RPN::evaluate(av[1]);

	std::cout << result << std::endl;
}