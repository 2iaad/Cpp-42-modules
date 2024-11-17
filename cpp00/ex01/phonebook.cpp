/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zderfouf <zderfouf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 15:18:02 by zderfouf          #+#    #+#             */
/*   Updated: 2024/11/16 22:32:33 by zderfouf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

void	add()
{
	std::string str;
	str = "NULL";
	
	std::getline(std::cin, str);
	std::cout << str << std::endl;
}

void	do_op(char *op)
{
	if (!op || !*op)
		return ;
	if (!std::strcmp(op, "ADD"))
		add();
	// if (!std::strcmp(op, "SEARCH"))
	// 	search();
	// if (!std::strcmp(op, "EXIT"))
	// 	_exit_();
}

int main(int ac, char **av, char **env)
{
	phonebook	x_phonebook;

	if (ac != 2)
		return 0;
	do_op(av[1]);
}