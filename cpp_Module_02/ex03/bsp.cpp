/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mannouao <mannouao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 06:12:36 by mannouao          #+#    #+#             */
/*   Updated: 2022/04/01 17:09:48 by mannouao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Point.hpp"

Fixed	get_area(Point const a, Point const b, Point const c)
{
	Fixed	tmp(0.5f);
	return (tmp * (
				   	a.get_x() * (b.get_y() - c.get_y()) +
				   	b.get_x() * (c.get_y() - a.get_y()) +
					c.get_x() * (a.get_y() - b.get_y())
				  )
			);
}

bool	bsp(Point const a, Point const b, Point const c, Point const point)
{
	Fixed	ar1, ar2, ar3, all_ar, tmp(0), tmp_1(-1);
	
	ar1 = get_area(point, a, b);
	if (ar1 < tmp) ar1 = ar1 * tmp_1;
	ar2 = get_area(point, b, c);
	if (ar2 < tmp) ar2 = ar2 * tmp_1;
	ar3 = get_area(point, c, a);
	if (ar3 < tmp) ar3 = ar3 * tmp_1;
	all_ar = get_area(a, b, c);
	if (all_ar < tmp) all_ar = all_ar * tmp_1;
	if (all_ar >= ar1 + ar2 + ar3 && ar1 != tmp && ar2 != tmp && ar3 != tmp)
		return (true);
	else
		return (false);
}