/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zderfouf <zderfouf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 18:12:17 by zderfouf          #+#    #+#             */
/*   Updated: 2024/11/14 15:09:46 by zderfouf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstring>
#include <iostream>
#include <string>


int main(int ac, char **av)
{
	int i;
	int j;

	i = 0;
	j = 1;
	if (!av[1] || !av[1][0])
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (0);
	}
	while (av[j])
	{
		i = 0;
		while (av[j][i])
		{
			if (av[j][i] >= 'a' && av[j][i] <= 'z')
				av[j][i] -= 32;
			std::cout << av[j][i];
			i++;
		}
		if (av[j + 1])
			std::cout << " ";
		j++;
	}
	std::cout << "\n";
}
