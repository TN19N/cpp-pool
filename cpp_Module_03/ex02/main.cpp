/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mannouao <mannouao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/02 06:15:12 by mannouao          #+#    #+#             */
/*   Updated: 2022/04/02 16:14:02 by mannouao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ClapTrap.hpp"
# include "ScavTrap.hpp"
# include "FragTrap.hpp"

int main()
{
	ScavTrap Hero("Hero");

	Hero.attack("Enemy");
	Hero.beRepaired(10);
	Hero.guardGate();
	Hero.takeDamage(66666);
	Hero.attack("last Enemy");
	Hero.guardGate();

	std::cout << std::endl << "************************" << std::endl << std::endl;

	FragTrap Enemy("Hero");

	Enemy.attack("Human");
	Enemy.beRepaired(10);
	Enemy.highFivesGuys();
	Enemy.takeDamage(66666);
	Enemy.attack("last Human");
	Enemy.highFivesGuys();
}