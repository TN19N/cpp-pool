/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mannouao <mannouao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/10 19:45:57 by mannouao          #+#    #+#             */
/*   Updated: 2022/04/10 22:39:48 by mannouao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP

# define MUTANTSTACK_HPP

# include <stack>

template<typename T>
class MutantStack : public std::stack<T>
{
	public:
		MutantStack() {};
		~MutantStack() {};
		MutantStack(const MutantStack& other) {*this = other;};
		MutantStack& operator = (const MutantStack* other)
		{
			std::stack<int>::operator=(other);
			return (*this);
		}
	
	public:
		typedef typename std::stack<T>::container_type::iterator iterator;
		typedef typename std::stack<T>::container_type::reverse_iterator reverse_iterator;
		typedef typename std::stack<T>::container_type::const_iterator const_iterator;
		typedef typename std::stack<T>::container_type::const_reverse_iterator const_reverse_iterator;

	public:
		iterator begin(void) { return (this->c.begin());}
		const_iterator begin(void) const { return (this->c.begin());}
		
		iterator end(void) { return (this->c.end());}
		const_iterator end(void) const { return (this->c.end());}

		reverse_iterator rbegin(void) { return (this->c.rbegin());}
		const_reverse_iterator rbegin(void) const { return (this->c.rbegin());}
		
		reverse_iterator rend(void) { return (this->c.rend());}
		const_reverse_iterator rend(void) const { return (this->c.rend());}
		
		const_iterator cbegin(void) const { return (this->c.cbegin());}
		const_iterator cend(void) const { return (this->c.cend());}
		const_reverse_iterator crbegin(void) const { return (this->c.crbegin());}
		const_reverse_iterator crend(void) const { return (this->c.crend());}
};

#endif