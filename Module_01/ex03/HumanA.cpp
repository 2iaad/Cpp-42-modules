/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zderfouf <zderfouf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/12 20:57:25 by zderfouf          #+#    #+#             */
/*   Updated: 2025/01/02 21:08:19 by zderfouf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string Name, Weapon &Wset) : W(Wset)
{
	this->name = Name;
}

void	HumanA::attack()
{
	std::cout << this->name << " attacks with their " << this->W.getType() << std::endl;
}