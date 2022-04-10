/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mannouao <mannouao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/09 15:01:19 by mannouao          #+#    #+#             */
/*   Updated: 2022/04/10 15:06:37 by mannouao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef EASYFIND_HPP

# define EASYFIND_HPP

# include <string>
# include <algorithm>

class NotFindExeption : public std::exception
{
	public:
		const char* what() const throw()
		{
			return ("element not find !");
		}
};

template <typename T>
int easyfind(const T& to_serach, int to_find)
{
	typename T::const_iterator iter;

	iter = std::find(to_serach.begin(), to_serach.end(), to_find);
	if (iter != to_serach.end())
		return (*iter);
	else
		throw(NotFindExeption());
}

#endif