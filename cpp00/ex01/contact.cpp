/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zderfouf <zderfouf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 20:24:59 by zderfouf          #+#    #+#             */
/*   Updated: 2024/11/23 12:35:42 by zderfouf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"
#include "phonebook.hpp"
#include <string>


void Contact::print()
{	
	std::cout << "|         ";
	std::cout << index;
	std::cout << "|";
	std::cout << first_name;
	std::cout << "|";
	std::cout << last_name;
	std::cout << "|";
	std::cout << nick_name;
	std::cout << "|" << std::endl;
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
		if (!line.size())
			continue ;
		index = my_atol(line);

		if ( index < 0 || index > _PHONE.C_count - 1)
		{
			std::cerr << "No contact available with the index given !" << std::endl;
			continue ;
		}
		if (!std::cin.eof())
			contact[index].print();
	}
}