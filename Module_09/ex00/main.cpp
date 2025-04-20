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
	if (std::count(price.begin(), price.end(), '.') > 1)						return false ; // ila kant kter mn '.'
	if (std::count(price.begin(), price.end(), '.') == 1 && price.size() < 3)	return false ; // ila kant matalan '.1' || '1.' || '.'
	for (auto c : price) // fhad case c rah *char*
		if (!std::isdigit(c) && c != '.')					return false ;

	double	value = std::strtod(price.c_str(), NULL);
	if (value < 0 || value > 1000)							return false ;

	return true ;
}

bool	dateChecker(std::string date[3]) // checking if DD-MM-YYYY makes sence or not
{
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

bool	dateParser(std::string &buf)
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

	// std::cout << "date [0]:	{" << date[0] << "}" << std::endl;
	// std::cout << "date [1]:	{" << date[1] << "}" << std::endl;
	// std::cout << "date [2]:	{" << date[2] << "}" << std::endl;

	if (date[0].empty() || date[1].empty() || date[2].empty())	return false ;
	if (std::count(buf.begin(), buf.end(), '-') != 2)			return false ;
	if (!dateDigitChecker(date))								return false ;
	if (!dateChecker(date))										return false ;
	return true ;
}

bool	Spliter(std::string &line, std::string &date,
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

void	Executer(std::string &date, std::string &amount, std::map<std::string,float> &dataBase)
{
	float amountf = static_cast<float>(std::strtod(amount.c_str(), NULL));

	std::map<std::string,float>::iterator it = dataBase.find(date);

	/*
		ila makantch date --> nkhdm b lower bound
	*/
	if (it == dataBase.end())
		return (void)(std::cout << "UNKNOWN DATE <need to handle this>" << std::endl);

	/*
		ila kant date == dataBase->date andir this:
	*/
	std::cout << date << " => " << amount << " = " << amountf * (it->second) << std::endl;
}

void	inputFileReader(char *file, std::map<std::string,float> &dataBase)
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

		Executer(date, amount, dataBase);
	}
}

void	dataBaseReader(std::map<std::string , float> &dataBase)
{
	std::size_t		ret;
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
	std::map <std::string , float> dataBase;

	if (ac != 2)
		return std::cout << OPEN_ERR << std::endl, 1;

	dataBaseReader(dataBase);
	inputFileReader(av[1], dataBase);

	// mapPrinter(dataBase);
	return 0;
}