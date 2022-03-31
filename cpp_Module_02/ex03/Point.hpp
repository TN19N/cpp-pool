/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mannouao <mannouao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 06:12:33 by mannouao          #+#    #+#             */
/*   Updated: 2022/03/31 10:54:40 by mannouao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	POINT_HPP

# define	POINT_HPP

# include "Fixed.hpp"

class Point
{
	private:
		Fixed const x;
		Fixed const	y;
	public:
		Point(void) : x(0), y(0) {};
		Point(float const _x, float const _y) : x(_x), y(_y) {};
		Point(const Point& other);
		Point&	operator=(const Point&	other);
		~Point(void);

		const Fixed& get_x(void) const;
		const Fixed& get_y(void) const;
};

bool	bsp(Point const a, Point const b, Point const c, Point const point);

#endif