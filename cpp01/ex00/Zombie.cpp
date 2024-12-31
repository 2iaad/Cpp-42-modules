/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zderfouf <zderfouf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/24 16:03:44 by zderfouf          #+#    #+#             */
/*   Updated: 2024/12/30 20:21:36 by zderfouf         ###   ########.fr       */
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

void	Zombie::SetName(std::string Name)
{
	name = Name;
}

void	Zombie::announce(void)
{
	std::cout << this->name << ":" << " BraiiiiiiinnnzzzZ..." << std::endl;
}