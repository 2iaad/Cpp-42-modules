/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zderfouf <zderfouf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 15:17:16 by zderfouf          #+#    #+#             */
/*   Updated: 2024/11/20 17:33:41 by zderfouf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
#define PHONEBOOK_H


#include <string>
#include <iostream>
#include "contact.hpp"
#include <stdio.h>

class Phonebook
{
	Contact contact[8];
public:
	void	add(void);
	void	search(int i);
};

#endif