/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mannouao <mannouao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 14:25:32 by mannouao          #+#    #+#             */
/*   Updated: 2022/04/06 16:40:27 by mannouao         ###   ########.fr       */
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
		Bureaucrat a("Ahmad", 5);
		ShrubberyCreationForm f("Mstapha");
		RobotomyRequestForm r("Ayoube");
		PresidentialPardonForm p("Mohmad");

		a.signForm(p);
		a.executeForm(p);
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	
}