/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zderfouf <zderfouf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 15:13:44 by zderfouf          #+#    #+#             */
/*   Updated: 2024/12/31 16:32:54 by zderfouf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main()
{
	Harl pers;

	pers.complain("DEBUG");
	pers.complain("INFO");
	pers.complain("WARNING");
	pers.complain("ERROR");
	
	pers.complain("");
}