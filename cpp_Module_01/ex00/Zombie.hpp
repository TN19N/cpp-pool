/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mannouao <mannouao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 07:41:27 by mannouao          #+#    #+#             */
/*   Updated: 2022/03/24 08:46:49 by mannouao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP

# define ZOMBIE_HPP

# include <string>
# include <iostream>

class Zombie
{
	private:
		std::string name;
	public:
		Zombie(std::string name);
		~Zombie(void);
		void	announce(void);
		Zombie	*newZombie(std::string name);
		void randomChump( std::string name );
};

#endif