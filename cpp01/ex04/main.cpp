/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zderfouf <zderfouf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/14 18:01:37 by zderfouf          #+#    #+#             */
/*   Updated: 2024/12/28 18:13:38 by zderfouf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.hpp"

bool	parse(int ac, char **av)
{
	if (((std::string)av[1]).empty()
	|| ((std::string)av[2]).empty()
	|| ((std::string)av[3]).empty())
	{
		return false ;
	}
	return true ;
}

int main(int ac, char **av)
{
	std::string buf;

	if (ac != 4 || !parse(ac, av))
		return std::cerr << "Bad input" << std::endl, 1;


	Container file(av[1], av[2], av[3]);
	// new_filename = (std::string)av[1] + ".replace";

	std::ifstream infile; // can also do ----> std::ifstream infile("file.txt");
	std::ofstream outfile;

	infile.open((std::string)av[1], std::ios::in);
	outfile.open((std::string)av[1] + ".replace", std::ios::out);

	if (!infile.is_open() || !outfile.is_open())
		return std::cerr << "can't open file!" << std::endl , 1;

	getline(infile, buf, '\0');
	outfile << buf;


	std::ifstream testfile;
	testfile.close();
}
