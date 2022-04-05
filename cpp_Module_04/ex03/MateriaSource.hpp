/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mannouao <mannouao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/03 21:23:05 by mannouao          #+#    #+#             */
/*   Updated: 2022/04/03 23:28:44 by mannouao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP

# define MATERIASOURCE_HPP

# include "IMateriaSource.hpp"
# include "AMateria.hpp"
# include "Ice.hpp"
# include "Cure.hpp"

class MateriaSource : public IMateriaSource
{
	private:
		AMateria *materias[4];
	public:
		MateriaSource(void);
		MateriaSource(const MateriaSource& other);
		~MateriaSource(void);
		MateriaSource& operator = (const MateriaSource& other);

		void learnMateria(AMateria *m);
		AMateria* createMateria(const std::string& type);
};

#endif