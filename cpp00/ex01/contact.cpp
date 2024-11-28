/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zderfouf <zderfouf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 20:24:59 by zderfouf          #+#    #+#             */
/*   Updated: 2024/11/28 22:06:20 by zderfouf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

Contact::Contact(int Index,
std::string First_name,
std::string Last_name,
std::string Nick_name,
std::string Phone_number,
std::string Darkest_secret)
{
	index = Index;
	first_name = First_name;
	last_name = Last_name;
	nick_name = Nick_name;
	phone_number = Phone_number;
	darkest_secret = Darkest_secret;
}

void Contact::print()
{	
	std::cout << "|         ";
	std::cout << index;
	std::cout << "|";
	std::cout << ten_char(first_name);
	std::cout << "|";
	std::cout << ten_char(last_name);
	std::cout << "|";
	std::cout << ten_char(nick_name);
	std::cout << "|" << std::endl;
}

void Contact::print_index()
{
	std::cout << "First name:" << first_name << std::endl;
	std::cout << "Last name:" << last_name << std::endl;
	std::cout << "Nickname:" << nick_name << std::endl;
	std::cout << "Darkest secret:" << darkest_secret << std::endl;
}


void Phonebook::search(Phonebook _PHONE)
{
	if (!_PHONE.C_count)
		return (void) (std::cout << "No available contacts to show." << std::endl);
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

	int index;
	while (!std::cin.eof())
	{
		std::string line;
		
		std::cout << "Enter index to be looked for:";
		std::getline(std::cin, line);
		if (!line.size() || !parse(line))
		{
			std::cout << "Ops!" << std::endl;
			continue ;
		}
		index = my_atol(line);

		if ( index < 0 || index > _PHONE.C_count - 1)
		{
			std::cerr << "No contact available with the index given !" << std::endl;
			continue ;
		}
		if (!std::cin.eof())
			contact[index].print_index();
	}
}