/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mannouao <mannouao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 14:13:28 by mannouao          #+#    #+#             */
/*   Updated: 2022/04/05 21:56:42 by mannouao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(void)
{
	this->name = "default_name";
	this->grade = 150;
}

Bureaucrat::Bureaucrat(const std::string& name, const int grade)
{
	if (grade < 1)
		throw (Bureaucrat::GradeTooHighException());
	else if (grade > 150)
		throw (Bureaucrat::GradeTooLowException());
	this->name = name;
	this->grade = grade;
}

Bureaucrat::Bureaucrat(const Bureaucrat& other)
{
	*this = other;
}

Bureaucrat::~Bureaucrat(void)
{
	// do nothing
}

Bureaucrat& Bureaucrat::operator = (const Bureaucrat& other)
{
	this->name = other.name;
	this->grade = other.grade;
	return (*this);
}

const std::string& Bureaucrat::getName(void) const
{
	return this->name;
}

const int& Bureaucrat::getGrade(void) const
{
	return this->grade;
}

void Bureaucrat::decrementGrade(void)
{
	if (this->grade + 1 > 150)
		throw (Bureaucrat::GradeTooLowException());
	else
		this->grade++;
}

void Bureaucrat::incrementGrade(void)
{
	if (this->grade - 1 < 1)
		throw (Bureaucrat::GradeTooHighException());
	else
		this->grade--;
}

std::ostream& operator<<(std::ostream& _cout, const Bureaucrat& other)
{
	_cout << other.getName() << ", bureaucrat grade " << other.getGrade() << ".";
	return (_cout);
}