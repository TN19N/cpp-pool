/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Humanb.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mannouao <mannouao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 10:37:53 by mannouao          #+#    #+#             */
/*   Updated: 2022/03/24 13:17:50 by mannouao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "HumanB.hpp"

void	HumanB::setWeapon(Weapon &Weapon)
{
	this->weapon = &Weapon;
}

void	HumanB::attack(void)
{
	std::cout << this->name << " attacks with their " << this->weapon->getType() << std::endl;
}