/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mannouao <mannouao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/03 21:23:02 by mannouao          #+#    #+#             */
/*   Updated: 2022/04/05 01:27:57 by mannouao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "MateriaSource.hpp"

MateriaSource::MateriaSource(void)
{
	for (int i = 0; i < 4; i++)
		this->materias[i] = NULL;
}

MateriaSource::MateriaSource(const MateriaSource& other)
{
	for (int i = 0; i < 4; i++)
		this->materias[i] = NULL;
	*this = other;
}

MateriaSource::~MateriaSource(void)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->materias[i])
			delete this->materias[i];
	}
}

MateriaSource& MateriaSource::operator = (const MateriaSource& other)
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

void	MateriaSource::learnMateria(AMateria *m)
{
	static int i = 0;

	if (i > 3)
		return ;
	else
		this->materias[i++] = m;
}

AMateria* MateriaSource::createMateria(const std::string& type)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->materias[i])
		{
			if (this->materias[i]->getType() == type)
				return (this->materias[i]->clone());
		}
	}
	return (0);
}