/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mannouao <mannouao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 08:39:29 by mannouao          #+#    #+#             */
/*   Updated: 2022/04/01 16:47:59 by mannouao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Fixed.hpp"

int	main( void ) 
{ 
	{
		Fixed a;
		Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
		std::cout << a << std::endl;
		std::cout << ++a << std::endl;
		std::cout << a << std::endl;
		std::cout << a++ << std::endl;
		std::cout << a << std::endl;
		std::cout << b << std::endl;
		std::cout << Fixed::max( a, b ) << std::endl << std::endl;
	}
	
	std::cout << "************************" << std::endl << std::endl; 

	Fixed a(1);
	Fixed b(0.5f);
	
	// >
	std::cout << "a = " << a << "; b = " << b << "; (>) ";
	std::cout << (a > b) << std::endl;

	// <
	std::cout << "a = " << a << "; b = " << b << "; (<) ";
	std::cout << (a < b) << std::endl;

	// >=
	a = b;
	std::cout << "a = " << a << "; b = " << b << "; (>=) ";
	std::cout << (a >= b) << std::endl;

	//<=
	std::cout << "a = " << a << "; b = " << b << "; (<=) ";
	std::cout << (a <= b) << std::endl;

	//==
	std::cout << "a = " << a << "; b = " << b << "; (==) ";
	std::cout << (a == b) << std::endl;

	//!=
	std::cout << "a = " << a << "; b = " << b << "; (!=) ";
	std::cout << (a != b) << std::endl;

	//+
	a = b + b + b;
	b = b + b;
	std::cout << "a = " << a << "; b = " << b << "; (+) ";
	std::cout << (a + b) << std::endl;

	//-
	std::cout << "a = " << a << "; b = " << b << "; (-) ";
	std::cout << (a - b) << std::endl;

	//*
	b = b + b;
	std::cout << "a = " << a << "; b = " << b << "; (*) ";
	std::cout << (a * b) << std::endl;

	// "/"
	a = a - b - a - a;
	std::cout << "a = " << a << "; b = " << b << "; (/) ";
	std::cout << (a / b) << std::endl;

	// min
	std::cout << "a = " << a << "; b = " << b << "; (min) ";
	std::cout << Fixed::min(a, b) << std::endl;

	// max
	const Fixed i(2);
	const Fixed y(3);
	std::cout << "i = " << i << "; y = " << y << "; (max) ";
	std::cout << Fixed::max(i, y) << std::endl;
	return (0);
}