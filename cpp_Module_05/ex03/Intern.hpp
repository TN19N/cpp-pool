/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mannouao <mannouao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 16:47:07 by mannouao          #+#    #+#             */
/*   Updated: 2022/04/06 23:00:18 by mannouao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP

# define INTERN_HPP

# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"
# include "Form.hpp"
# include <string>
# include <iostream>

class Intern
{
	public:
		Intern(void);
		Intern(const Intern& other);
		~Intern(void);
		
		Form* makeForm(const std::string& FormName, const std::string& TargetName);
		
		Form* NewShrubbery(const std::string& target);
		Form* NewRobotomy(const std::string& target);
		Form* NewPresidential(const std::string& target);

		Intern& operator = (const Intern& other);	
};

#endif