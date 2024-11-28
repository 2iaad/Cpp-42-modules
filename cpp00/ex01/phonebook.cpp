/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zderfouf <zderfouf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 19:19:41 by zderfouf          #+#    #+#             */
/*   Updated: 2024/11/28 18:50:41 by zderfouf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

void Phonebook::add(Phonebook *_PHONE)
{
	int i = 0;
	static int c = {0};
	std::string str[5];

	if (!c)
	{
		_PHONE->C_count = 0;
		_PHONE->C_old = 0;
		c++;
	}

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
	contact[_PHONE->C_old] = Contact(_PHONE->C_old,
						 str[0],
						 str[1],
						 str[2],
						 str[3],
						 str[4]);
	if (_PHONE->C_count < 8)
		_PHONE->C_count++;
	_PHONE->C_old++;
	if (_PHONE->C_old == 8)
		_PHONE->C_old = 0;
}

int main(void)
{
	Phonebook	_PHONE;
	std::string	line_read;

	while (std::cin)
	{
		std::cout << "Enter a command (ADD, SEARCH, EXIT):";

		std::getline(std::cin, line_read);
		if (!parse_(line_read))
		{
			std::cout << "Bad input!" << std::endl;
			continue ;
		}
		if (!line_read.compare("ADD"))
			_PHONE.add(&_PHONE);
		else if (!line_read.compare("SEARCH"))
			_PHONE.search(_PHONE);
		else if (!line_read.compare("EXIT"))
			break ;
	}
}