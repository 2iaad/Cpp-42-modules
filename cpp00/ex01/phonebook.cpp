/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zderfouf <zderfouf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 19:19:41 by zderfouf          #+#    #+#             */
/*   Updated: 2024/11/20 22:01:19 by zderfouf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"
#include "contact.hpp"
#include <cstring>


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

void Phonebook::add(void)
{
	std::string str[5];

	for (int i = 0; i < 5; i++)
	{
		std::getline(std::cin, str[i]);
		if (i == 3)
		{
			while (!parse(str[i]))
			{
				std::cout << "Enter a valide number:" << std::endl;
				std::getline(std::cin, str[i]);
			}
		}
	}
}

void Phonebook::search(int i)
{
	for (int i = 0; i < 8; i++)
	{
		contact[i].print();
	}
}

std::string ten_char(std::string word)
{
	if (word.length() > 10) {
		std::string tmp;
		tmp = word.substr(0, 10);
		tmp[9] = '.';
		return tmp;		
	}
	return NULL;
}

int main(int ac, char **av, char **env)
{
	Phonebook	_PHONE;
	std::string	line_read;

	while (std::cin)
	{
		std::cout << "Enter a command (ADD, SEARCH, EXIT):" << std::endl;

		std::getline(std::cin, line_read);

		if (!line_read.compare("ADD"))
			_PHONE.add();
		if (!line_read.compare("SEARCH"))
			_PHONE.search(0);
		if (!line_read.compare("EXIT"))
			break ;
	}
}