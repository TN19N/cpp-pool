/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mannouao <mannouao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/02 06:15:12 by mannouao          #+#    #+#             */
/*   Updated: 2022/04/02 07:11:07 by mannouao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ClapTrap.hpp"

int main()
{
	ClapTrap	hero("Hero");
	ClapTrap	no_one;

	hero.attack("enemy");
	no_one.attack("the bus");

	for (int i = 0; i < 9; i++)
		hero.attack("enemys");
	hero.attack("last enemy");
	hero.takeDamage(99999);
	hero.beRepaired(100);
	no_one.attack("last enemy");
	no_one.beRepaired(99);
}