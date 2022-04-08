/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mannouao <mannouao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 17:56:18 by mannouao          #+#    #+#             */
/*   Updated: 2022/04/08 13:48:40 by mannouao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>

struct Data
{
	unsigned char a;
	unsigned char b;
	unsigned char c;
	unsigned char d;
	
	bool operator == (const Data& other)
	{
		if (
			 this->a == other.a &&
			 this->b == other.b &&
			 this->c == other.c &&
			 this->d == other.d
		   )
		   return (true);
		else
			return (false);
	}
};


uintptr_t serialize(Data* ptr)
{
	return (*reinterpret_cast<uintptr_t*> (ptr));
}

Data* deserialize(uintptr_t raw)
{
	uintptr_t *ptr = new uintptr_t(raw);
	return (reinterpret_cast<Data*> (ptr));
}

int main()
{
	Data *o_d = new Data();
	
	uintptr_t tmp = serialize(o_d);
	Data *t_d = deserialize(tmp);
	
	if (*t_d == *o_d)
		std::cout << "equal" << std::endl;
	else
		std::cout << "not equal" << std::endl;

	// Data *d = deserialize(1337);

	// std::cout << (int)d->a << " - " << (int)d->b << " - " << (int)d->c << " - " << (int)d->d << std::endl;
	
	// uintptr_t tmp = serialize(d);

	// std::cout << " > " << tmp << " < " << std::endl;

	delete t_d;
	delete o_d;
	//delete d;
}