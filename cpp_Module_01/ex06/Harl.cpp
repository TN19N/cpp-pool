/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mannouao <mannouao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/25 07:41:35 by mannouao          #+#    #+#             */
/*   Updated: 2022/03/25 21:09:46 by mannouao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Harl.hpp"

void Harl::debug( void )
{
	std::cout << "[DEBUG]" << std::endl 
				<< "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special- ketchup burger." << std::endl 
				<< "I really do!" << std::endl << std::endl;
}

void Harl::info( void )
{
	std::cout  << "[INFO]" << std::endl 
				<< "I cannot believe adding extra bacon costs more money." << std::endl 
				<< "You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl << std::endl;
}

void Harl::warning( void )
{
	std::cout << "[WARNING]" << std::endl 
				<< "I think I deserve to have some extra bacon for free." << std::endl 
				<< "I’ve been coming for years whereas you started working here since last month." << std::endl << std::endl;
}

void Harl::error( void )
{
	std::cout << "[ERROR]" << std::endl 
				<< "This is unacceptable! I want to speak to the manager now." << std::endl << std::endl;
}

void    Harl::complain( std::string level )
{
	int	index = -1;
	std::string	levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	while (++index < 4)
		if (level == levels[index])
			break;
	switch (index)
	{
	case 0:
		this->debug();
	case 1:
		this->info();
	case 2:
		this->warning();
	case 3:
		this->error();
		break;
	default:
		std::cout << "no such level" << std::endl;
	}
}