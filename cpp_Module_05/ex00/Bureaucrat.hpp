/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mannouao <mannouao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 14:09:51 by mannouao          #+#    #+#             */
/*   Updated: 2022/04/09 22:40:20 by mannouao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREACRAT_HPP

# define BUREACRAT_HPP

# include <iostream>
# include <string>


class Bureaucrat
{
	private:
		const std::string name;
		int		  grade;
	public:
		Bureaucrat(void);
		Bureaucrat(const std::string& name, const int grade);
		Bureaucrat(const Bureaucrat& other);
		~Bureaucrat(void);

		Bureaucrat& operator = (const Bureaucrat& other);

		const std::string& getName(void) const;
		const int& getGrade(void) const;

		void	incrementGrade(void);
		void	decrementGrade(void);

		class GradeTooHighException : public std::exception
		{
			public:
				const char* what() const throw()
				{
					return ("Grade is Too High");
				}
		};
		
		class GradeTooLowException : public std::exception
		{
			public:
				const char* what() const throw()
				{
					return ("Grade is Too Low");
				}
		};
};

std::ostream&	operator << (std::ostream& _cout, const Bureaucrat& other);

#endif