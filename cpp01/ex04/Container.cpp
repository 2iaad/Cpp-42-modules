/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Container.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zderfouf <zderfouf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/15 05:22:44 by zderfouf          #+#    #+#             */
/*   Updated: 2024/12/30 03:37:06 by zderfouf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Container.hpp"

Container::Container(std::string Filename, std::string S1, std::string S2)
{
	filename = Filename;
	s1 = S1;
	s2 = S2;
}

std::string	Container::get(std::string flag)
{
	if (flag == this->filename)
		return this->filename;
	if (flag == this->s1)
		return this->s1;
	if (flag == this->s2)
	 	return this->s2;
	return (NULL);
}
