/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mannouao <mannouao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 13:33:40 by mannouao          #+#    #+#             */
/*   Updated: 2022/03/22 16:12:22 by mannouao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Account.hpp"
# include <ctime>
# include <iostream>
# include <iomanip>

int Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

Account::Account(void)
{
	this->_amount = 0;
	this->_accountIndex = _nbAccounts++;
	this->_nbWithdrawals = 0;
	this->_nbDeposits = 0;
	return ;
}

Account::~Account(void)
{
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex
			  << ";amount:" << this->_amount
			  << ";closed" << std::endl;
	_nbAccounts--;
	_totalAmount -= this->_amount;
	_totalNbDeposits -= this->_nbDeposits;
	_totalNbWithdrawals -= this->_nbWithdrawals;
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
	return(_totalNbDeposits);
}

int	Account::getNbWithdrawals(void)
{
	return (_totalNbWithdrawals);
}

int	Account::checkAmount(void) const
{
	return (this->_amount);
}

Account::Account(int initial_deposit)
{
	this->_accountIndex = _nbAccounts++;
	this->_amount = initial_deposit;
	_totalAmount += this->_amount;
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex 
			  << ";amount:" << checkAmount()
			  << ";created" << std::endl;
	return ;
}

void Account::_displayTimestamp(void)
{
	time_t	current_time;
	struct tm	*local;	

	time(&current_time);
	local = std::localtime(&current_time);
	std::cout << "[" << local->tm_year + 1900
					 << std::setw(2) << std::setfill('0') << local->tm_mon + 3
					 << std::setw(2) << std::setfill('0') << local->tm_mday
					 << "_" 
					 << std::setw(2) << std::setfill('0') << local->tm_hour 
					 << std::setw(2) << std::setfill('0') << local->tm_min 
					 << std::setw(2) << std::setfill('0') << local->tm_sec 
			  << "] ";
}

void Account::displayAccountsInfos(void)
{
	_displayTimestamp();
	std::cout << "accounts:" << getNbAccounts()
			  << ";total:" << getTotalAmount()
			  << ";deposits:" << getNbDeposits()
			  << ";withdrawals:" << getNbWithdrawals()
			  << std::endl;
}

void Account::displayStatus(void) const
{
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex
			  << ";amount:" << checkAmount()
			  << ";deposits:" << this->_nbDeposits
			  << ";withdrawals:" << this->_nbWithdrawals
			  << std::endl;
}

void	Account::makeDeposit(int deposit)
{
	_displayTimestamp();
	std::cout << this->_totalAmount << std::endl;
	std::cout << "index:" << this->_accountIndex
			  << ";p_amount:" << checkAmount()
			  << ";deposit:" << deposit
			  << ";amount:" << checkAmount() + deposit
			  << ";nb_deposits:" << ++this->_nbDeposits
			  << std::endl;
	this->_amount += deposit;
	_totalAmount += deposit;
	_totalNbDeposits++;
}

bool	Account::makeWithdrawal(int withdrawal)
{
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex
			  << ";p_amount:" << checkAmount()
			  << ";withdrawal:";
	if (withdrawal > checkAmount())
	{
		std::cout << "refused" << std::endl;
		return (1);
	}
	else
	{
		std::cout << withdrawal
				  << ";amount:" << this->_amount - withdrawal
				  << ";nb_withdrawals:" << ++this->_nbWithdrawals
				  << std::endl;
		this->_amount -= withdrawal;
		_totalAmount -= withdrawal;
		_totalNbWithdrawals++;
	}
	return (0);
}
