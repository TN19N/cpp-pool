/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mannouao <mannouao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/03 21:04:39 by mannouao          #+#    #+#             */
/*   Updated: 2022/04/05 13:42:18 by mannouao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Character.hpp"

Character::Character(void)
{
	this->name = "default_name";
	for (int i = 0; i < 4; i++)
		this->materias[i] = NULL;
}

Character::Character(const std::string& name)
{
	this->name = name;
	for (int i = 0; i < 4; i++)
		this->materias[i] = NULL;
}

Character::Character(const Character& other)
{
	*this = other;
}

Character::~Character(void)
{
	for (int i = 0; i < 4; i++)
		if (this->materias[i])
			delete this->materias[i];
}

Character& Character::operator = (const Character& other)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->materias[i])
			delete this->materias[i];
		if (!other.materias[i])
			this->materias[i] = NULL;
		else
			this->materias[i] = other.materias[i]->clone();
	}
	return (*this);
}

const std::string& Character::getName(void) const
{
	return (this->name);
}

void Character::equip(AMateria* m)
{
	if (!m)
		return ;
	for (int i = 0; i < 4; i++)
	{
		if (!this->materias[i])
		{
			this->materias[i] = m;
			break;
		}
	}
}

void Character::unequip(int idx)
{
	if (idx < 4 && idx >= 0 && this->materias[idx])
	{
		this->materias[idx] = NULL;
	}
}

void Character::use(int idx, ICharacter& target)
{
	if (idx >= 0 && idx < 4 && this->materias[idx])
		this->materias[idx]->use(target);
}