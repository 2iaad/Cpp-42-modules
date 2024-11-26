/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zderfouf <zderfouf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 09:30:16 by zderfouf          #+#    #+#             */
/*   Updated: 2024/11/26 22:52:29 by zderfouf         ###   ########.fr       */
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
	_accountIndex = this->getNbAccounts();
	_amount = initial_deposit;
	
	_nbDeposits = 0;
	_nbWithdrawals = 0;

	_displayTimestamp();
	cout << "index:" << getNbAccounts() << ";";
	cout << "amount:" << getTotalAmount() << ";";
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

int	Account::getNbAccounts( void )
{
	return _nbAccounts;
}

int	Account::getTotalAmount( void )
{
	return _totalAmount;
}

int	Account::getNbDeposits( void )
{
	return _totalNbDeposits;
}

int	Account::getNbWithdrawals( void )
{
	return _totalNbWithdrawals;
}

void	displayAccountsInfos( void )
{
	_displayTimestamp();

	cout << "accounts:" << Account::getNbAccounts() << ";total:" << Account::getTotalAmount()
	<< ";deposits:" << Account::getNbDeposits() << ";withrawals:" << Account::getNbWithdrawals()
	<< endl;;	
}

void	Account::makeDeposit( int deposit )
{
	this->_nbDeposits++;
	Account::_totalNbDeposits++;
	this->_amount += deposit;

	cout << "index:" << this->_accountIndex << ";p_amount:" << (this->_amount - deposit);
	cout << "deposite:" << deposit << ";" << "amount:" << this->_amount << ";nb_deposits:" << this->_nbDeposits << endl;
}

bool	Account::makeWithdrawal( int withdrawal )
{
	if (withdrawal > this->_amount)
	{
		std::cerr << "Operation can't be done!" << endl;
		return false;
	}
	this->_nbWithdrawals++;
	this->_totalNbWithdrawals++;
	this->_amount -= withdrawal;
	this->_totalAmount -= withdrawal;
	return true;
}

int		Account::checkAmount( void ) const
{
	return this->_amount;
}

void	displayStatus( void )
{
	_displayTimestamp();
	cout << "accounts:" << Account::getNbAccounts() << ";total:" << Account::getTotalAmount() << ";deposits:" << Account::getNbDeposits() << ";withdrawals:" << Account::getNbWithdrawals() << endl;
}

