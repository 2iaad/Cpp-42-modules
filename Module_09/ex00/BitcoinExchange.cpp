#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange() {
	// std::cout << "BitcoinExchange Default Constructor called" << std::endl;
}

BitcoinExchange::BitcoinExchange(const BitcoinExchange &other) : dataBase(other.dataBase) {
	// std::cout << "BitcoinExchange Copy Constructor called" << std::endl;
}

BitcoinExchange	&BitcoinExchange::operator=(const BitcoinExchange &other) {
    if (this != &other)
		dataBase = other.dataBase;
	// std::cout << "BitcoinExchange Copy Assignment Operator called" << std::endl;
    return *this;
}

BitcoinExchange::~BitcoinExchange() {
	// std::cout << "BitcoinExchange Destructor called" << std::endl;
}

/*	|#------------------------------------------------------#|
	|#			 	Private Member functions    			#|
	|#------------------------------------------------------#|
*/

void	BitcoinExchange::Executer(std::string &date, std::string &amount)
{
	float	amountf = static_cast<float>(std::strtod(amount.c_str(), NULL));

	std::map<std::string,float>::const_iterator it = dataBase.lower_bound(date);
	/*
		there is a fix needed here in case date < 2009-01-02
	*/
	if (it == dataBase.end() && it->first != date)
		--it;
	std::cout << date << " => " << amount << " = " << amountf * (it->second) << std::endl;
}

bool	BitcoinExchange::dateChecker(std::string date[3]) // checking if DD-MM-YYYY makes sence or not
{
	for (short i = 0; i < 3; i++) {
		for (size_t j = 0; j < date[j].size(); j++) {
			if (!std::isdigit(date[i][j]))
				return false;
		}
	}

	double Y = std::strtod(date[0].c_str(), NULL);
	double M = std::strtod(date[1].c_str(), NULL);
	double D = std::strtod(date[2].c_str(), NULL);

	// std::cout << Y << "-" << M << "-" << D << std::endl;

	if (M == 2 && D > 29) // sana kabisa hh
		return false ;
	if ((D < 0 || D > 31) || (M < 0 || M > 12) || (Y < 0 || Y > FLT_MAX))
		return false ;
	return true ;
}

bool	BitcoinExchange::dateParser(std::string &buf)
{
	std::size_t	ret(0);
	std::size_t	old_ret(0);
	std::string	date[3];

	for (short int i = 0; i < 3; i++)
	{
		ret = buf.find('-', ret);
		date[i] = buf.substr(old_ret, ret - old_ret);
		old_ret = ++ret; // increment->to skip the '-' in old_ret + to start from the charachter that follows '-' in find()
	}

	if (date[0].length() != 4 ||
		date[1].length() != 2 ||
		date[2].length() != 2)							return false ;
	if (std::count(buf.begin(), buf.end(), '-') != 2)	return false ;
	if (!dateChecker(date))								return false ;
	return true ;
}

bool	BitcoinExchange::priceParser(std::string &price)
{
	if (std::count(price.begin(), price.end(), '.') > 1)						return false ; // ila kant kter mn '.'
	if (std::count(price.begin(), price.end(), '.') == 1 && price.size() < 3)	return false ; // ila kant matalan '.1' || '1.' || '.'
	for (std::string::iterator it = price.begin(); it != price.end(); it++)
		if (!std::isdigit(*it) && *it != '.')				return false ;

	double	value = std::strtod(price.c_str(), NULL);
	if (value < 0 || value > 1000)							return false ;

	return true ;
}

bool	BitcoinExchange::Spliter(std::string &line, std::string &date,
				std::string &amount)
{
	size_t			ret;

	if ((ret = line.find('|')) == std::string::npos ||
			std::count(line.begin(), line.end(), '|') != 1)
		return false;

	try {
		date = line.substr(0, ret - 1);
		amount = line.substr(ret + 2, line.size() - 1);
	} catch(const std::exception& e)  { return false ;}

	if (date.empty() || amount.empty())	return false ;
	return true ;
}

/*	|#------------------------------------------------------#|
	|#			 		Public Member functions    			#|
	|#------------------------------------------------------#|
*/

void	BitcoinExchange::dataBaseReader()
{
	std::string		line;
	std::string		date;
	std::string		valueStr;
	std::fstream	infile;

	infile.open("data.csv");
	if (!infile)
		return (void) (std::cerr << OPEN_ERR << std::endl);

	std::getline(infile, line);
	while (std::getline(infile, line))
	{
		date = line.substr(0, 10);
		valueStr = line.substr(10 + 1, line.size() - 1);
		dataBase[date] = static_cast < float >(std::strtod(valueStr.c_str(), NULL));
	}
	infile.close();
}

void	BitcoinExchange::inputFileReader(char *file)
{
	std::string		line;
	std::string		date;
	std::string		amount;
	std::fstream	infile;

	infile.open(file);
	if (!infile)
		return (void) (std::cerr << OPEN_ERR << std::endl);

	std::getline(infile, line);
	while (std::getline(infile, line))
	{
		if (!Spliter(line, date, amount))							// split key & amount
			{	std::cerr << EMPTY_ERR << std::endl; continue;	}
		if (!priceParser(amount))									// parse the amount
			{	std::cerr << PRICE_ERR << std::endl; continue;	}
		if (!dateParser(date))										// parse the key
			{	std::cerr << DATE_ERR << date<< std::endl; continue; }

		Executer(date, amount);
	}
}
