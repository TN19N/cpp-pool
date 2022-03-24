/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mannouao <mannouao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 09:38:59 by mannouao          #+#    #+#             */
/*   Updated: 2022/03/24 09:51:56 by mannouao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>
# include <string>

int main()
{
	std::string string = "HI THIS IS BRAIN";
	std::string *stringPTR;
	stringPTR = &string;
	std::string	&stringREF = string;

	std::cout << std::endl << "------------ addresses -----------" << std::endl; 
	std::cout << "memory address of the string variable :" << &string << std::endl;
	std::cout << "memory address held by stringPTR :" << stringPTR << std::endl; 
	std::cout << "memory address held by stringREF :" << &stringREF << std::endl;
	
	std::cout << std::endl << "------------ values -----------" << std::endl;
	std::cout << "The value of the string variable : \"" << string << "\"" << std::endl;
	std::cout << "The value pointed to by stringPTR : \"" << *stringPTR << "\"" << std::endl; 
	std::cout << "The value pointed to by stringREF : \"" << stringREF << "\"" << std::endl;
}