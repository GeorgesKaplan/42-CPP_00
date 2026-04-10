/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnantet <dnantet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/10 15:11:31 by dnantet           #+#    #+#             */
/*   Updated: 2026/04/10 18:33:11 by dnantet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>

int	Account::getNbAccounts( void )
{
	return (_nbAccounts);
}

int	Account::getTotalAmount( void )
{
	return (_totalAmount);
}

int	Account::getNbDeposits( void )
{
	return (_totalNbDeposits);
}

int	Account::getNbWithdrawals( void )
{
	return (_totalNbWithdrawals);
}
// [19920104_091532] accounts:8;total:20049;deposits:0;withdrawals:0
void	Account::displayAccountsInfos( void )
{
	_displayTimestamp();
	std::cout << "accounts:" << _nbAccounts << ";";
	std::cout << "total:" << _totalAmount << ";";
	std::cout << "deposits:" << _totalNbDeposits << ";";
	std::cout << "withdrawals:" << _totalNbWithdrawals << std::endl;
}

Account::Account( int initial_deposit )
{}

Account::~Account( void )
{}

void	Account::makeDeposit( int deposit )
{}
bool	Account::makeWithdrawal( int withdrawal )
{}
int		Account::checkAmount( void ) const
{}

// [19920104_091532] index:0;amount:42;deposits:0;withdrawals:0
void	Account::displayStatus( void ) const
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";";
	std::cout << "amount:" << _amount << ";";
	std::cout << "deposits:" << _nbDeposits << ";";
	std::cout << "withdrawals:" << _nbWithdrawals << std::endl;
}

/*Private methods*/
void	Account::_displayTimestamp( void ) // -> use ctime ?
{}

Account::Account( void )
{}

/*
1 - Create account:
	display account index, amount, "created"
2 - Print global data:
	display nb of accounts, total sum, nb of deposits, nb of withdrawals
3 - Print accounts data:
	display account index, amount, nb of deposits, nb of withdrawals
4 - Update account (deposit):
	display account index, previous amount, deposit amount, amount, nb of deposits
5(2) - Print global data:
	display nb of accounts, total sum, nb of deposits, nb of withdrawals
6(3) - Print accounts data:
	display account index, amount, nb of deposits, nb of withdrawals
7 - Update account (withdrawal):
	IF REFUSED
		display account index, previous amount, withdrawal status
	IF ALLOWED
		display account index, previous amount, withdrawal amount, amount, nb of withdrawals
8(2) - Print global data:
	display nb of accounts, total sum, nb of deposits, nb of withdrawals
9(3) - Print accounts data:
	display account index, amount, nb of deposits, nb of withdrawals
10 - Close account:
	display account index, amount, "closed"
*/
