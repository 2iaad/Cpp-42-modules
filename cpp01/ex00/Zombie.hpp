/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zderfouf <zderfouf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/24 16:00:24 by zderfouf          #+#    #+#             */
/*   Updated: 2024/11/25 09:11:24 by zderfouf         ###   ########.fr       */
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

	void	announce( void );
	void	SetName( std::string name);
	Zombie* newZombie( std::string name );
	void	randomChump( std::string name );
};