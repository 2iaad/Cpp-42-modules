/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zderfouf <zderfouf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/01 15:13:33 by zderfouf          #+#    #+#             */
/*   Updated: 2024/12/01 16:01:44 by zderfouf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

int main(void)
{
	Phonebook	_PHONE;
	std::string	line_read;

	while (std::cin)
	{
		if (std::cin.eof())
			break ;
		std::cout << "Enter a command (ADD, SEARCH, EXIT):";
		std::getline(std::cin, line_read);
		if (line_read == "ADD")
			_PHONE.add(&_PHONE);
		else if (line_read == "SEARCH")
			_PHONE.search(_PHONE);
		else if (line_read == "EXIT")
			break ;
	}
}