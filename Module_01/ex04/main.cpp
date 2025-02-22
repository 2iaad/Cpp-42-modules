/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zderfouf <zderfouf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/14 18:01:37 by zderfouf          #+#    #+#             */
/*   Updated: 2025/01/04 17:42:31 by zderfouf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Container.hpp"

bool	file_opener(std::fstream &infile, std::ofstream &outfile, char	*file)
{
	infile.open(file);
	if (!infile.is_open())
		return (std::cerr << "Can't open infile!" << std::endl , 0);

	outfile.open((std::string(file) + ".replace").c_str());
	if (!outfile.is_open())
		return (std::cerr << "Can't open outfile!" << std::endl , 0);

	return 1;
}

int main(int ac, char **av)
{
	std::string		buf;
	std::fstream	infile;
	std::ofstream	outfile;

	if (ac != 4)
		return std::cerr << "Bad input" << std::endl, 1;

	Container file(av[1], av[2], av[3]);

	if (!file_opener(infile, outfile, av[1]))
		return 1;

	getline(infile, buf, '\0');
	file.ft_replace(buf);
	outfile << buf;
	return (infile.close(), outfile.close(), 0);
}
