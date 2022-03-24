/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mannouao <mannouao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 07:41:39 by mannouao          #+#    #+#             */
/*   Updated: 2022/03/24 08:50:14 by mannouao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Zombie.hpp"

int main(void)
{
	Zombie 	*zombie_1 = new Zombie("zombie_1");
	zombie_1->announce();
	zombie_1->randomChump("zombie_2");
	zombie_1->randomChump("zombie_3");
	zombie_1->randomChump("zombie_4");
	delete zombie_1;
}