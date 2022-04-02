/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mannouao <mannouao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/02 06:16:56 by mannouao          #+#    #+#             */
/*   Updated: 2022/04/02 14:43:23 by mannouao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ClapTrap.hpp"

ClapTrap::ClapTrap(void)
{
	std::cout << "ClapTrap Default constructor called" << std::endl;
	this->name = "default_name";
	this->Hit_points = 10;
	this->Energy_points = 10;
	this->Attack_damage = 0;
}

ClapTrap::ClapTrap(std::string name)
{
	std::cout << "ClapTrap constructor with name called" << std::endl;
	this->name = name;
	this->Hit_points = 10;
	this->Energy_points = 10;
	this->Attack_damage = 0;
}

ClapTrap::ClapTrap(const ClapTrap& other)
{
	std::cout << "ClapTrap Copy constructor called" << std::endl;
	*this = other;
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "ClapTrap destructor called" << std::endl;
}

ClapTrap&	ClapTrap::operator=(const ClapTrap& other)
{
	this->name = other.name;
	this->Hit_points = other.Hit_points;
	this->Energy_points = other.Energy_points;
	this->Attack_damage = other.Attack_damage;
	return (*this);
}

void ClapTrap::attack(const std::string& target)
{
	if (!this->Hit_points)
	{
		std::cout << "ClapTrap " << this->name << " He's deid!" << std::endl;
		return ;
	}
	if (this->Energy_points > 0)
	{
		std::cout << "ClapTrap " << this->name << " attacks " << target << ", causing " << this->Attack_damage << " points of damage!" << std::endl;
		this->Energy_points--;
	}
	else
		std::cout << "ClapTrap " << this->name << " does not have enough Energy to Attack" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (!this->Hit_points)
	{
		std::cout << "ClapTrap " << this->name << " He's deid!" << std::endl;
		return ;
	}
	std::cout << "ClapTrap " << this->name << " take " << amount << " of Damage!" << std::endl;
	if (amount > this->Hit_points)
		this->Hit_points = 0;
	else
		this->Hit_points -= amount;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (!this->Hit_points)
	{
		std::cout << "ClapTrap " << this->name << " He's deid!" << std::endl;
		return ;
	}
	if (this->Energy_points > 0)
	{
		std::cout << "ClapTrap " << this->name << " recover " << amount << " of he's Hit points!" << std::endl;
		if (amount + this->Hit_points > 4294967295)
			this->Hit_points = 4294967295;
		else
			this->Hit_points += amount;
	}
	else
		std::cout << "ClapTrap " << this->name << " does not have enough Energy to be Repaired" << std::endl;
}