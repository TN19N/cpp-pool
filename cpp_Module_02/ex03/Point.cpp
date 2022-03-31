/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mannouao <mannouao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 06:12:30 by mannouao          #+#    #+#             */
/*   Updated: 2022/03/31 11:04:02 by mannouao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Point.hpp"

Point::Point(const Point& other)
{
	*this = other;
}

Point&	Point::operator=(const Point& other)
{
	*const_cast<Fixed*> (&this->x) = other.x;
	*const_cast<Fixed*> (&this->y) = other.y;
	return (*this);
}

Point::~Point(void)
{
	
}

const Fixed& Point::get_x(void) const
{
	return (this->x);
}

const Fixed& Point::get_y(void) const
{
	return (this->y);
}