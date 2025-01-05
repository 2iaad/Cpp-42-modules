/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Container.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zderfouf <zderfouf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/15 05:18:51 by zderfouf          #+#    #+#             */
/*   Updated: 2025/01/02 21:27:15 by zderfouf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include <iostream>

class Container
{
private:
	std::string filename;
	std::string s1;
	std::string s2;
public:
	Container(std::string Filename, std::string S1, std::string S2);
	void ft_replace(std::string &str);
};