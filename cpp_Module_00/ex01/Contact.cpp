/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mannouao <mannouao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 07:42:10 by mannouao          #+#    #+#             */
/*   Updated: 2022/03/20 11:59:08 by mannouao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Contact.hpp"

std::string	Contact::get_first_name(void) const {
	return (this->first_name);
}

std::string	Contact::get_last_name(void) const {
	return (this->last_name);
}

std::string	Contact::get_nickname(void) const {
	return (this->nickname);
}

std::string	Contact::get_phone_number(void) const {
	return (this->phone_number);
}

std::string	Contact::get_darkest_secret(void) const {
	return (this->darkest_secret);
}

int	Contact::set_first_name(std::string const str) {
	for (int i = 0; str[i]; i++)
	{
		if (!std::isalpha(str[i]))
			return 0;
	}
	if (!str.length())
		return (0);
	this->first_name = str;
	return (1);
}

int	Contact::set_last_name(std::string const str) {
	for (int i = 0; str[i]; i++)
	{
		if (!std::isalpha(str[i]))
			return (0);
	}
	if (!str.length())
		return (0);
	this->last_name = str;
	return (1);
}

int	Contact::set_nickname(std::string const str) {
	for (int i = 0; str[i]; i++)
	{
		if (!std::isalpha(str[i]))
			return (0);
	}
	if (!str.length())
		return (0);
	this->nickname = str;
	return (1);
}

int	Contact::set_phone_number(std::string const str) {
	for (int i = 0; str[i]; i++)
	{
		if (!std::isdigit(str[i]))
			return (0);
	}
	if (!str.length())
		return (0);
	this->phone_number = str;
	return (1);
}

int	Contact::set_darkest_secret(std::string const str) {
	for (int i = 0; str[i]; i++)
	{
		if (!std::isprint(str[i]))
			return (0);
	}
	if (!str.length())
		return (0);
	this->phone_number = str;
	return (1);
}