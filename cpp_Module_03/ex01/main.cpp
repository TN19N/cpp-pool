/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mannouao <mannouao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/02 06:15:12 by mannouao          #+#    #+#             */
/*   Updated: 2022/04/02 08:35:42 by mannouao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ClapTrap.hpp"
# include "ScavTrap.hpp"

int main()
{
	ScavTrap Hero("Hero");

	Hero.attack("Enemy");
	Hero.beRepaired(10);
	Hero.guardGate();
	Hero.takeDamage(66666);
	Hero.attack("last Enemy");
	Hero.guardGate();
}