/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mannouao <mannouao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 08:53:32 by mannouao          #+#    #+#             */
/*   Updated: 2022/03/24 09:28:38 by mannouao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Zombie.hpp"

int main(void)
{
	Zombie *zombies = zombieHorde(10, "gang zombies");
	for (int i = 0; i < 10; i++)
		zombies[i].announce();
	delete[] zombies;
}