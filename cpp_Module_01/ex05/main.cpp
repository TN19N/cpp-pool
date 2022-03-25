/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mannouao <mannouao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/25 07:41:37 by mannouao          #+#    #+#             */
/*   Updated: 2022/03/25 13:07:08 by mannouao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Harl.hpp"

int main(void)
{
	Harl	harl;

	harl.complain("ERROR");
	
	std::cout << "**************" << std::endl;
	
	harl.complain("WARNING");
	
	std::cout << "**************" << std::endl;
	
	harl.complain("INFO");

	std::cout << "**************" << std::endl;
	
	harl.complain("DEBUG");

	std::cout << "**************" << std::endl;
	
	harl.complain("DEBUG ");
}