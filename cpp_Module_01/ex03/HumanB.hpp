/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mannouao <mannouao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 10:37:50 by mannouao          #+#    #+#             */
/*   Updated: 2022/03/26 09:09:39 by mannouao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef HUMANB_HPP

# define HUMANB_HPP

# include <iostream>
# include <string>
# include "Weapon.hpp"

class HumanB
{
	private:
		std::string name;
		Weapon		*weapon;
	public:
		HumanB(std::string const name)
			: name(name), weapon(NULL) {};
		void	setWeapon(Weapon &Weapon);
		void	attack(void);
};

# endif