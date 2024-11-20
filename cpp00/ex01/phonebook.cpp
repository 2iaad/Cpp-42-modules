/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zderfouf <zderfouf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 19:19:41 by zderfouf          #+#    #+#             */
/*   Updated: 2024/11/20 19:02:24 by zderfouf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"
#include "contact.hpp"
#include <cctype>
#include <cstdio>
#include <cstdlib>
#include <string>

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
	contact[0].print();
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