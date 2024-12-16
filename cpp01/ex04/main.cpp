/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zderfouf <zderfouf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/14 18:01:37 by zderfouf          #+#    #+#             */
/*   Updated: 2024/12/16 11:54:52 by zderfouf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.hpp"

bool	parse(int ac, char **av)
{
	Container file(av[1], av[2], av[3]);
	if (Container::get(file, av[1]).empty()
	|| Container::get(file, av[2]).empty()
	|| Container::get(file, av[3]).empty())
	{
		return false ;
	}
	return true ;
}

int main(int ac, char **av)
{
	std::string str;

	if (ac != 4)
		return 0;
	std::ifstream f(av[1]);

	if (!parse(ac, av))
		return std::cerr << "Parse Error!" << std::endl, 1;
	if (!f.is_open())
		return std::cerr << "cant open file" << std::endl , 1;

	// std::string s;
	// while (getline(f, s))
	// 	std::cout << s << std::endl;
	// f.close();
}