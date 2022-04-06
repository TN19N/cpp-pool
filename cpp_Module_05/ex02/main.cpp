/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mannouao <mannouao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 14:25:32 by mannouao          #+#    #+#             */
/*   Updated: 2022/04/06 01:55:56 by mannouao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Form.hpp"
# include "Bureaucrat.hpp"

int main()
{
	try
	{
		Bureaucrat f("GF", 40);
		Form j("Wr9a", 40, 1);
		//j.beSigned(f);
		f.signForm(j);
		std::cout << j << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	
}