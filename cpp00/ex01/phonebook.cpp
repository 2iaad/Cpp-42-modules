/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zderfouf <zderfouf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 19:19:41 by zderfouf          #+#    #+#             */
/*   Updated: 2024/11/23 09:43:13 by zderfouf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"
#include "contact.hpp"
#include <cstring>
#include <ostream>
#include <string>


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
	contact[c] = Contact(c,
						 ten_char(str[0]),
						 ten_char(str[1]),
						 ten_char(str[2]),
						 ten_char(str[3]),
						 ten_char(str[4]));
	if (c < 8)
		c++;
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
			_PHONE.add(&_PHONE);
		else if (!line_read.compare("SEARCH"))
			_PHONE.search(_PHONE);
		else if (!line_read.compare("EXIT"))
			break ;
	}
}