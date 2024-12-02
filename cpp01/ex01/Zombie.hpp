/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zderfouf <zderfouf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 01:25:48 by zderfouf          #+#    #+#             */
/*   Updated: 2024/12/02 01:27:06 by zderfouf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>
# include <new>

class Zombie
{
	std::string	name;
public:
	Zombie();
	~Zombie();

	Zombie* zombieHorde( int N, std::string name );
};