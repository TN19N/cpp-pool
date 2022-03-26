/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mannouao <mannouao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 10:37:53 by mannouao          #+#    #+#             */
/*   Updated: 2022/03/26 09:52:57 by mannouao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "HumanB.hpp"

void	HumanB::setWeapon(Weapon &Weapon)
{
	this->weapon = &Weapon;
}

void	HumanB::attack(void)
{
	std::cout << this->name;
	if (!this->weapon)
		std::cout << " doesn't have weapon yet ";
	else
	{
		std::cout << " attacks with their " << this->weapon->getType();
	}
	std::cout << std::endl;
}