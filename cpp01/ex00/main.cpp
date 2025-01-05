/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zderfouf <zderfouf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/24 16:00:16 by zderfouf          #+#    #+#             */
/*   Updated: 2025/01/01 20:56:11 by zderfouf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	Zombie *zembabwe;

	zembabwe = newZombie("Heap-Zombie");
	if (!zembabwe)
		return 1;
	zembabwe->announce();
	delete zembabwe;

	randomChump("Stack-Zombie");
}