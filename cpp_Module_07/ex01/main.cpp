/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mannouao <mannouao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 18:11:45 by mannouao          #+#    #+#             */
/*   Updated: 2022/04/09 14:17:56 by mannouao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>
# include "iter.hpp"


template<typename T>
void print(const T& to_print)
{
	std::cout << " - " << to_print << " - " << std::endl;
}

int main()
{
	std::string	s[] = {"Ahmad", "Mustapha", "Ayoube"};
	int a[] = {1, 3, 3, 4};

	iter(a, 4, &print);
	
	std::cout << std::endl << "***********************" << std::endl << std::endl;
	
	iter(s, 3, &print);
}