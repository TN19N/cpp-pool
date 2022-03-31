/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mannouao <mannouao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 07:48:19 by mannouao          #+#    #+#             */
/*   Updated: 2022/03/31 14:20:37 by mannouao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Point.hpp"

int main(void)
{
	Point a(1, 2);
	Point b(-2, 3);
	Point c(0, 0);

	Point p(0, 10);
	if (bsp(a, b, c, p))
		std::cout << "the point is in inside" << std::endl;
	else
		std::cout << "the point is not in inside" << std::endl;
}