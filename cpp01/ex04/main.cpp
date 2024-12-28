/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zderfouf <zderfouf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/14 18:01:37 by zderfouf          #+#    #+#             */
/*   Updated: 2024/12/27 15:50:52 by zderfouf         ###   ########.fr       */
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

void f(){
	// system("lsof -c main");
	}
int main(int ac, char **av)
{
	std::string str;
	std::string new_filename;

	// atexit(f);
	// if (ac != 4)
	// 	return std::cerr << "Bad input" << std::endl, 1;
	// if (!parse(ac, av))
	// 	return std::cerr << "Parse Error!" << std::endl, 1;

	new_filename = (std::string)av[1] + ".replace";

	std::ifstream av[1];
	std::ofstream new_filename;
	if (!file.is_open() || new_filename.is_open())
		return std::cerr << "can't open file!" << std::endl , 1;

	getline(file, str, '\0');
		std::cout << str << std::endl;
}
