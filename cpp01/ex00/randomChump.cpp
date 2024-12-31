/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zderfouf <zderfouf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/24 16:23:02 by zderfouf          #+#    #+#             */
/*   Updated: 2024/12/31 09:51:33 by zderfouf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Zombie.hpp"

void Zombie::randomChump( std::string name )
{
	Zombie p = Zombie();
	p.name = name;
	p.announce();
}