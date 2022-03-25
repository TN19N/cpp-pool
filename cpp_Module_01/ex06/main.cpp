/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mannouao <mannouao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/25 07:41:37 by mannouao          #+#    #+#             */
/*   Updated: 2022/03/25 11:34:50 by mannouao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Harl.hpp"

int main(int ac, char *av[])
{
	Harl	harl;

	if (ac == 2)
		harl.complain(av[1]);
	else
		std::cout << "usage: ./harlFilter (level)" << std::endl;
}