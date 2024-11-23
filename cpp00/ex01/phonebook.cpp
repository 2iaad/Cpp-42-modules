/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zderfouf <zderfouf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 19:19:41 by zderfouf          #+#    #+#             */
/*   Updated: 2024/11/23 04:38:28 by zderfouf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"
#include "contact.hpp"
#include <cstring>
#include <ostream>
#include <string>


std::string ten_char(std::string word)
{
	if (word.length() > 10) {
		std::string tmp;
		tmp = word.substr(0, 10);
		tmp[9] = '.';
		return tmp;		
	}
	else {
	/*
		hna aykhsni nhandli blan d "    ziadd"
	 */
	}
	return word;
}

bool	parse(std::string str)
{
	int i = 0;
	while (str[i])
	{
		if (!std::isdigit(str[i]))
			return (false);
		i++;
	}
	return (true);
}

void Phonebook::add(Phonebook *_PHONE)
{
	int i = 0;
	static int c = 0;
	std::string str[5];

	if (c <= 8)
		_PHONE->C_count++;
	if (c == 8)
		c = 0;
	while (!std::cin.eof() && i < 5) // ""!std::cin.eof()"" bach m3a ytdrb stdin m3a ykhrj maykmlch f loop
	{
		if (i == 0)
			std::cout << "First name:";
		if (i == 1)
			std::cout << "Last name:";
		if (i == 2)
			std::cout << "Nickname:";
		
		if (i == 3)
		{
			std::cout << "Phone number:";
			std::getline(std::cin, str[i]);
			while (!std::cin.eof() && (!parse(str[i]) || str[i].empty()))
			{
				std::cout << "Enter a valide number:";
				std::getline(std::cin, str[i]);
			}
		}
		
		if (i == 4)
			std::cout << "Darkest secret:";

		while (str[i].empty() && !std::cin.eof())
			std::getline(std::cin, str[i]);
		i++;
	}
	contact[c] = Contact(c, ten_char(str[0]), str[1], str[2], str[3], str[4]);
	if (c < 8)
		c++;
}

void Phonebook::search(Phonebook _PHONE)
{
	std::cout << "|" << "     index";
	std::cout << "|" << "first_name";
	std::cout << "|" << " last_name";
	std::cout << "|" << " nick_name";
	std::cout << "|" << std::endl;
	std::cout << "---------------------------------------------" << std::endl;
	for (int i = 0; i < _PHONE.C_count; i++)
	{
		contact[i].print();
	}
}


int main(int ac, char **av, char **env)
{
	Phonebook	_PHONE;
	std::string	line_read;

	while (std::cin)
	{
		std::cout << "Enter a command (ADD, SEARCH, EXIT):";
		
		std::getline(std::cin, line_read);
		if (!line_read.compare("ADD"))
		{
			_PHONE.add(&_PHONE);
		}
		else if (!line_read.compare("SEARCH"))
			_PHONE.search(_PHONE);
		else if (!line_read.compare("EXIT"))
			break ;
	}
}