/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mannouao <mannouao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/09 23:08:48 by mannouao          #+#    #+#             */
/*   Updated: 2022/04/10 17:19:21 by mannouao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Span.hpp"

Span::Span(void)
{
	this->len = 0;
}

Span::Span(const unsigned int& N)
{
	this->len = N;
}

Span::Span(const Span& other)
{
	*this = other;
}

Span::~Span(void)
{
	// do nothing
}

void Span::addNumber(int number)
{
	if (this->len == 0)
		throw (Span::CustomizeExeption("No space for more elements !"));
	else
	{
		this->vec.push_back(number);
		this->len--;
	}
}

void Span::addRangOfNumbers(std::vector<int>::iterator start, std::vector<int>::iterator end)
{
	if (std::distance(start, end) > this->len)
		throw (Span::CustomizeExeption("No space for more elements !"));
	else
	{
		this->vec.insert(this->vec.end(), start, end);
		this->len -= std::distance(start, end);
	}
}

unsigned int Span::longestSpan(void) const
{
	if (this->vec.size() < 2)
		throw(Span::CustomizeExeption("can't get longest Spane from one number"));
	else
		return (std::labs(*std::min_element(this->vec.begin(), this->vec.end()) - *std::max_element(this->vec.begin(), this->vec.end())));
}

unsigned int Span::shortestSpan(void) const
{
	if (this->vec.size() < 2)
		throw(Span::CustomizeExeption("can't get Shortest Spane from one number"));
	else
	{
		std::vector<int> tmp(this->vec.begin(), this->vec.end());
		std::sort(tmp.begin(), tmp.end());
		unsigned int min_dest = std::labs(tmp[0] - tmp[1]);
		for (unsigned int i = 1; i + 1 < tmp.size(); i++)
			if (min_dest > std::labs(tmp[i] - tmp[i + 1]))
				min_dest = std::labs(tmp[i] - tmp[i + 1]);
		return (min_dest);
	}
}

Span& Span::operator = (const Span& other)
{
	vec.clear();
	this->len = other.len;
	vec.assign(other.vec.begin(), other.vec.end());
	return (*this);
}