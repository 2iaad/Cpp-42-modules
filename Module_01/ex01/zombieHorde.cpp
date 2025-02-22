/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zderfouf <zderfouf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 01:29:00 by zderfouf          #+#    #+#             */
/*   Updated: 2025/01/02 15:46:35 by zderfouf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
	Zombie *Arr = new (std::nothrow) Zombie[N];
	if (!Arr)
	{
		std::cerr << "Memory allocation failed" << std::endl;
		return NULL;
	}

	for (int i = 0; i < N; i++)
		Arr[i].setName(name);
	return Arr;
}