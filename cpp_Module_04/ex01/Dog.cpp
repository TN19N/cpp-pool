/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mannouao <mannouao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/02 23:38:49 by mannouao          #+#    #+#             */
/*   Updated: 2022/04/03 16:11:28 by mannouao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Dog.hpp"

Dog::Dog(void)
{
	std::cout << "Dog  Default constructor called" << std::endl;
	this->brain = new Brain();
	this->type = "Dog";
}

Dog::Dog(const Dog& other)
{
	std::cout << "Dog Copy constructor called" << std::endl;
	this->brain = new Brain();
	*this = other;
}

Dog&	Dog::operator=(const Dog& other)
{
	this->type = other.type;
	*(this->brain) = *(other.brain);
	return (*this);
}

Dog::~Dog(void)
{
	delete this->brain;
	std::cout << "Dog destructor called" << std::endl;
}

void	Dog::makeSound(void) const
{
	std::cout << "Dog : Dog sound (braw braw ...)" << std::endl;
}