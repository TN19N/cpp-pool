/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mannouao <mannouao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/02 23:38:49 by mannouao          #+#    #+#             */
/*   Updated: 2022/04/03 13:05:26 by mannouao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Animal.hpp"

Animal::Animal(void)
{
	std::cout << "Animal  Default constructor called" << std::endl;
	this->type = "Animal";
}

Animal::Animal(const Animal& other)
{
	std::cout << "Animal Copy constructor called" << std::endl;
	*this = other;
}

Animal&	Animal::operator=(const Animal& other)
{
	this->type = other.type;
	return (*this);
}

Animal::~Animal(void)
{
	std::cout << "Animal destructor called" << std::endl;
}

void	Animal::makeSound(void) const
{
	std::cout << "Animal : Animal sound ......" << std::endl;
}

const std::string&	Animal::getType(void) const
{
	return(this->type);
}