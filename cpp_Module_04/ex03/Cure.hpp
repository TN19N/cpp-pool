/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mannouao <mannouao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/03 19:51:36 by mannouao          #+#    #+#             */
/*   Updated: 2022/04/04 14:41:01 by mannouao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP

# define CURE_HPP

# include "ICharacter.hpp"
# include "AMateria.hpp"
# include <string>

class Cure : public AMateria
{
		public:
			Cure(void);
			Cure(const Cure& other);
			Cure& operator = (const Cure& other);
			~Cure(void);
			
			AMateria* clone(void) const;
			void use(ICharacter& target);
};

#endif