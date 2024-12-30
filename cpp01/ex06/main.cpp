/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zderfouf <zderfouf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/30 17:43:10 by zderfouf          #+#    #+#             */
/*   Updated: 2024/12/30 19:21:20 by zderfouf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

bool	is_level(std::string level)
{
	if (level == "DEBUG" || level == "INFO" || level == "WARNING" || level == "ERROR")
		return true;
	return false;
}

int main(int ac, char **av)
{
	Harl pers;

	if (ac != 2 || !av[1][0])
		return std::cerr << "Enter level." << std::endl, 1;

	pers.complain(av[1]);
}