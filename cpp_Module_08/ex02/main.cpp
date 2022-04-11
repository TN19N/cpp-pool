/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mannouao <mannouao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/10 19:51:18 by mannouao          #+#    #+#             */
/*   Updated: 2022/04/10 23:26:31 by mannouao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <list>
# include <iostream>
# include "MutantStack.hpp"

int main()
{
	MutantStack<int> mstack;

	mstack.push(5);
	mstack.push(17);
	std::cout << mstack.top() << std::endl;
	mstack.pop();
	std::cout << mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	std::stack<int> s(mstack);

	std::cout << "- - - - - - - - - - - - - - - -" << std::endl;
	mstack.push(-4);
	mstack.push(0);
	mstack.push(88);
	std::sort(mstack.begin(), mstack.end());
	it = mstack.begin();
	ite = mstack.end();
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}

	std::cout << std::endl << "***************************************************" << std::endl << std::endl;

	std::list<int> mlist;

	mlist.push_back(5);
	mlist.push_back(17);
	std::cout << mlist.back() << std::endl;
	mlist.pop_back();
	std::cout << mlist.size() << std::endl;
	mlist.push_back(3);
	mlist.push_back(5);
	mlist.push_back(737);
	std::list<int>::iterator _it = mlist.begin();
	std::list<int>::iterator _ite = mlist.end();
	++_it;
	--_it;
	while (_it != _ite)
	{
		std::cout << *_it << std::endl;
		++_it;
	}
	
	std::cout << "- - - - - - - - - - - - - - - -" << std::endl;
	mlist.push_back(-4);
	mlist.push_back(0);
	mlist.push_back(88);
	mlist.sort();
	_it = mlist.begin();
	_ite = mlist.end();
	while (_it != _ite)
	{
		std::cout << *_it << std::endl;
		++_it;
	}
	return 0;
}