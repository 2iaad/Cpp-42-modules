/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zderfouf <zderfouf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 01:25:48 by zderfouf          #+#    #+#             */
/*   Updated: 2024/12/31 10:32:49 by zderfouf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>
# include <new>

class Zombie
{
private:
	std::string	name;
public:
	Zombie( void );
	~Zombie( void );
	
	void	setName( std::string Name );
};

Zombie* zombieHorde( int N, std::string name );