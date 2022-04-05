/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mannouao <mannouao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/03 19:51:36 by mannouao          #+#    #+#             */
/*   Updated: 2022/04/04 14:41:06 by mannouao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP

# define ICE_HPP

# include "ICharacter.hpp"
# include "AMateria.hpp"
# include <string>

class Ice : public AMateria
{
		public:
			Ice(void);
			Ice(const Ice& other);
			~Ice(void);
			Ice& operator = (const Ice& other);
			
			AMateria* clone(void) const;
			void use(ICharacter& target);
};

#endif