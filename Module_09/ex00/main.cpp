#include "BitcoinExchange.hpp"

template < typename T >
void	mapPrinter(T Base)
{
	typename T::iterator it;
	for (it = Base.begin(); it != Base.end(); it++)
	{
		std::cout << it->first << " _ " << it->second << std::endl;
	}
}

int main(int ac, char **av)
{
	BitcoinExchange obj;

	if (ac != 2)
		return std::cout << OPEN_ERR << std::endl, 1;

	obj.dataBaseReader();
	obj.inputFileReader(av[1]);

	// mapPrinter(obj.dataBase);
	return 0;
}