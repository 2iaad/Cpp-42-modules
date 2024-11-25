/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zderfouf <zderfouf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 09:46:20 by zderfouf          #+#    #+#             */
/*   Updated: 2024/11/25 10:07:21 by zderfouf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <ctime>
# include <iostream>

void	_displayTimestamp( void )
{
	time_t time_stamp;

	std::cout << std::put_time(time(&time_stamp));
}
