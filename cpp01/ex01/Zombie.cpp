/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zderfouf <zderfouf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/31 10:24:13 by zderfouf          #+#    #+#             */
/*   Updated: 2025/01/02 15:41:02 by zderfouf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie()
{
	
}

Zombie::~Zombie()
{
	std::cout << "Destructure called!" << std::endl;
}

void	Zombie::setName( std::string Name )
{
	this->name = Name;
}

void	Zombie::announce(void)
{
	std::cout << this->name << ":" << " BraiiiiiiinnnzzzZ..." << std::endl;
}