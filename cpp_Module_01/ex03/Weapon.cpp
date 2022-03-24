/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mannouao <mannouao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 10:37:46 by mannouao          #+#    #+#             */
/*   Updated: 2022/03/24 11:49:46 by mannouao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Weapon.hpp"

void	Weapon::setType(std::string const type)
{
	this->type = type;
}

std::string const &Weapon::getType(void) const
{
	return (this->type);
}