/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mannouao <mannouao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/02 23:38:49 by mannouao          #+#    #+#             */
/*   Updated: 2022/04/03 13:41:20 by mannouao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Cat.hpp"

Cat::Cat(void)
{
	std::cout << "Cat  Default constructor called" << std::endl;
	this->type = "Cat";
}

Cat::Cat(const Cat& other)
{
	std::cout << "Cat Copy constructor called" << std::endl;
	*this = other;
}

Cat&	Cat::operator=(const Cat& other)
{
	this->type = other.type;
	return (*this);
}

Cat::~Cat(void)
{
	std::cout << "Cat destructor called" << std::endl;
}

void	Cat::makeSound(void) const
{
	std::cout << "Cat : Cat sound (meaw meaw ...)" << std::endl;
}