#include "RPN.hpp"

int main(int ac, char **av)
{
	if (ac != 2)
		return std::cerr << ARG_ERR << std::endl, 1;

	RPN	obj;
	try	{
		int result = obj.Evaluate(av[1]);
		std::cout << result << std::endl;
	}
	catch(const std::exception& e)	{
		std::cerr << e.what() << std::endl;;
	}
}