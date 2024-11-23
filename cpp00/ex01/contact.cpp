/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zderfouf <zderfouf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 20:24:59 by zderfouf          #+#    #+#             */
/*   Updated: 2024/11/23 04:44:44 by zderfouf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"
#include "phonebook.hpp"


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
}