/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zderfouf <zderfouf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 19:19:41 by zderfouf          #+#    #+#             */
/*   Updated: 2024/11/29 18:46:03 by zderfouf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

void	phone_number(std::string *str)
{
	std::cout << "Phone number:";
	std::getline(std::cin, *str);
	while (!std::cin.eof() && (!parse(*str) || (*str).empty()))
	{
		std::cout << "Enter a valide number:";
		std::getline(std::cin, *str);
	}
}

Phonebook::Phonebook()
{
	C_count = 0;
	Index = 0;
}

/*

:: operator, indicating that the add function is a member function of the Phonebook class.

*/

void	Phonebook::add(Phonebook *_PHONE)
{
	int i = 0;
	std::string str[5];

	while (!std::cin.eof() && i < 5) // ""!std::cin.eof()"" bach m3a ytdrb stdin m3a ykhrj maykmlch f loop
	{
		if (i == 0)
			std::cout << "First name:";
		if (i == 1)
			std::cout << "Last name:";
		if (i == 2)
			std::cout << "Nickname:";
		if (i == 3)
			phone_number(&str[i]);
		if (i == 4)
			std::cout << "Darkest secret:";

		while (1 && str[i].empty()) // "str[i].empty()" 3la 9bl phone number mayreadich tani
		{
			std::getline(std::cin, str[i]);
			if (std::cin.eof())
				return ;
			if (!(str[i].empty() || !parse_(str[i])))
				break ;
		}
		i++;
	}
	contact[_PHONE->Index] = Contact(_PHONE->Index, 
											str[0], 
											str[1], 
											str[2], 
											str[3], 
											str[4]);
	if (_PHONE->C_count < 8)
		_PHONE->C_count++;
	_PHONE->Index++;
	if (_PHONE->Index == 8)
		_PHONE->Index = 0;
}

int main(void)
{
	Phonebook	_PHONE; // declares a variable(object) _PHONE of type Phonebook.
	std::string	line_read;

	while (std::cin) // ma7d std::cin input stream is in a valid state
	{
		if (std::cin.eof())
			break ;
		std::cout << "Enter a command (ADD, SEARCH, EXIT):"; // "<<" stream insertion operator, takes reference to output stream as first.

		std::getline(std::cin, line_read); // returns the line that have been read until the '\n'
		if (line_read == "ADD") // "==" operator Returns a boolean value
			_PHONE.add(&_PHONE);
		else if (line_read == "SEARCH")
			_PHONE.search(_PHONE);
		else if (line_read == "EXIT")
			break ;
	}
}