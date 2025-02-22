/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zderfouf <zderfouf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/24 16:00:24 by zderfouf          #+#    #+#             */
/*   Updated: 2025/01/02 17:24:05 by zderfouf         ###   ########.fr       */
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
	Zombie( std::string Name );
	~Zombie( void );

	void	announce( void );
};

void	randomChump( std::string name );
Zombie* newZombie( std::string name );