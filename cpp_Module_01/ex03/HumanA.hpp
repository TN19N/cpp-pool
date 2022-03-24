/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mannouao <mannouao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 10:37:55 by mannouao          #+#    #+#             */
/*   Updated: 2022/03/24 13:18:42 by mannouao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef HUMANA_HPP

# define HUMANA_HPP

# include <iostream>
# include <string>
# include "Weapon.hpp"

class HumanA
{
	private:
		std::string name;
		Weapon		&weapon;
	public:
		HumanA(std::string const name, Weapon &weapon)
			: name(name), weapon(weapon) {};
		void	attack(void);
};

# endif