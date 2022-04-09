/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mannouao <mannouao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/09 14:59:44 by mannouao          #+#    #+#             */
/*   Updated: 2022/04/09 22:57:15 by mannouao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>
# include <vector>
# include <list>
# include "easyfind.hpp"

int main()
{
	std::vector<int> vec;

	vec.push_back(1);
	vec.push_back(2);
	vec.push_back(3);
	vec.push_back(1337);

	try
	{
		std::cout << "find : " << easyfind(vec, 1337) << std::endl;
	}
	catch (std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}

	std::list<int> les;

	les.push_back(-1);
	les.push_back(-2);
	les.push_back(-3);
	les.push_back(-1337);

	try
	{
		std::cout << "find : " << easyfind(les, -1337) << std::endl;
	}
	catch (std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
}
