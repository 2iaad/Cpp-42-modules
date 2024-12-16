/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zderfouf <zderfouf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/15 05:18:51 by zderfouf          #+#    #+#             */
/*   Updated: 2024/12/16 11:38:16 by zderfouf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cinttypes>
#include <fstream>
#include <iostream>

class Container
{
private:
	std::string filename;
	std::string s1;
	std::string s2;
public:
	Container(std::string filename, std::string S1, std::string S2);
	static std::string get(const Container obj, std::string flag);
};