/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mannouao <mannouao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 02:31:45 by mannouao          #+#    #+#             */
/*   Updated: 2022/04/06 14:32:52 by mannouao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP

#define SHRUBBERYCREATIONFORM_HPP

# include <fstream>
# include <iostream>
# include <string>
# include "Form.hpp"

class ShrubberyCreationForm : public Form
{
	private:
		std::string target;
	public:
		ShrubberyCreationForm(void);
		ShrubberyCreationForm(const std::string& target);
		ShrubberyCreationForm(const ShrubberyCreationForm& other);
		~ShrubberyCreationForm(void);

		void ActiveForm(void) const;
			
		ShrubberyCreationForm& operator = (const ShrubberyCreationForm& other);
};

#endif