/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mannouao <mannouao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/02 09:40:00 by mannouao          #+#    #+#             */
/*   Updated: 2022/04/02 15:51:08 by mannouao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void)
{
	std::cout << "DiamondTrap Default constructor called" << std::endl;
	this->DiamondTrap::name	= "default_name";
	this->ClapTrap::name = this->DiamondTrap::name + "_clap_name";
	this->Hit_points = 100;
	this->Energy_points = 50;
	this->Attack_damage = 30;
	
}

DiamondTrap::DiamondTrap(const std::string name)
{
	std::cout << "DiamondTrap constructor with name called" << std::endl;
	this->DiamondTrap::name	= name;
	this->ClapTrap::name = this->DiamondTrap::name + "_clap_name";
	this->Hit_points = 100;
	this->Energy_points = 50;
	this->Attack_damage = 30;
}

DiamondTrap::DiamondTrap(const DiamondTrap& other)
{
	std::cout << "DiamondTrap Copy constructor called" << std::endl;
	*this = other;
}

DiamondTrap::~DiamondTrap(void)
{
	std::cout << "DiamondTrap destructor called" << std::endl;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap& other)
{
	this->DiamondTrap::name = other.DiamondTrap::name;
	this->ClapTrap::name = other.ClapTrap::name;
	this->Hit_points = other.Hit_points;
	this->Energy_points = other.Energy_points;
	this->Attack_damage = other.Attack_damage;
	return (*this);
}

void	DiamondTrap::attack(const std::string& target)
{
	ScavTrap::attack(target);
}

void DiamondTrap::whoAmI(void)
{
	if (!this->Hit_points)
	{
		std::cout << "DiamondTrap " << this->ClapTrap::name << " He's deid!" << std::endl;
		return ;
	}
	std::cout << "my name : " << this->DiamondTrap::name << ", ClapTrap name : " << this->ClapTrap::name << std::endl;
}