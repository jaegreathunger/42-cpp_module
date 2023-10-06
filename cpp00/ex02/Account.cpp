/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaeshin <jaeshin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 11:49:22 by jaeshin           #+#    #+#             */
/*   Updated: 2023/10/06 17:57:00 by jaeshin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include <ctime>

Account::Account( int initial_deposit )
{
	this->_nbAccounts = this->_accountIndex;
	this->_totalAmount = initial_deposit;
	this->_totalNbDeposits = 0;
	this->_totalNbWithdrawals = 0;
	this->_accountIndex++;
	_displayTimestamp();
}

void	Account::_displayTimestamp( void )
{
	std::time_t	currentTime = std::time(nullptr);
	char	timeString[16];

	std::strftime(timeString, sizeof(timeString), "%Y-%m-%d %H:%M:%S", std::localtime(&currentTime));
	std::cout << "Current Timestamp: " << timeString << std::endl;
}

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
	return (_totalNbDeposits);
}

void	Account::displayAccountsInfos( void )
{
	_displayTimestamp();
	std::cout << "accounts:" << getNbAccounts() << ";total:" << getTotalAmount() \
		<< ";deposits:" << getNbDeposits() << ";withdrawals:" << getNbDeposits() << std::endl;
}

void	Account::displayStatus( void ) const
{
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";deposit:" << this->_nbDeposits \
		<< ";withdrawals:" << this->_nbWithdrawals << std::endl;
}

