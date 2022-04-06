/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mannouao <mannouao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 02:31:42 by mannouao          #+#    #+#             */
/*   Updated: 2022/04/06 14:51:57 by mannouao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(void)
	: Form("ShrubberyCreationForm", 145, 137)
{
	this->target = "default_target";
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string& target)
	: Form("ShrubberyCreationForm", 145, 137)
{
	this->target = target;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& other)
	: Form(other)
{
	this->target = other.target;
}

ShrubberyCreationForm::~ShrubberyCreationForm(void)
{
	// do nothing
}

void ShrubberyCreationForm::ActiveForm(void) const
{
	std::ofstream out_file;

	out_file.open(this->target + "_shrubbery");
	if (!out_file)
	{
		std::cerr << "Faild to open the file" << std::endl;
		return ;
	}
	else
	{
		out_file << "             _-_             " << std::endl
				 << "          /~~   ~~\\          " << std::endl
			     << "       /~~         ~~\\       " << std::endl
				 << "      {               }      " << std::endl
				 << "       \\  _-     -_  /       " << std::endl
				 << "         ~  \\\\ //  ~         " << std::endl
				 << "      _- -   | | _- _        " << std::endl
			 	 << "       _ -   | |   -_        " << std::endl
			 	 << "            // \\\\            " << std::endl;
		out_file.close();
	}
}

ShrubberyCreationForm& ShrubberyCreationForm::operator = (const ShrubberyCreationForm& other)
{
	this->target = other.target;
	return (*this);
}