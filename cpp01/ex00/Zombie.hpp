/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zderfouf <zderfouf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/24 16:00:24 by zderfouf          #+#    #+#             */
/*   Updated: 2024/12/31 10:33:10 by zderfouf         ###   ########.fr       */
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
	Zombie();
	~Zombie();

	void	announce( void );
	void	setName( std::string name);
	Zombie* newZombie( std::string name );
	void	randomChump( std::string name );
};