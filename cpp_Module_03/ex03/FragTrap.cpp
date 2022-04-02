/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mannouao <mannouao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/02 09:04:03 by mannouao          #+#    #+#             */
/*   Updated: 2022/04/02 14:43:40 by mannouao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "FragTrap.hpp"

FragTrap::FragTrap(void)
{
	std::cout << "FragTrap Default constructor called" << std::endl;
	this->name = "default_name";
	this->Hit_points = 100;
	this->Energy_points = 100;
	this->Attack_damage = 30;
}

FragTrap::FragTrap(const std::string name)
{
	std::cout << "FragTrap constructor with name called" << std::endl;
	this->name = name;
	this->Hit_points = 100;
	this->Energy_points = 100;
	this->Attack_damage = 30;
}

FragTrap::FragTrap(const FragTrap& other)
{
	std::cout << "FragTrap Copy constructor called" << std::endl;
	*this = other;
}

FragTrap::~FragTrap(void)
{
	std::cout << "FragTrap destructor called" << std::endl;
}

FragTrap&	FragTrap::operator=(const FragTrap& other)
{
	this->name = other.name;
	this->Hit_points = other.Hit_points;
	this->Energy_points = other.Energy_points;
	this->Attack_damage = other.Attack_damage;
	return (*this);
}

void FragTrap::attack(const std::string& target)
{
	if (!this->Hit_points)
	{
		std::cout << "FragTrap " << this->name << " He's deid!" << std::endl;
		return ;
	}
	if (this->Energy_points > 0)
	{
		std::cout << "FragTrap " << this->name << " attacks " << target << ", causing " << this->Attack_damage << " points of damage!" << std::endl;
		this->Energy_points--;
	}
	else
		std::cout << "FragTrap " << this->name << " does not have enough Energy to Attack" << std::endl;
}

void FragTrap::highFivesGuys(void)
{
	if (!this->Hit_points)
	{
		std::cout << "FragTrap " << this->name << " He's deid!" << std::endl;
		return ;
	}
	std::cout << "FragTrap " << this->name << " is request for high five ✋" << std::endl;
}