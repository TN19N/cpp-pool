/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mannouao <mannouao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 23:01:52 by mannouao          #+#    #+#             */
/*   Updated: 2022/04/06 01:50:32 by mannouao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP

# define FORM_HPP

# include "Bureaucrat.hpp"
# include <iostream>
# include <string>

class Bureaucrat;

class Form
{
	private:
		const std::string name;
		bool		is_sign;
		const int req_sign;
		const int req_exec;
	public:
		Form(void);
		Form(const std::string& name, const int& req_sign, const int& req_exec);
		Form(const Form& other);
		~Form(void);

		Form& operator = (const Form& other);

		const std::string& getName(void) const;
		const bool& getIsSign(void) const;
		const int& getReqSign(void) const;
		const int& getReqExec(void) const;

		void beSigned(const Bureaucrat& bur);

		class GradeTooHighException : public std::exception
		{
			const char* what() const throw()
			{
				return ("Grade is Too High");
			}
		};
		
		class GradeTooLowException : public std::exception
		{
			const char* what() const throw()
			{
				return ("Grade is Too Low");
			}
		};
};

std::ostream&	operator << (std::ostream& _cout, const Form& other);

#endif