/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mannouao <mannouao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/03 18:15:41 by mannouao          #+#    #+#             */
/*   Updated: 2022/04/04 14:52:33 by mannouao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "AMateria.hpp"

AMateria::AMateria(void)
{
	this->type = "default";
}

AMateria::AMateria(const std::string& type)
{
	this->type = type;
}

AMateria::AMateria(const AMateria& other)
{
	*this = other;
}

AMateria& AMateria::operator = (const AMateria& other)
{
	this->type = other.type;
	return(*this);
}

AMateria::~AMateria(void)
{
	// do nothing ..
}

const std::string& AMateria::getType(void) const
{
	return (this->type);
}

void AMateria::use(ICharacter& target)
{
	std::cout << "default Materia is used against " << target.getName() << std::endl;
}