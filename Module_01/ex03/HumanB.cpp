/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zderfouf <zderfouf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/12 21:00:00 by zderfouf          #+#    #+#             */
/*   Updated: 2024/12/31 14:32:55 by zderfouf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string Name)
{
	this->name = Name;
	this->W = NULL;
}

void	HumanB::setWeapon(Weapon &Wset)
{
	this->W = &Wset;
}

void	HumanB::attack( void )
{
	if (!this->W || this->W->getType().empty())
	{
		std::cerr << this->name << " has no weapon !" << std::endl;
		return ;
	}

	std::cout << this->name << " attacks with their " << this->W->getType() << std::endl;
}