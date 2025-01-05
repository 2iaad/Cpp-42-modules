/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zderfouf <zderfouf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/24 16:15:17 by zderfouf          #+#    #+#             */
/*   Updated: 2025/01/02 17:28:27 by zderfouf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* newZombie( std::string name )
{
	Zombie *p = (Zombie *) new (std::nothrow) Zombie ( name );
	if (!p)
	{
		std::cerr << "Memory allocation failed" << std::endl;
		return NULL;
	}
	return (p);
}