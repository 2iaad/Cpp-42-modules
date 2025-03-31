#include "BitcoinExchange.hpp"

// void	Spliter(std::string &buf, std::string &date[3], std::string &price)
// {

// }

// void	Parser(std::string &buf)
// {
// 	std::string	date[3];
// 	std::string	price;

// 	Spliter(buf, date, price); // split key & price
// 	dateSpliter(buf, date); // split key (DD-MM-YYYY)
// 	dateParser(date); // parse the key
// 	priceParser(price) // parse the price 
// }

int main( int ac, char **av )
{
	std::fstream	infile;
	std::string		buffer;

	if (ac != 2)
		return std::cout << ARG_ERR << std::endl, 1;
	infile.open(av[1]);
	if (!infile)
		return std::cerr << OPEN_ERR << std::endl, 1;

	std::map <std::string , float> _map;

	while (std::getline(infile, buffer))
		std::cout << buffer << std::endl;

	infile.close();
	return 0;
}