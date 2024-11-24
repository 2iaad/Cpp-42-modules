/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zderfouf <zderfouf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/24 16:03:44 by zderfouf          #+#    #+#             */
/*   Updated: 2024/11/24 16:45:57 by zderfouf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void	Zombie::SetName(std::string Name)
{
	name = Name;
}

void	Zombie::announce(void)
{
	std::cout << this->name << ":" << " BraiiiiiiinnnzzzZ..." << std::endl;
}