/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_replace.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zderfouf <zderfouf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/15 05:22:44 by zderfouf          #+#    #+#             */
/*   Updated: 2024/12/16 11:47:48 by zderfouf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.hpp"

Container::Container(std::string Filename, std::string S1, std::string S2)
{
	filename = Filename;
	s1 = S1;
	s2 = S2;
}

std::string	Container::get(Container obj, std::string flag)
{
	if (flag == obj.filename)
		return obj.filename;
	if (flag == obj.s1)
		return obj.s1;
	if (flag == obj.s2)
	 	return obj.s2;
	return NULL ;
}
