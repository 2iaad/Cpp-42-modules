/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zderfouf <zderfouf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/14 18:01:37 by zderfouf          #+#    #+#             */
/*   Updated: 2024/12/29 03:53:03 by zderfouf         ###   ########.fr       */
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
	std::string leftbuf;

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

	std::size_t size = Container::get(file, av[2]).size(); // end deyal *Needle*
	
	std::size_t start;
	int i = 0;
	while (i < buf.size())
	{
		leftbuf = buf.c_str() + i;
		std::cout << "****************" << leftbuf << "***********************\n";
		start = leftbuf.find((std::string)av[2]); // .find katreturni size_t dyal first occurance d string li lqit
		i = start;

		if (start == std::string::npos)
			break ;
		
		std::cout << "before:" << buf << std::endl;

		std::cout << start << "----" << size << std::endl;

		buf.erase(start, size);

		buf.insert(start, av[3]);
		std::cout << "after:"<< buf << std::endl;


	}
}
