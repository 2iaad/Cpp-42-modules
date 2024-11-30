/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zderfouf <zderfouf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 09:30:16 by zderfouf          #+#    #+#             */
/*   Updated: 2024/11/30 13:11:02 by zderfouf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Account.hpp"
# include <iomanip>
# include <iostream>
# include <time.h>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

Account::Account( int initial_deposit )
{
	_accountIndex = getNbAccounts();
	_amount = initial_deposit;
	
	_nbDeposits = 0;
	_nbWithdrawals = 0;

	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";" << "amount:" << checkAmount() << ";";
	std::cout << "created" << std::endl;

	_nbAccounts++;
	_totalAmount += initial_deposit;
}


Account::~Account()
{
	Account::_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";amount:" << checkAmount();
	std::cout << ";closed" << std::endl;
	Account::_nbAccounts--;
}

void	Account::_displayTimestamp( void )
{
	time_t now;

	now = time(NULL); // return number of seconds elapsed from January 1, 1970
	tm *s_lt = localtime(&now); // convert the seconds in "now" into Y/m/w/d/h/m/s
	std::cout << std::put_time(s_lt, "[%Y%m%d_%H%M%S] "); // put_time katakhd struct otprinti 3la 7sab lformat li 3titiha
}
int	Account::getNbAccounts(void)
{
	return (_nbAccounts);
}

int	Account::getTotalAmount(void)
{
	return (_totalAmount);
}

int	Account::getNbDeposits(void)
{
	return (_totalNbDeposits);
}

int	Account::getNbWithdrawals(void)
{
	return (_totalNbWithdrawals);
}


void	Account::displayAccountsInfos(void)
{
	Account::_displayTimestamp();
	std::cout << "accounts:" << Account::getNbAccounts() << ";total:" << Account::getTotalAmount();
	std::cout << ";deposits:" << Account::getNbDeposits() << ";withdrawals:" << Account::getNbWithdrawals() << std::endl;
}


void	Account::makeDeposit(int deposit)
{
	_nbDeposits++;
	Account::_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";p_amount:" << _amount;
	std::cout << ";deposit:" << deposit << ";amount:" << _amount + deposit << \
		";nb_deposits:" << _nbDeposits << std::endl;
	_amount += deposit;
	Account::_totalNbDeposits++;
	Account::_totalAmount += deposit;
}

bool	Account::makeWithdrawal(int withdrawal)
{
	Account::_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";p_amount:" << \
	_amount << ";withdrawal:";
	if (withdrawal > checkAmount())
	{
		std::cout << "refused" << std::endl;
		return (false);
	}
	_nbWithdrawals++;
	Account::_totalNbWithdrawals++;
	std::cout << withdrawal << ";amount:" << checkAmount() - withdrawal << \
		";nb_withdrawals:" << _nbWithdrawals << std::endl;
	_amount -= withdrawal;
	Account::_totalAmount -= withdrawal;
	return (true);
}

int	Account::checkAmount(void) const
{
	return (_amount);
}

void	Account::displayStatus(void) const
{
	Account::_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";amount:" << checkAmount();
	std::cout << ";deposits:" << _nbDeposits << \
		";withdrawals:" << _nbWithdrawals << std::endl;
}
