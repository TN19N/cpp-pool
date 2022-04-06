/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mannouao <mannouao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 14:25:32 by mannouao          #+#    #+#             */
/*   Updated: 2022/04/06 14:48:15 by mannouao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Form.hpp"
# include "Bureaucrat.hpp"
# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"

int main()
{
	try
	{
		Bureaucrat b("HH", 137);
		ShrubberyCreationForm form;

		form.beSigned(b);
		form.execute(b);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
}