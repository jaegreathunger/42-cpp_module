/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaeshin <jaeshin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 11:49:22 by jaeshin           #+#    #+#             */
/*   Updated: 2023/10/09 16:48:31 by jaeshin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <ctime> //strftime localtime
#include "Account.hpp"

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

Account::Account( int initial_deposit )
{
	this->_accountIndex = this->_nbAccounts;
	this->_amount = initial_deposit;
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;
	this->_nbAccounts++;
	this->_totalAmount += initial_deposit;
	_displayTimestamp();
	std::cout << " index:" << this->_accountIndex \
		<< ";amount:" << this->_amount \
		<< ";created" << std::endl;
}

Account::~Account( void )
{
	_displayTimestamp();
	std::cout << " index:" << this->_accountIndex \
		<< ";amount:" << this->_amount \
		<< ";closed" << std::endl;
}

void	Account::_displayTimestamp( void )
{
	std::time_t	currentTime = std::time(nullptr);
	char	timeString[18];

	std::strftime(timeString, sizeof(timeString), \
		"[%Y%m%d_%H%M%S]", std::localtime(&currentTime));
	std::cout << timeString;
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
	return (_totalNbWithdrawals);
}

void	Account::displayAccountsInfos( void )
{
	_displayTimestamp();
	std::cout << " accounts:" << getNbAccounts() \
		<< ";total:" << getTotalAmount() \
		<< ";deposits:" << getNbDeposits() \
		<< ";withdrawals:" << getNbWithdrawals() << std::endl;
}

void	Account::makeDeposit( int deposit )
{
	this->_amount += deposit;
	this->_totalAmount += deposit;
	this->_nbDeposits++;
	this->_totalNbDeposits++;
	Account::_displayTimestamp();
	std::cout << " index:" << this->_accountIndex \
		<< ";p_amount:" << this->_amount - deposit \
		<< ";deposit:" << deposit \
		<< ";amount:" << this->_amount \
		<< ";nb_deposits:" << this->_nbDeposits << std::endl;
}

bool	Account::makeWithdrawal( int withdrawal )
{
	Account::_displayTimestamp();
	std::cout << " index:" << this->_accountIndex \
		<< ";p_amount:" << this->_amount \
		<< ";withdrawal:";
	if (this->_amount < withdrawal)
	{
		std::cout << "refused" << std::endl;
		return (false);
	}
	else
	{
		this->_amount -= withdrawal;
		this->_nbWithdrawals++;
		this->_totalAmount -= withdrawal;
		this->_totalNbWithdrawals++;
		std::cout << withdrawal \
			<< ";amount:" << this->_amount \
			<< ";nb_withdrawals:" << this->_nbWithdrawals << std::endl;
	}
	return (true);
}

int	Account::checkAmount( void ) const
{
	if (this->_amount < 0)
        return (1);
    return (0);
}

void	Account::displayStatus( void ) const
{
	_displayTimestamp();
	std::cout << " index:" << this->_accountIndex \
		<< ";amount:" << this->_amount \
		<< ";deposits:" << this->_nbDeposits \
		<< ";withdrawals:" << this->_nbWithdrawals << std::endl;
}
