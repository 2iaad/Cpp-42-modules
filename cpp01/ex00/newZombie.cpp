/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zderfouf <zderfouf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/24 16:15:17 by zderfouf          #+#    #+#             */
/*   Updated: 2024/12/31 10:33:18 by zderfouf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* Zombie::newZombie( std::string name )
{
	Zombie *p = (Zombie *) new (std::nothrow)Zombie;
	if (!p)
	{
		std::cerr << "Memory allocation failed" << std::endl;
		return NULL;
	}
	p->setName(name);
	return (p);
}