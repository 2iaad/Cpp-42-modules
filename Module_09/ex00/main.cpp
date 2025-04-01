#include "BitcoinExchange.hpp"

/**
 * @brief	khass tkoun ',' w7da --> count
 * 			
 */

// bool	dateParser(std::string &buf)
// {

// }

bool	Spliter(std::string &buf, std::string &date,
				std::string &price, size_t ret)
{
	std::cout << "\n------Spliter------\n";

	date = buf.substr(0, ret);
	price = buf.substr(ret + 1, buf.size() - 1);

	if (date.empty() || price.empty())
		return false ;

	std::cout << "date is:	" << date << std::endl;
	std::cout << "price is:	" << price << std::endl;
	return true ;
}

void	Parser(std::string &buf)
{
	size_t		ret;
	std::string	date;
	std::string	price;

	if ((ret = buf.find(',')) == std::string::npos ||
			std::count(buf.begin(), buf.end(), ',') != 1)
		return (void) (std::cout << COMMA_ERR << std::endl);

	if (!Spliter(buf, date, price, ret)) // split key & price
		return (void) (std::cout << EMPTY_ERR << std::endl);
	// dateParser(date); // parse the key
	// priceParser(price) // parse the price 
}

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

	// while (std::getline(infile, buffer))
	// 	Parser(buffer);

	buffer = "2022-03-25,,42222.32";
	Parser(buffer);

	infile.close();
	return 0;
}