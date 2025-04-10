/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zderfouf <zderfouf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 18:12:17 by zderfouf          #+#    #+#             */
/*   Updated: 2024/11/27 20:29:34 by zderfouf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int ac, char **av)
{
	int i;
	int j;

	i = 0;
	j = 1;
	if (!av[1])
		return (std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl, 0);
	while (av[j])
	{
		i = 0;
		while (av[j][i])
		{
			std::cout << (char)std::toupper(av[j][i]);
			i++;
		}
		j++;
	}
	std::cout << std::endl;
}
