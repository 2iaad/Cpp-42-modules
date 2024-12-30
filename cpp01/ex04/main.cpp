/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zderfouf <zderfouf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/14 18:01:37 by zderfouf          #+#    #+#             */
/*   Updated: 2024/12/30 03:11:48 by zderfouf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.hpp"
#include <cstring>

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

void ft_replace(std::string &buf, std::size_t size, char **av)
{
	size_t	start;

	if ((start = buf.find(av[2]))!= std::string::npos)
	{
		(buf).erase(start, size);
		(buf).insert(start, av[3]);
		ft_replace(buf, size, av);
	}
}

void ft_replace2(std::string &str, char **av)
{
	size_t start;

	while ((start = str.find(av[2]))!= std::string::npos)
	{
		str.erase(start, strlen(av[2]));
		str.insert(start, av[3]);
	}
}

int main(int ac, char **av)
{
	std::string buf;
	std::ifstream infile; // ngd ndir ----> std::ifstream infile("file.txt");
	std::ofstream outfile;

	if (ac != 4 || !parse(ac, av))
		return std::cerr << "Bad input" << std::endl, 1;

	Container file(av[1], av[2], av[3]);

	infile.open((std::string)av[1], std::ios::in);
	outfile.open((std::string)av[1] + ".replace", std::ios::out);

	if (!infile.is_open() || !outfile.is_open())
		return std::cerr << "Can't open file!" << std::endl , 1;

	std::size_t size = ((std::string)av[2]).size(); // end deyal *Needle*
	while (true)
	{
		getline(infile, buf);
		if (infile.eof())
			break ;
		ft_replace(buf, size ,av);
		outfile << buf << std::endl;
	}
	return (infile.close(), outfile.close(), 0);
}
