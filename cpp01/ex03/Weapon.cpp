/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zderfouf <zderfouf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/12 21:00:54 by zderfouf          #+#    #+#             */
/*   Updated: 2025/01/03 18:32:55 by zderfouf         ###   ########.fr       */
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

const std::string	&Weapon::getType( void )
{
	return this->type;
}

void		Weapon::setType(std::string newtype)
{
	this->type = newtype;
}