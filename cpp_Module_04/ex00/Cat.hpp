/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mannouao <mannouao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/02 23:33:13 by mannouao          #+#    #+#             */
/*   Updated: 2022/04/03 13:05:06 by mannouao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_CPP

# define	CAT_CPP

# include "Animal.hpp"
# include <string>
# include <iostream>

class Cat : public Animal
{
	public:
		Cat(void);
		Cat(const Cat& other);
		Cat&	operator=(const Cat& other);
		~Cat(void);

		void	makeSound(void) const;
};

#endif