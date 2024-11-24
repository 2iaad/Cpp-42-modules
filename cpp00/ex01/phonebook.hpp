/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zderfouf <zderfouf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 15:17:16 by zderfouf          #+#    #+#             */
/*   Updated: 2024/11/24 11:22:04 by zderfouf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
#define PHONEBOOK_H


#include <string>
#include <iostream>
#include "contact.hpp"
#include <stdio.h>


bool			parse(std::string str);
bool			_parse(std::string str);
long			my_atol(std::string str);
std::string		ten_char(std::string word);

class Phonebook
{
	int		C_count;
	int		C_old;
	Contact contact[8];
public:
	void	add(Phonebook *_PHONE);
	void	search(Phonebook _PHONE);
};

#endif