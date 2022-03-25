/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mannouao <mannouao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 10:37:44 by mannouao          #+#    #+#             */
/*   Updated: 2022/03/25 16:53:26 by mannouao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP

# define WEAPON_HPP

# include <string>

class Weapon
{
	private:
		std::string type;
	public:
		Weapon(std::string const type) 
			: type(type) {};
		std::string const	&getType(void) const;
		void	setType(std::string const type);
};

#endif