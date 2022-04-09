/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mannouao <mannouao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 14:29:15 by mannouao          #+#    #+#             */
/*   Updated: 2022/04/08 18:08:56 by mannouao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef WHATEVER_HPP

# define WHATEVER_HPP

template<typename T>
void swap(T& entity_1, T& entity_2)
{
	T tmp;

	tmp = entity_1;
	entity_1 = entity_2;
	entity_2 = tmp;
}

template<typename T>
const T& min(const T& entity_1, const T& entity_2)
{
	return (entity_1 < entity_2 ? entity_1 : entity_2);
}

template<typename T>
const T& max(const T& entity_1, const T& entity_2)
{
	return (entity_1 > entity_2 ? entity_1 : entity_2);
}

#endif