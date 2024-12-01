/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zderfouf <zderfouf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 20:24:59 by zderfouf          #+#    #+#             */
/*   Updated: 2024/12/01 15:15:52 by zderfouf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

Contact::Contact()
{
	
}

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

void	Contact::print()
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

void	Contact::print_index()
{
	std::cout << "First name:" << first_name << std::endl;
	std::cout << "Last name:" << last_name << std::endl;
	std::cout << "Nickname:" << nick_name << std::endl;
	std::cout << "Phone number:" << phone_number << std::endl;
	std::cout << "Darkest secret:" << darkest_secret << std::endl;
}
