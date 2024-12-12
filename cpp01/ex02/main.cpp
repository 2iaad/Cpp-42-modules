/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zderfouf <zderfouf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 02:26:42 by zderfouf          #+#    #+#             */
/*   Updated: 2024/12/12 18:16:22 by zderfouf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>
#include <string>

int main()
{
	std::string str = "HI THIS IS BRAIN";

	std::string *stringPTR = &str;
	std::string &stringREF = str;

	std::cout << "The memory address held by stringPTR :" << stringPTR << std::endl;
	std::cout << "The memory address held by stringREF :" << &stringREF << std::endl;
	
	std::cout << "The value pointed to by stringPTR :" << *stringPTR << std::endl;
	std::cout << "The value pointed to by stringREF :" << *stringPTR << std::endl;
}