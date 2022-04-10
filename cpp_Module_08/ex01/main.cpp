/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mannouao <mannouao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/09 23:00:11 by mannouao          #+#    #+#             */
/*   Updated: 2022/04/10 17:21:49 by mannouao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <ctime>
# include "Span.hpp"

int main()
{
	Span sp = Span(5);
	try
	{
  		sp.addNumber(6);
  		sp.addNumber(3);
  		sp.addNumber(17);
  		sp.addNumber(9);
  		sp.addNumber(11);

		std::cout << std::endl << "Shortest Span : " << sp.shortestSpan() << std::endl;
  		std::cout << "Longest Span : " << sp.longestSpan() << std::endl;
	}
	catch (const std::exception& e)
	{
		std::cout << e.what() << std::endl;
		return (0);
	}

	std::cout << std::endl << "********************************" << std::endl << std::endl;

	std::vector<int> vec;
	Span span(10000);

	std::srand(std::time(NULL));
	for (int i = 0; i < 10000; i++)
		vec.push_back(rand());
	try
	{
		span.addRangOfNumbers(vec.begin(), vec.end());

		std::cout << "Shortest Span : " << span.shortestSpan() << std::endl;
		std::cout << "Longest Span : " << span.longestSpan() << std::endl << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
		return (1);
	}
	return (0);
}