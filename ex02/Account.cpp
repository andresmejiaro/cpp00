/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amejia <amejia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/01 21:20:18 by amejia            #+#    #+#             */
/*   Updated: 2023/06/02 00:01:29 by amejia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <ctime>
#include <iostream>

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

int	Account::getNbAccounts( void ){
	return(_nbAccounts);
}

int	Account::getTotalAmount( void ){
	return(_totalAmount);
}


int	Account::getNbDeposits( void ){
	return (_totalNbDeposits);
}

int	Account::getNbWithdrawals( void ){
	return (_totalNbWithdrawals);
}

Account::Account( int initial_deposit ){
	_nbAccounts = 0;
	_totalAmount = initial_deposit;
	_totalNbDeposits = initial_deposit;
	_totalNbWithdrawals = 0;
	_amount = 0;
	_nbDeposits = initial_deposit;
	_nbWithdrawals = 0;
}

Account::~Account( void ){
	_nbAccounts = 0;
	_totalAmount = 0;
	_totalNbDeposits = 0;
	_totalNbWithdrawals = 0;
	_amount = 0;
	_nbDeposits = 0;
	_nbWithdrawals = 0;
}

void	Account::makeDeposit( int deposit ){
	_totalAmount += deposit;
	_totalNbDeposits += deposit;
	_nbDeposits += deposit; 
}

void	Account::displayAccountsInfos( void ){
	
}

bool	Account::makeWithdrawal( int withdrawal ){
	if (_totalAmount <= withdrawal){
		_totalAmount -= withdrawal;
		_totalNbWithdrawals -= withdrawal;
		_nbWithdrawals -= withdrawal;
		return (1);		
	}
	return (0);
	
}

int		Account::checkAmount ( void ) const {
	return(_amount);
}

void	Account::displayStatus	( void ) const {
	
}

void	Account::_displayTimestamp( void ){
	std::time_t	current_time = std::time(0);
	std::tm		*date_time=std::localtime(&current_time);
	char		buffer[100];
	
	std::strftime(buffer,100,"[%Y%m%d_%H%M%S]",date_time);
	std::cout << buffer;
}

Account::Account( void ){
	
}

void Account::test(void){
	_displayTimestamp();
}