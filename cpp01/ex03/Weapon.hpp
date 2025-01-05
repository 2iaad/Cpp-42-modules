/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zderfouf <zderfouf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/12 20:49:30 by zderfouf          #+#    #+#             */
/*   Updated: 2025/01/03 20:54:33 by zderfouf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class Weapon
{
private:
	std::string type;
public:
	Weapon();
	Weapon(std::string name);
	const std::string	&getType( void );
	void				setType(std::string newtype);
};
