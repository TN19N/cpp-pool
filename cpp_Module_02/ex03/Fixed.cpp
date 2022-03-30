/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mannouao <mannouao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 07:06:59 by mannouao          #+#    #+#             */
/*   Updated: 2022/03/30 18:04:43 by mannouao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Fixed.hpp"

Fixed::Fixed(void)
{
	//std::cout << "Default constructor called" << std::endl;
	this->setRawBits(0);
}

Fixed::Fixed(const Fixed& other)
{
	//std::cout << "Copy constructor called" << std::endl;
	*this = other;
}

Fixed::Fixed(int const number)
{
	//std::cout << "Int constructor called" << std::endl;
	this->setRawBits(number << this->bits);
}

Fixed::Fixed(float const number)
{
	//std::cout << "Float constructor called" << std::endl;
	this->setRawBits(std::round(number * (1 << this->bits)));
}

Fixed::~Fixed(void)
{
	//std::cout << "Destructor called" << std::endl;
}

int		Fixed::getRawBits(void) const
{
	return (this->number);
}

void	Fixed::setRawBits(int const raw)
{
	this->number = raw;
}

float	Fixed::toFloat(void) const
{
	return ((float)this->number / (float)(1 << this->bits));
}

int	Fixed::toInt(void) const
{
	return (this->number >> this->bits);
}

bool	Fixed::operator>(const Fixed& other) const
{
	return (this->number > other.number);
}

bool	Fixed::operator<(const Fixed& other) const
{
	return (this->number < other.number);
}

bool	Fixed::operator>=(const Fixed& other) const
{
	return (this->number > other.number || *this == other);
}

bool	Fixed::operator<=(const Fixed& other) const
{
	return (this->number < other.number || *this == other);
}

bool	Fixed::operator==(const Fixed& other) const
{
	return (this->number == other.number);
}

bool	Fixed::operator!=(const Fixed& other) const
{
	return (!(*this == other));
}

Fixed	Fixed::operator+(const Fixed& other)
{
	Fixed	tmp;

	tmp.setRawBits(this->number + other.number);
	return (tmp);
}

Fixed	Fixed::operator-(const Fixed& other)
{
	Fixed	tmp;

	tmp.setRawBits(this->number - other.number);
	return (tmp);
}

Fixed	Fixed::operator*(const Fixed& other)
{
	Fixed	tmp;

	tmp.setRawBits((this->number * other.number) >> this->bits);
	return (tmp);
}

Fixed	Fixed::operator/(const Fixed& other)
{
	Fixed	tmp;

	tmp.setRawBits((this->number / other.number) >> this->bits);
	return (tmp);
}

Fixed&	Fixed::operator++(void)
{
	++(this->number);
	return (*this);
}

Fixed	Fixed::operator++(int)
{
	Fixed	tmp(*this);
	++(*this);
	return (tmp);
}

Fixed&	Fixed::operator--(void)
{
	--(this->number);
	return (*this);
}

Fixed	Fixed::operator--(int)
{
	Fixed	tmp(*this);
	--(*this);
	return (tmp);
}

const Fixed&	Fixed::min(Fixed& fix_1, Fixed& fix_2)
{
	if (fix_1 >= fix_2)
		return (fix_2);
	else
		return (fix_1);
}

const Fixed&	Fixed::min(const Fixed& fix_1, const Fixed& fix_2)
{
	if (fix_1 >= fix_2)
		return (fix_2);
	else
		return (fix_1);
}

const Fixed&	Fixed::max(Fixed& fix_1, Fixed& fix_2)
{
	if (fix_1 >= fix_2)
		return (fix_1);
	else
		return (fix_2);
}

const Fixed&	Fixed::max(const Fixed& fix_1, const Fixed& fix_2)
{
	if (fix_1 >= fix_2)
		return (fix_1);
	else
		return (fix_2);
}

Fixed&	Fixed::operator=(const Fixed& other)
{
	//std::cout << "Copy assignment operator called" << std::endl;
	this->number = other.number;
	return (*this);
}

std::ostream& operator<<(std::ostream& cout_1,const Fixed& fixed)
{
	cout_1 << fixed.toFloat();
	return (cout_1);
}