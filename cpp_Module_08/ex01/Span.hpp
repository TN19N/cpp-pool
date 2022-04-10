/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mannouao <mannouao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/09 23:06:20 by mannouao          #+#    #+#             */
/*   Updated: 2022/04/10 17:10:18 by mannouao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP

# define SPAN_HPP

# include <algorithm>
# include <vector>
# include <iostream>

class Span
{
	private:
		std::vector<int> vec;
		unsigned int len;
	public:
		Span(void);
		Span(const unsigned int& N);
		Span(const Span& other);
		~Span(void);

		void addNumber(int number);
		void addRangOfNumbers(std::vector<int>::iterator start, std::vector<int>::iterator end);

		unsigned int shortestSpan(void) const;
		unsigned int longestSpan(void) const;

		Span& operator = (const Span& other);

		class CustomizeExeption : public std::exception
		{
			private:
				std::string msg;
			public:
			CustomizeExeption(const std::string& msg) : msg(msg) {};
			~CustomizeExeption() throw() {};
			const char* what() const throw()
			{
				return (msg.c_str());
			}
		};
};

# endif