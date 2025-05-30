/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zderfouf <zderfouf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 05:21:18 by zderfouf          #+#    #+#             */
/*   Updated: 2024/12/01 15:51:44 by zderfouf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_H
#define CONTACT_H

#include <string>
#include <iostream>

class Contact
{
private:
	int			index;
	std::string first_name;
	std::string last_name;
	std::string nick_name;
	std::string phone_number;
	std::string darkest_secret;
public:
	Contact();
	Contact(int Index, std::string First_name,
	std::string Last_name, std::string Nick_name,
	std::string Phone_number, std::string Darkest_secret);
	void	print(void);
	void	print_index(void);
};

#endif