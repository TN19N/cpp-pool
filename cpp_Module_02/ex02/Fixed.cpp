/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mannouao <mannouao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 07:06:59 by mannouao          #+#    #+#             */
/*   Updated: 2022/03/31 09:54:17 by mannouao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Fixed.hpp"

Fixed::Fixed(void)
{
	this->raw = 0;
}

Fixed::Fixed(const Fixed& other)
{
	*this = other;
}

Fixed::Fixed(int const number)
{
	this->setRawBits(number << this->bits);
}

Fixed::Fixed(float const number)
{
	this->setRawBits(std::round(number * (1 << this->bits)));
}

Fixed::~Fixed(void)
{
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

bool	Fixed::operator>(const Fixed& other) const
{
	return (this->raw > other.getRawBits());
}

bool	Fixed::operator<(const Fixed& other) const
{
	return (this->raw < other.getRawBits());
}

bool	Fixed::operator>=(const Fixed& other) const
{
	return (this->raw > other.getRawBits() || *this == other);
}

bool	Fixed::operator<=(const Fixed& other) const
{
	return (this->raw < other.getRawBits() || *this == other);
}

bool	Fixed::operator==(const Fixed& other) const
{
	return (this->raw == other.getRawBits());
}

bool	Fixed::operator!=(const Fixed& other) const
{
	return (!(*this == other));
}

Fixed	Fixed::operator+(const Fixed& other)
{
	Fixed	tmp;

	tmp.setRawBits(this->raw + other.getRawBits());
	return (tmp);
}

Fixed	Fixed::operator-(const Fixed& other)
{
	Fixed	tmp;

	tmp.setRawBits(this->raw - other.getRawBits());
	return (tmp);
}

Fixed	Fixed::operator*(const Fixed& other)
{
	Fixed	tmp;

	tmp.setRawBits((this->raw * other.getRawBits()) >> this->bits);
	return (tmp);
}

Fixed	Fixed::operator/(const Fixed& other)
{
	Fixed	tmp;

	tmp.setRawBits((this->raw / other.getRawBits()) >> this->bits);
	return (tmp);
}

Fixed&	Fixed::operator++(void)
{
	++(this->raw);
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
	--(this->raw);
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
	this->raw = other.getRawBits();
	return (*this);
}

std::ostream& operator<<(std::ostream& cout_1,const Fixed& fixed)
{
	cout_1 << fixed.toFloat();
	return (cout_1);
}