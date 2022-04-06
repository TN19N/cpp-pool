/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mannouao <mannouao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 16:47:05 by mannouao          #+#    #+#             */
/*   Updated: 2022/04/06 23:32:13 by mannouao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Intern.hpp"

Intern::Intern(void)
{
	// do nothing
}

Intern::Intern(const Intern& other)
{
	*this = other;
}

Intern::~Intern(void)
{
	// do nothing
}

Form* Intern::NewShrubbery(const std::string& target)
{
	return (new ShrubberyCreationForm(target));
}

Form* Intern::NewRobotomy(const std::string& target)
{
	return (new RobotomyRequestForm(target));
}

Form* Intern::NewPresidential(const std::string& target)
{
	return (new PresidentialPardonForm(target));
}

Form* Intern::makeForm(const std::string& FormName, const std::string& TargetName)
{
	std::string array[3] = {"shrubbery creation", "robotomy request", "presidential pardon"};
	typedef Form *(Intern::*f)(const std::string&);
	f f_array[3] = {
						&Intern::NewShrubbery, 
	                	&Intern::NewRobotomy, 
						&Intern::NewPresidential
					};
	Form *form;

	for (int i = 0; i < 3; i++)
	{
		if (FormName == array[i])
		{
			form = (this->*(f_array[i]))(TargetName);
			std::cout << "Intern creates " << form->getName() << std::endl;
			return (form);
		}
	}
	std::cout << "Intern can't find " << FormName << " Form ." << std::endl;
	return (NULL);
}

Intern& Intern::operator = (const Intern& other)
{
	(void) other;
	// do nothing
	return (*this);
}