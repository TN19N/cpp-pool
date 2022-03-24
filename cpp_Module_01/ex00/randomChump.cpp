/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mannouao <mannouao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 07:41:33 by mannouao          #+#    #+#             */
/*   Updated: 2022/03/24 08:48:32 by mannouao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Zombie.hpp"

void Zombie::randomChump( std::string name )
{
	Zombie	r_Zombie(name);
	r_Zombie.announce();
}