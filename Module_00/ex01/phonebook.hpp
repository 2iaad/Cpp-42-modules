/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zderfouf <zderfouf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 15:17:16 by zderfouf          #+#    #+#             */
/*   Updated: 2024/12/01 16:02:52 by zderfouf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
#define PHONEBOOK_H

#include "contact.hpp"
#include <climits>

bool		parse(std::string str);
bool		_parse(std::string str);
bool		parse_(std::string str);
long		my_atol(std::string str);
std::string	ten_char(std::string word);
void		phone_number(std::string *str);

class Phonebook
{
private:
	int		C_count;
	int		Index;
	Contact contact[8];
public:
	Phonebook();
	void	add(Phonebook *_PHONE);
	void	search(Phonebook _PHONE);
	void	print_table(Phonebook _PHONE);
};

#endif