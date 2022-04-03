/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mannouao <mannouao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/02 23:33:13 by mannouao          #+#    #+#             */
/*   Updated: 2022/04/03 13:05:09 by mannouao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_CPP

# define	DOG_CPP

# include "Animal.hpp"
# include <string>
# include <iostream>

class Dog : public Animal
{
	public:
		Dog(void);
		Dog(const Dog& other);
		Dog&	operator=(const Dog& other);
		~Dog(void);

		void	makeSound(void) const;
};

#endif