/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mannouao <mannouao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 08:53:28 by mannouao          #+#    #+#             */
/*   Updated: 2022/03/24 09:22:30 by mannouao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Zombie.hpp"

void	Zombie::set_name(std::string const name)
{
	this->name = name;
}

Zombie::~Zombie(void)
{
	std::cout << this->name << ": is died again" << std::endl;	
}

Zombie::Zombie(void)
{
	std::cout << "zombie is spawned" << std::endl;
}

void	Zombie::announce(void)
{
	std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}