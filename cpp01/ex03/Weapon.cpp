/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zderfouf <zderfouf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/12 21:00:54 by zderfouf          #+#    #+#             */
/*   Updated: 2024/12/31 14:30:24 by zderfouf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon()
{
	
}

Weapon::Weapon(std::string name)
{
	this->type = name;
}

std::string	Weapon::getType( void )
{
	return this->type;
}

void		Weapon::setType(std::string newtype)
{
	this->type = newtype;
}