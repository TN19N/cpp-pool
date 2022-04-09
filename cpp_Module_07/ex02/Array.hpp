/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mannouao <mannouao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 23:36:33 by mannouao          #+#    #+#             */
/*   Updated: 2022/04/09 14:43:00 by mannouao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP

# define ARRAY_HPP

# include <iostream>

template <typename T>
class Array
{
	private:
		T *array;
		unsigned int len;
	public:
		Array(void);
		Array(const unsigned int& N);
		Array(Array& other);
		~Array(void);

		unsigned int size(void) const;

		Array& operator = (Array& other);
		T& operator [] (const unsigned int& index);
};

template<typename T>
Array<T>::Array(void)
{
	this->array = new T[0];
	this->len = 0;
}

template<typename T>
Array<T>::Array(const unsigned int& N)
{
	this->array = new T[N];
	this->len = N;
	for (unsigned int i = 0; i < N; i++)
		this->array[i] = T();
}

template<typename T>
Array<T>::Array(Array& other)
{
	this->array = new T[other.size()];
	this->len = other.size();
	*this = other;
}

template<typename T>
Array<T>::~Array(void)
{
	delete[] this->array;
}

template<typename T>
unsigned int Array<T>::size(void) const
{
	return (this->len);
}

template<typename T>
Array<T>& Array<T>::operator = (Array& other)
{
	if (this->len != other.size())
	{
		if (this->array)
			delete[] this->array;
		this->array = new T[other.size()];
		this->len = other.size();
	}
	for (unsigned int i = 0; i < this->len; i++)
		this->array[i] = other[i];
	return (*this);
}

template<typename T>
T& Array<T>::operator [] (const unsigned int& index)
{
	if (index >= this->size())
		throw (std::exception());
	else
		return (this->array[index]);
}

#endif