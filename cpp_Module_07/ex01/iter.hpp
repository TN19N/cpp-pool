/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mannouao <mannouao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 15:28:12 by mannouao          #+#    #+#             */
/*   Updated: 2022/04/09 14:12:26 by mannouao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP

# define ITER_HPP


template<typename T>
void iter(T *array, int len, void (*f)(const T&))
{
	if (array)
		for (int i = 0; i < len; i++)
			f(array[i]);
}


# endif