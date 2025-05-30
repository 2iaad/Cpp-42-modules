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
	double	amountd = std::strtod(amount.c_str(), NULL);

	std::map<std::string,float>::const_iterator it = dataBase.lower_bound(date);

	if (it == dataBase.begin() && it->first != date) // ila date < 2009
		return (void)(std::cout << "There was no Bitcoin at the given date." << std::endl);
	else if (it == dataBase.end() && it->first != date) // ila date > 2022
		--it;

	std::cout << date << " => " << amount << " = " << std::fixed << std::setprecision(2)
		<< amountd * (it->second) << std::endl;
}

bool	BitcoinExchange::dateChecker(std::string date[3]) // checking if DD-MM-YYYY makes sence or not
{
	const int arr[] = {1337, 31, 28, 31, 30, 31, 30, 31, 30, 31, 30, 31, 30};

	for (short i = 0; i < 3; i++) {
		for (size_t j = 0; j < date[j].size(); j++) {
			if (!std::isdigit(date[i][j]))
				return false;	}}

	double Y = std::strtod(date[0].c_str(), NULL);
	double M = std::strtod(date[1].c_str(), NULL);
	double D = std::strtod(date[2].c_str(), NULL);

	if ((D < 1 || D > 31) || (M < 1 || M > 12) || (Y < 1 || Y > INT_MAX))
		return false ;
	if (M == 2)
	{
		bool leapYear = (!((int)Y % 400) || (!((int)Y % 4) && ((int)Y % 100)));

		if (leapYear && D != 29)	return false;
		if (!leapYear && D != 28)	return false;
	}
	else
		if (D != arr[(int)M])	return false;

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
	if (infile.peek() == EOF)
		return (void) (std::cerr << READ_ERR << std::endl);	

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
