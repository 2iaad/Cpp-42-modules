/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zderfouf <zderfouf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/12 20:56:24 by zderfouf          #+#    #+#             */
/*   Updated: 2024/12/12 21:21:03 by zderfouf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include "Weapon.hpp"

class HumanB
{
private:
	std::string name;
	Weapon		W;
public:
	HumanB();
	HumanB(std::string Name);
	void	setWeapon(Weapon& Wset);
	void	attack();
};