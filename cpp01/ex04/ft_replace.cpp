/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_replace.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zderfouf <zderfouf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/15 05:22:44 by zderfouf          #+#    #+#             */
/*   Updated: 2024/12/15 05:25:14 by zderfouf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.hpp"

Container::Container(std::string Filename, std::string S1, std::string S2)
{
	filename = Filename;
	s1 = S1;
	s2 = S2;
}

Container::~Container() {}