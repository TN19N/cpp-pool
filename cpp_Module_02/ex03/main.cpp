/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mannouao <mannouao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 07:48:19 by mannouao          #+#    #+#             */
/*   Updated: 2022/04/01 17:09:16 by mannouao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Point.hpp"

int main(void)
{
	Point a(1, 1);
	Point b(0, -1);
	Point c(-2, 0);

	Point p(0.5, 0.5);
	if (bsp(a, b, c, p))
		std::cout << "the point is in inside" << std::endl;
	else
		std::cout << "the point is not in inside" << std::endl;
}