#pragma once

#include <iostream>
#include <cfloat>
#include <algorithm>
#include <fstream>
#include <map>

#include <stdio.h>

#define OPEN_ERR	"Error: could not open file."
#define READ_ERR	"Error: empty file."
#define EMPTY_ERR	"Error: Empty Date or Price."
#define PIPE_ERR	"Error: related to pipe."
#define	DATE_ERR	"Error: bad input => "
#define	PRICE_ERR	"Error: related to Price."

class BitcoinExchange 
{
private:
	std::map <std::string, float> dataBase;

	bool	Spliter(std::string &, std::string &, std::string &);
	bool	priceParser(std::string &);

	bool	dateChecker(std::string [3]);
	bool	dateParser(std::string &);

	void	Executer(std::string &date, std::string& amount);
	
public:
	BitcoinExchange();
	BitcoinExchange(const BitcoinExchange &other);
	BitcoinExchange &operator=(const BitcoinExchange &other);
	~BitcoinExchange();

	void	dataBaseReader(void);
	void	inputFileReader(char *file);
};