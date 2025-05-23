#include "BitcoinExchange.hpp"

int main(int ac, char **av)
{
	BitcoinExchange obj;

	if (ac != 2)
		return std::cout << OPEN_ERR << std::endl, 1;

	obj.dataBaseReader();
	obj.inputFileReader(av[1]);

	return 0;
}