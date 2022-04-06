/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mannouao <mannouao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 14:16:55 by mannouao          #+#    #+#             */
/*   Updated: 2022/04/06 16:37:42 by mannouao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(void)
	: Form("RobotomyRequestForm", 72, 45)
{
	this->target = "default_target";
}

RobotomyRequestForm::RobotomyRequestForm(const std::string& target)
	: Form("RobotomyRequestForm", 72, 45)
{
	this->target = target;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& other)
	: Form(other)
{
	this->target = other.target;
}

RobotomyRequestForm::~RobotomyRequestForm(void)
{
	// do nothing
}

void RobotomyRequestForm::ActiveForm(void) const
{
	srand(time(NULL));

	if (rand() % 2)
		std::cout << "loading ... " << this->target << " has been robotomized successfully." << std::endl;
	else
		std::cout << "loading ... failed to robotomized " << this->target << "." << std::endl;
}

RobotomyRequestForm& RobotomyRequestForm::operator = (const RobotomyRequestForm& other)
{
	this->target = other.target;
	return (*this);
}