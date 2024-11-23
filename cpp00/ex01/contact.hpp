/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zderfouf <zderfouf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 05:21:18 by zderfouf          #+#    #+#             */
/*   Updated: 2024/11/23 01:33:11 by zderfouf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_H
#define CONTACT_H


#include <string>
#include <iostream>

class Contact
{
	int			index;
	std::string first_name;
	std::string last_name;
	std::string nick_name;
	std::string phone_number;
	std::string darkest_secret;
public:
	Contact()
	{
		
	};
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
		darkest_secret = Darkest_secret;
	}
	void	print(void);
};

#endif