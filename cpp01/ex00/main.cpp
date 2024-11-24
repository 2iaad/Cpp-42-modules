/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zderfouf <zderfouf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/24 16:00:16 by zderfouf          #+#    #+#             */
/*   Updated: 2024/11/24 16:48:44 by zderfouf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	Zombie _1;
	Zombie *_2;

	_1 = Zombie("Stack_Foo"); // allocated in the stack
	_1.announce();
	
	std::cout << std::endl;
	
	_2 = _2->newZombie("Heap_Foo"); // allocated in the heap
	_2->announce();
}