/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mannouao <mannouao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 09:12:40 by mannouao          #+#    #+#             */
/*   Updated: 2022/03/10 10:58:53 by mannouao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "PhoneBook.hpp"

void	PhoneBook::add(void)
{
	std::string	tmp;

	if (this->index == 7)
		this->index = 0;
	std::cout << "enter first_name : ";
	std::cin >> tmp;
	while (!this->contacts[this->index].set_first_name(tmp))
	{
		std::cout << "enter just alphabet !!" << std::endl;
		std::cin >> tmp;
	}
	std::cout << "enter the last_name : ";
	std::cin >> tmp;
	while (!this->contacts[this->index].set_last_name(tmp))
	{
		std::cout << "enter just alphabet !!" << std::endl;
		std::cin >> tmp;
	}
	std::cout << "enter the nickname : ";
	std::cin >> tmp;
	while (!this->contacts[this->index].set_nickname(tmp))
	{
		std::cout << "enter just nickname !!" << std::endl;
		std::cin >> tmp;
	}
	std::cout << "enter the phone_number : ";
	std::cin >> tmp;
	while (!this->contacts[this->index].set_phone_number(tmp))
	{
		std::cout << "enter just digits !!" << std::endl;
		std::cin >> tmp;
	}
	std::cout << "enter the darkest_secret : ";
	std::cin >> tmp;
	while (!this->contacts[this->index].set_darkest_secret(tmp))
	{
		std::cout << "enter just printable characters !!" << std::endl;
		std::cin >> tmp;
	}
	this->index++;
}

void	PhoneBook::search(void) const {
	int			tmp;
	std::string	tmp_str;

	std::cout << "index" << "|" << "First name" << "|" << "last name " << "|" << "nickname  " << "|" << std::endl;
	for (int i = 0; i <= this->index ; i++)
	{
		std::cout << " [" << i << "] " << "|";
		tmp_str = this->contact[i].get_first_name();
		if (tmp_str.length() > 10)
			std::cout << tmp_str.substr(0, 9) << "." << "|";
		else
		{
			std::cout << tmp_str;
			for (int i = tmp_str.length(); i <= 10; i++)
				std::cout << " ";
			std::cout << "|";
		}
		tmp_str = this->contact[i].get_last_name();
		if (tmp_str.length() > 10)
			std::cout << tmp_str.substr(0, 9) << "." << "|";
		else
		{
			std::cout << tmp_str;
			for (int i = tmp_str.length(); i <= 10; i++)
				std::cout << " ";
			std::cout << "|";
		}
		tmp_str = this->contact[i].get_nickname();
		if (tmp_str.length() > 10)
			tmp_str.substr(0, 9) << "." << "|";
		else
		{
			std::cout << tmp_str;
			for (int i = tmp_str.length(); i <= 10; i++)
				std::cout << " ";
			std::cout << "|";
		}
		std::cout << std::endl;
	}
	while (1)
	{
		if (this->index == 0)
		{
			std::cout << "the phonebook is empty :(" << std::endl;
			break ;
		}
		std::cout << "enter index of contact : ";
		cin >> tmp;
		if (tmp > this->index)
			std::cout << "that contact dosenot exist" << std::endl;
		else
		{
			std::cout << "the first name : " << this->contact[tmp].get_first_name() << std::endl;
			std::cout << "the last name : " << this->contact[tmp].get_last_name() << std::endl;
			std::cout << "the nickname : " << this->contact[tmp].get_nickname() << std::endl;
			std::cout << "the phone number : " << this->contact[tmp].get_phone_number() << std::endl;
			std::cout << "the darkest secret : " << this->contact[tmp].get_darkest_secret() << std::endl;
			break ;
		}
	}
}