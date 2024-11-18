/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zderfouf <zderfouf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 15:17:16 by zderfouf          #+#    #+#             */
/*   Updated: 2024/11/18 16:07:21 by zderfouf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
#define PHONEBOOK_H

#include <string>
#include <iostream>

// using namespace std;

class Contact
{
	int			index;
	std::string first_name;
	std::string last_name;
	std::string nick_name;
	std::string phone_number;
	std::string darkest_secret;
public:
	Contact(int Index,
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
	}
};

class Phonebook
{
public:
	Contact contact[8];

	Contact GetValue(int i)
	{
		return contact[i];
	}
};

#endif