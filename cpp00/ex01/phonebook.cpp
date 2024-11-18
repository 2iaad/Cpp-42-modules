/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zderfouf <zderfouf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 11:40:31 by zderfouf          #+#    #+#             */
/*   Updated: 2024/11/18 13:47:20 by zderfouf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

void	add(Phonebook *_PHONE)
{
	// _PHONE->contact[0].contact(0, "a", "b", "c", "0661", "d");
}

void	search(Phonebook *_PHONE)
{
	// int i;

	// i = 0;
	// while (_PHONE->contact[i].index)
	// _PHONE->GetValue(0);
}

// void	do_op(char *op, phonebook *_PHONE)
// {
// 	if (!op || !*op)
// 	 	return ;
// 	if (!std::strcmp(op, "ADD"))
// 		add(_PHONE);
// 	if (!std::strcmp(op, "SEARCH"))
// 		search(_PHONE);
// 	// if (!std::strcmp(op, "EXIT"))
// 	// 	_exit_();
// }

int main(int ac, char **av, char **env)
{
	Phonebook	_PHONE;
	Contact		contact_1;
	std::string	line_read;

	_PHONE.contact[0] = Contact(1, "a","a","a","a","a");
	_PHONE.GetValue(0);
	// while (1)
	// {
	// 	std::getline(std::cin, line_read);
	// 	if (!line_read.compare("ADD"))
	// 		add(_PHONE);
	// 	if (!line_read.compare("SEARCH"))
	// 		search(_PHONE);
	// 	if (!line_read.compare("EXIT"))
	// 		break ;
	// 	std::cout << line_read << std::endl;
	// }
}