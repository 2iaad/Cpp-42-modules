/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zderfouf <zderfouf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 02:01:31 by zderfouf          #+#    #+#             */
/*   Updated: 2025/01/02 15:52:47 by zderfouf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	int N = 5;
	Zombie *_1 = NULL;
	
	_1 = zombieHorde(N, "Zawmbie");
	if (!_1)
		return 1;

	for (int i = 0; i < N; i++)
		_1[i].announce();

	delete [] _1;
}