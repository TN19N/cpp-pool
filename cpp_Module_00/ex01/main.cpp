/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mannouao <mannouao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 10:28:19 by mannouao          #+#    #+#             */
/*   Updated: 2022/03/10 10:46:47 by mannouao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "PhoneBook.hpp"

int main()
{
	PhoneBook	phonebook;
	std::string	buffer;

	std::cout << "usage: 'ADD' to add contact, 'SEARCH' to search for contact, 'EXIT' to exit from the programme" << std::endl;
	while (1)
	{
		std::cout << "enter some then : ";
		std::cin >> buffer;
		
		if (!buffer.length())
		{
			std::cout << std::endl;
			break;
		}
		else if (!buffer.compare("ADD"))
			phonebook.add();
		else if (!buffer.compare("SEARCH"))
			phonebook.search();
		else if (!buffer.compare("EXIT"))
		{
			std::cout << "you exit from the programme" << std::endl;
			break ;
		}
		else
		{
			std::cout << "(cmd dont exits) :(" << std::endl
					  << "usage :" << std::endl
					  << "'ADD' to add contact" << std::endl
					  << "'SEARCH' to search for contact" << std::endl
					  << "'EXIT' to exit from the programme" << std::endl;
		}
	}
	return (0);
}