/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mannouao <mannouao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/02 06:15:12 by mannouao          #+#    #+#             */
/*   Updated: 2022/04/02 15:49:00 by mannouao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ClapTrap.hpp"
# include "ScavTrap.hpp"
# include "FragTrap.hpp"
# include "DiamondTrap.hpp"

int main()
{
	DiamondTrap	Hero("Hero");
	
	Hero.attack("enemy");
	Hero.takeDamage(20);
	Hero.beRepaired(10);
	Hero.guardGate();
	Hero.highFivesGuys();
	Hero.whoAmI();
	Hero.takeDamage(9999);
	Hero.attack("last one");
	Hero.whoAmI();
}