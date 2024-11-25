/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zderfouf <zderfouf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/24 16:00:16 by zderfouf          #+#    #+#             */
/*   Updated: 2024/11/24 20:36:02 by zderfouf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void f(){
	system("leaks zombie");
}

int main()
{
	// atexit(f);
	Zombie *zembabwe = zembabwe->newZombie("Heap Zombie");
	zembabwe->announce();

	zembabwe->randomChump("Stack Zombie");
	delete zembabwe;
}