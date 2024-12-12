/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zderfouf <zderfouf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/12 21:00:00 by zderfouf          #+#    #+#             */
/*   Updated: 2024/12/12 21:20:54 by zderfouf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string Name)
{
	this->name = Name;
}

void	HumanB::attack()
{
	std::cout << this->name << "attacks with their" << this->W.getType() << std::endl;
}

void	HumanB::setWeapon(Weapon& Wset)
{
	this->W = Wset;
}