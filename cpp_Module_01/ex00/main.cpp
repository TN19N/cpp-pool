/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mannouao <mannouao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 07:41:39 by mannouao          #+#    #+#             */
/*   Updated: 2022/03/24 09:07:01 by mannouao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Zombie.hpp"

int main(void)
{
	Zombie 	*zombie_1 = newZombie("zombie_1");
	zombie_1->announce();
	randomChump("zombie_2");
	randomChump("zombie_3");
	randomChump("zombie_4");
	delete zombie_1;
}