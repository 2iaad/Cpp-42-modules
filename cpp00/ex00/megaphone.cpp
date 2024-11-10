/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zderfouf <zderfouf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 18:12:17 by zderfouf          #+#    #+#             */
/*   Updated: 2024/11/10 14:41:10 by zderfouf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstring>
#include <iostream>
#include <string>

float	morba3(int x)
{
	return x*x;
}

int main(int ac, char **av)
{
	// int x = 11;
	// std::cout << "jid3 morba3 deyal " << x << " howa " << morba3(x) << "\n";
	int i;
	int j;

	i = 0;
	j = 1;
	if (!av[1] || !av[1][0])
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
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