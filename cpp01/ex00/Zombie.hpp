/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zderfouf <zderfouf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/24 16:00:24 by zderfouf          #+#    #+#             */
/*   Updated: 2024/11/24 16:48:10 by zderfouf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>
# include <new>

class Zombie
{
	std::string	name;
public:
	Zombie(){};
	Zombie(std::string Name){
		name = Name;
	};
	
	void	announce( void );
	void	SetName( std::string name);
	Zombie* newZombie( std::string name );
};