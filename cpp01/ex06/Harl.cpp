/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zderfouf <zderfouf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/30 14:56:10 by zderfouf          #+#    #+#             */
/*   Updated: 2024/12/30 19:27:49 by zderfouf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void	Harl::debug( void )
{
	std::cout << "I love having extra bacon for my 7XL-double-cheese burger. I really do!" << std::endl;
}

void	Harl::info( void )
{
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void	Harl::warning( void )
{
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void	Harl::error( void )
{
	std::cout <<"This is unacceptable! I want to speak to the manager now." << std::endl;
}

void	Harl::complain( std::string level )
{
	std::string Harl[4] = {
		"DEBUG", "INFO", "WARNING", "ERROR"
		};
	
	void (Harl::*ptr_fun[4])( void ) = {
		&Harl::debug,
		&Harl::info,
		&Harl::warning,
		&Harl::error
	};

	std::size_t i = 1;

	while (i < 5)
	{
		if (Harl[i - 1] == level)
		{
			break ;
		}
		i++;
	}

	switch (i)
	{
		case 1: std::cout << "[ DEBUG ]" << std::endl; (this->*ptr_fun[0])();

		case 2: std::cout << "[ INFO ]" << std::endl; (this->*ptr_fun[1])();

		case 3: std::cout << "[ WARNING ]" << std::endl; (this->*ptr_fun[2])();

		case 4: std::cout << "[ ERROR ]" << std::endl; (this->*ptr_fun[3])(); break;

		case 5: std::cout << "[ Probably complaining about insignificant problems ]";
	}
}