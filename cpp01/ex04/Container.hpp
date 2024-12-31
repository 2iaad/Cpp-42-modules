/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Container.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zderfouf <zderfouf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/15 05:18:51 by zderfouf          #+#    #+#             */
/*   Updated: 2024/12/31 12:22:54 by zderfouf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include <iostream>
#include <cstring>


class Container
{
private:
	std::string filename;
	std::string s1;
	std::string s2;
public:
	Container(std::string filename, std::string S1, std::string S2);
	std::string get(std::string flag);
};