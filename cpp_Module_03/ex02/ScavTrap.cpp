/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mannouao <mannouao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/02 07:33:27 by mannouao          #+#    #+#             */
/*   Updated: 2022/04/02 08:30:21 by mannouao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ScavTrap.hpp"

ScavTrap::ScavTrap(void)
{
	std::cout << "ScavTrap Default constructor called" << std::endl;
	this->name = "default_name";
	this->Hit_points = 100;
	this->Energy_points = 50;
	this->Attack_damage = 20;
}

ScavTrap::ScavTrap(const std::string name)
{
	std::cout << "ScavTrap constructor with name called" << std::endl;
	this->name = name;
	this->Hit_points = 100;
	this->Energy_points = 50;
	this->Attack_damage = 20;
}

ScavTrap::ScavTrap(const ScavTrap& other)
{
	std::cout << "ScavTrap Copy constructor called" << std::endl;
	*this = other;
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "ScavTrap destructor called" << std::endl;
}

ScavTrap&	ScavTrap::operator=(const ScavTrap& other)
{
	this->name = other.name;
	this->Hit_points = other.Hit_points;
	this->Energy_points = other.Energy_points;
	this->Attack_damage = other.Attack_damage;
	return (*this);
}

void ScavTrap::attack(const std::string& target)
{
	if (!this->Hit_points)
	{
		std::cout << "ScavTrap " << this->name << " He's deid!" << std::endl;
		return ;
	}
	if (this->Energy_points > 0)
	{
		std::cout << "ScavTrap " << this->name << " attacks " << target << ", causing " << this->Attack_damage << " points of damage!" << std::endl;
		this->Energy_points--;
	}
	else
		std::cout << "ScavTrap " << this->name << " does not have enough Energy to Attack" << std::endl;
}

void	ScavTrap::guardGate(void)
{
	if (!this->Hit_points)
	{
		std::cout << "ScavTrap " << this->name << " He's deid!" << std::endl;
		return ;
	}
	std::cout << "ScavTrap " << this->name << " is now in Gate keeper mode" << std::endl;
}