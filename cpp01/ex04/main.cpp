/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zderfouf <zderfouf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/14 18:01:37 by zderfouf          #+#    #+#             */
/*   Updated: 2024/12/15 05:29:46 by zderfouf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.hpp"

bool	parse(int ac, char **av)
{
	Container file(av[1], av[2], av[3]);
	if ()
	
}

int main(int ac, char **av)
{
	std::string str;

	if (ac != 4)
		return 0;

	std::ifstream f(av[1]);
	if (!f.is_open())
		return std::cerr << "cant open file" << std::endl , 1;

	std::string s;
	while (getline(f, s))
		std::cout << s << std::endl;
	f.close();
}