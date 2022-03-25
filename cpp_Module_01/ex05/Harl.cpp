/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mannouao <mannouao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/25 07:41:35 by mannouao          #+#    #+#             */
/*   Updated: 2022/03/25 13:05:02 by mannouao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Harl.hpp"

void Harl::debug( void )
{
	std::cout << "[DEBUG]" << std::endl 
				<< "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special- ketchup burger." << std::endl 
				<< "I really do!" << std::endl;
}

void Harl::info( void )
{
	std::cout  << "[INFO]" << std::endl 
				<< "I cannot believe adding extra bacon costs more money." << std::endl 
				<< "You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void Harl::warning( void )
{
	std::cout << "[WARNING]" << std::endl 
				<< "I think I deserve to have some extra bacon for free." << std::endl 
				<< "I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void Harl::error( void )
{
	std::cout << "[ERROR]" << std::endl 
				<< "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void    Harl::complain( std::string level )
{
	std::string	levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	typedef	void(Harl::*f)(void);
	f f_arr[4] = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};

	for (int i = 0; i < 4; i++)
	{
		if (level == levels[i])
		{
			(this->*f_arr[i])();
			return ;
		}
	}
	std::cout << "no such level" << std::endl;
}