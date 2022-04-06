/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mannouao <mannouao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 14:19:00 by mannouao          #+#    #+#             */
/*   Updated: 2022/04/06 14:19:24 by mannouao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(void)
	: Form("PresidentialPardonForm", 25, 5)
{
	this->target = "default_target";
}

PresidentialPardonForm::PresidentialPardonForm(const std::string& target)
	: Form("PresidentialPardonForm", 25, 5)
{
	this->target = target;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& other)
	: Form(other)
{
	this->target = other.target;
}

PresidentialPardonForm::~PresidentialPardonForm(void)
{
	// do nothing
}

PresidentialPardonForm& PresidentialPardonForm::operator = (const PresidentialPardonForm& other)
{
	this->target = other.target;
	return (*this);
}