/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mannouao <mannouao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/03 17:57:43 by mannouao          #+#    #+#             */
/*   Updated: 2022/04/04 14:48:36 by mannouao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP

# define AMATERIA_HPP

# include <string>
# include <iostream>
# include "ICharacter.hpp"

class AMateria
{
	protected:
		std::string type;
	public:
		AMateria(void);
		AMateria(const std::string& type);
		AMateria(const AMateria& other);
		AMateria& operator = (const AMateria& other);
		virtual ~AMateria(void);

		const std::string& getType() const;

		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target);
};

#endif