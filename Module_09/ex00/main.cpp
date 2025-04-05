#include "BitcoinExchange.hpp"

bool	dateDigitChecker(std::string date[3])
{
	for (size_t	i = 0; i < 3; i++)
	{
		for (size_t	j = 0; j < date[i].size(); j++)
			if (!std::isdigit(date[i][j]))					return false ;
	}
	return true ;
}

bool	priceParser(std::string &price)
{
	std::cout << "\n#-------------# priceParser #-------------#\n\n";
	
	if (std::count(price.begin(), price.end(), '.') > 1)	return false ;
	for (auto c : price) // fhad case c rah *char*
		if (!std::isdigit(c) && c != '.')					return false ;

	double	value = std::strtod(price.c_str(), NULL);
	if (value < 0 || value > 1000)							return false ;

	return true ;
}

bool	dateChecker(std::string date[3]) // check if DD-MM-YYYY makes sence or not
{
	double Y = std::strtod(date[0].c_str(), NULL);
	double M = std::strtod(date[1].c_str(), NULL);
	double D = std::strtod(date[2].c_str(), NULL);

	std::cout << Y << "-" << M << "-" << D << std::endl;

	if (M == 2 && D > 29) // sana kabisa hh
		return false ;
	if ((D < 0 || D > 31) || (M < 0 || M > 12) || (Y < 0 || Y > FLT_MAX))
		return false ;
	return true ;
}

bool	dateParser(std::string &buf)
{
	std::cout << "\n#-------------# dateParser #-------------#\n\n";

	std::size_t	ret(0);
	std::size_t	old_ret(0);
	std::string	date[3];

	for (short int i = 0; i < 3; i++)
	{
		ret = buf.find('-', ret);
		date[i] = buf.substr(old_ret, ret - old_ret);
		old_ret = ++ret; // increment->to skip the '-' in old_ret + to start from the charachter that follows '-' in find()
	}

	std::cout << "date [0]:	{" << date[0] << "}" << std::endl;
	std::cout << "date [1]:	{" << date[1] << "}" << std::endl;
	std::cout << "date [2]:	{" << date[2] << "}" << std::endl;

	if (date[0].empty() || date[1].empty() || date[2].empty())	return false ;
	if (std::count(buf.begin(), buf.end(), '-') != 2)			return false ;
	if (!dateDigitChecker(date))								return false ;
	if (!dateChecker(date))										return false ;
	return true ;
}

bool	Spliter(std::string &buf, std::string &date,
				std::string &price, size_t ret)
{
	std::cout << "\n#-------------# Spliter #-------------#\n\n";

	try {
		date = buf.substr(0, ret - 1);
		price = buf.substr(ret + 2, buf.size() - 1);
	} catch(const std::exception& e) { return false ;}

	if (date.empty() || price.empty()) return false ;

	std::cout << "date is:	{" << date << "}" << std::endl;
	std::cout << "price is:	{" << price << "}"<< std::endl;
	return true ;
}

void	Parser(std::string &buf)
{
	size_t		ret;
	std::string	date;
	std::string	price;

	if ((ret = buf.find('|')) == std::string::npos ||
			std::count(buf.begin(), buf.end(), '|') != 1)
		return (void) (std::cout << PIPE_ERR << std::endl);

	if (!Spliter(buf, date, price, ret))						// split key & price
		return (void) (std::cout << EMPTY_ERR << std::endl);
	if (!priceParser(price))									// parse the price
		return (void) (std::cout << PRICE_ERR << std::endl);
	if (!dateParser(date))										// parse the key
		return (void) (std::cout << DATE_ERR << std::endl);
}

void	inputFileReader(char *file)
{
	std::fstream	infile;
	std::string		input;

	infile.open(file);
	if (!infile)
		return (void) (std::cerr << OPEN_ERR << std::endl);
	
	std::getline(infile, input);
	while (std::getline(infile, input))
		Parser(input);

	infile.close();
}

void	mapPrinter(std::map <std::string , float> Base)
{
	printf("\n\n\n				#####				\n\n\n");

	std::map < std::string, float >::iterator it;
	for (it = Base.begin(); it != Base.end(); it++)
	{
		std::cout << it->first << " _ " << it->second << std::endl;
	}
}

void	dataBaseReader(std::map<std::string , float> dataBase)
{
	std::size_t		ret;
	std::string		line;
	std::string		date;
	std::string		valueStr;
	float			valueFlt;
	std::fstream	infile;

	infile.open("data.csv");
	if (!infile)
		return (void) (std::cerr << OPEN_ERR << std::endl);

	std::getline(infile, line);
	while (std::getline(infile, line))
	{
		date = line.substr(0, 10);
		valueStr = line.substr(10 + 1, line.size() - 1);
		// printf("{%s}", valueStr.c_str());
		valueFlt = static_cast < float >(std::strtod(valueStr.c_str(), NULL));

		dataBase[date] = valueFlt;
	}

	infile.close();
}

int main( int ac, char **av )
{
	std::map <std::string , float> dataBase;
	std::map <std::string , float> inputBase;


	if (ac != 2)
		return std::cout << ARG_ERR << std::endl, 1;
	inputFileReader(av[1]);

	dataBaseReader(dataBase);

	mapPrinter(dataBase);

	return 0;
}