/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mannouao <mannouao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 09:12:40 by mannouao          #+#    #+#             */
/*   Updated: 2022/03/21 13:20:31 by mannouao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "PhoneBook.hpp"

void	PhoneBook::add(void)
{
	static int	index;
	std::string	tmp;

	if (index == 8)
		index = 0;
	while (1337)
	{
		std::cout << "enter first_name : ";
		std::getline(std::cin, tmp);
		if (std::cin.eof())
		{
			std::cout << std::endl;
			exit(0);
		}
		if (!this->contacts[index].set_first_name(tmp))
			std::cout << "enter just alphabet !!" << std::endl;
		else
			break ;
	}
	while (1337)
	{
		std::cout << "enter the last_name : ";
		std::getline(std::cin, tmp);
		if (std::cin.eof())
		{
			std::cout << std::endl;
			exit(0);
		}
		if (!this->contacts[index].set_last_name(tmp))
			std::cout << "enter just alphabet !!" << std::endl;
		else
			break ;
	}
	while (1337)
	{
		std::cout << "enter the nickname : ";
		std::getline(std::cin, tmp);
		if (std::cin.eof())
		{
			std::cout << std::endl;
			exit(0);
		}
		if (!this->contacts[index].set_nickname(tmp))
			std::cout << "enter just alphabet !!" << std::endl;
		else
			break ;
	}
	while (1337)
	{
		std::cout << "enter the phone_number : ";
		std::getline(std::cin, tmp);
		if (std::cin.eof())
		{
			std::cout << std::endl;
			exit(1);
		}
		if (!this->contacts[index].set_phone_number(tmp))
			std::cout << "enter just digits !!" << std::endl;
		else
			break ;
	}
	while (1337)
	{
		std::cout << "enter the darkest_secret : ";
		std::getline(std::cin, tmp);
		if (std::cin.eof())
		{
			std::cout << std::endl;
			exit(0);
		}
		if (!this->contacts[index].set_darkest_secret(tmp))
			std::cout << "enter just printable characters !!" << std::endl;
		else
			break ;
	}
	index++;
	if (this->number_of_contacts != 8)
		this->number_of_contacts++;
}

void	PhoneBook::search(void) const {
	int			tmp;
	int			i;
	std::string	tmp_str;

	std::cout << " --index--" << "|" << "First-name" << "|" << "last--name" << "|" << "-nickname-" << "|" << std::endl;
	for (int i = 0; i < this->number_of_contacts ; i++)
	{
		std::cout << " -- [" << i << "] --" << "|";
		tmp_str = this->contacts[i].get_first_name();
		if (tmp_str.length() > 10)
		{
			tmp_str = tmp_str.substr(0, 9);
			tmp_str.push_back('.');
			std::cout << std::setw(10) << tmp_str << "|";
		}
		else
			std::cout << std::setw(10) << tmp_str << "|";
		tmp_str = this->contacts[i].get_last_name();
		if (tmp_str.length() > 10)
		{
			tmp_str = tmp_str.substr(0, 9);
			tmp_str.push_back('.');
			std::cout << std::setw(10) << tmp_str << "|";
		}
		else
			std::cout << std::setw(10) << tmp_str << "|";
		tmp_str = this->contacts[i].get_nickname();
		if (tmp_str.length() > 10)
		{
			tmp_str = tmp_str.substr(0, 9);
			tmp_str.push_back('.');
			std::cout << std::setw(10) << tmp_str << "|";
		}
		else
			std::cout << std::setw(10) << tmp_str << "|";
		std::cout << std::endl;
	}
	while (1337)
	{
		if (this->number_of_contacts == 0)
		{
			std::cout << "<- the phonebook is empty ->" << std::endl;
			break ;
		}
		std::cout << "enter index of contact : ";
		std::getline(std::cin, tmp_str);
		if (std::cin.eof())
		{
			std::cout << std::endl;
			exit(0);
		}
		i = -1;
		while (tmp_str[++i])
			if (!std::isdigit(tmp_str[i]))
				break ;
		if (tmp_str[i] || !tmp_str.length() || tmp_str.length() > 1)
		{
			std::cout << "enter just digits with out (+) and (-) from 0 to 7 !!" << std::endl;
			continue ;
		}
		tmp = std::stoi(tmp_str.c_str());
		if (tmp < 0 || tmp >= this->number_of_contacts)
			std::cout << "that contact dosenot exist" << std::endl;
		else
		{
			std::cout << "the first name : " << this->contacts[tmp].get_first_name() << std::endl;
			std::cout << "the last name : " << this->contacts[tmp].get_last_name() << std::endl;
			std::cout << "the nickname : " << this->contacts[tmp].get_nickname() << std::endl;
			std::cout << "the phone number : " << this->contacts[tmp].get_phone_number() << std::endl;
			std::cout << "the darkest secret : " << this->contacts[tmp].get_darkest_secret() << std::endl;
			break ;
		}
	}
}