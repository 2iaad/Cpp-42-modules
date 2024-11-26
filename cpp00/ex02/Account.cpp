/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zderfouf <zderfouf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 09:30:16 by zderfouf          #+#    #+#             */
/*   Updated: 2024/11/26 17:32:08 by zderfouf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Account.hpp"
# include <iostream>
# include <iomanip>

using std::cout;
using std::endl;

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

Account::Account( int initial_deposit )
{
	_accountIndex = getNbAccounts;
	_amount = initial_deposit;
	
	_nbDeposits = 0;
	_nbWithdrawals = 0;

	_displayTimestamp(void);
	cout << "index:" << getNbAccounts(void) << ";";
	cout << "amount:" << getTotalAmount(void) << ";";
	cout << "created" << endl;

	_nbAccounts++;
	_totalAmount += initial_deposit;
}


Account::~Account()
{
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";amount:" << this->checkAmount();
	std::cout << ";closed" << std::endl;
	Account::_nbAccounts--;
}

static void	_displayTimestamp( void )
{
	time_t now;

	now = time(NULL); // return number of seconds elapsed from January 1, 1970
	tm *s_lt = localtime(&now); // convert the seconds in "now" into Y/m/w/d/h/m/s
	std::cout << std::put_time(s_lt, "[%Y%m%d_%H%M%S] "); // put_time katakhd struct otprinti 3la 7sab lformat li 3titiha
}

static int	getNbAccounts( void )
{
	return this->_nbAccounts;
}

static int	getTotalAmount( void )
{
	return this->_totalAmount;
}

static int	getNbDeposits( void )
{
	return this->_totalNbDeposits;
}

static int	getNbWithdrawals( void )
{
	return this->_totalNbWithdrawals;
}

static void	displayAccountsInfos( void )
{
	this->_displayTimestamp();

	cout << "accounts:" << this->_nbAccounts << ";total:" << this->_totalAmount 
	<< ";deposits:" << this->_totalNbDeposits << ";withrawals:" << this->_totalNbWithdrawals
	<< endl;;
	
}

void	makeDeposit( int deposit )
{
	this->_nbDeposits++;
	this->_totalNbDeposits++;
	this->amount += deposit;

	cout << "index:" << this->_accountIndex << ";p_amount:" << (this->amount - deposit);
	cout << "deposite:" << deposit << ";" << "amount:" << this->amount << ";nb_deposits:" << this->_nbDeposits; << endl;
}

bool	makeWithdrawal( int withdrawal )
{
	if (withdrawal > this->_amount)
	{
		std::cerr << "Operation can't be done!" << endl;
		return false;
	}
	this->_nbWithdrawals++;
	this->_totalNbWithdrawals++;
	this->amount -= withdrawal;
	this->_totalAmount -= withdrawal;
}

int		checkAmount( void ) const
{
	return this->amount;
}

void	displayStatus( void ) const
{
	this->_displayTimestamp();
	cout << "accounts:" << this->getNbAccounts() << ";total:" << this->getTotalAmount() << ";deposits:" << this->getNbDeposits() << ";withdrawals:" << getNbWithdrawals() << endl;
}

