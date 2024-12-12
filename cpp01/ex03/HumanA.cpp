/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zderfouf <zderfouf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/12 20:57:25 by zderfouf          #+#    #+#             */
/*   Updated: 2024/12/12 21:19:49 by zderfouf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string Name, Weapon& Wset)
{
	this->name = Name;
	this->W = Wset;
}

void	HumanA::attack()
{
	std::cout << this->name << "attacks with their" << this->W.getType() << std::endl;
}