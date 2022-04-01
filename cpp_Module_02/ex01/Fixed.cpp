/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mannouao <mannouao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 07:06:59 by mannouao          #+#    #+#             */
/*   Updated: 2022/04/01 14:29:09 by mannouao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Fixed.hpp"

Fixed::Fixed(void)
{
	std::cout << "Default constructor called" << std::endl;
	this->raw = 0;
}

Fixed::Fixed(Fixed const &other)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = other;
}

Fixed::Fixed(int const number)
{
	std::cout << "Int constructor called" << std::endl;
	this->setRawBits(number << this->bits);
}

Fixed::Fixed(float const number)
{
	std::cout << "Float constructor called" << std::endl;
	this->setRawBits(std::round(number * (1 << this->bits)));
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
}

int		Fixed::getRawBits(void) const
{
	return (this->raw);
}

void	Fixed::setRawBits(int const raw)
{
	this->raw = raw;
}

float	Fixed::toFloat(void) const
{
	return ((float)this->raw / (float)(1 << this->bits));
}

int	Fixed::toInt(void) const
{
	return (this->raw >> this->bits);
}

Fixed&	Fixed::operator=(Fixed const &other)
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->raw = other.getRawBits();
	return (*this);
}

std::ostream& operator<<(std::ostream& cout_1,const Fixed& fixed)
{
	cout_1 << fixed.toFloat();
	return (cout_1);
}