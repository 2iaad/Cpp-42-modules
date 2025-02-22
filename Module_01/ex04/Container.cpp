/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Container.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zderfouf <zderfouf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/15 05:22:44 by zderfouf          #+#    #+#             */
/*   Updated: 2025/01/03 18:43:19 by zderfouf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Container.hpp"

Container::Container(std::string Filename, std::string S1, std::string S2)
{
	filename = Filename;
	s1 = S1;
	s2 = S2;
}

void	Container::ft_replace(std::string &str)
{
	size_t start = 0;

	while ((start = str.find(this->s1, start))!= std::string::npos && !s1.empty())
	{
		str.erase(start, this->s1.size());
		str.insert(start, this->s2);
		start += this->s2.size();
	}
}