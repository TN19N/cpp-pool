/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mannouao <mannouao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/02 23:44:47 by mannouao          #+#    #+#             */
/*   Updated: 2022/04/05 00:55:15 by mannouao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Cat.hpp"
# include "Dog.hpp"
# include "Animal.hpp"

int main()
{
	Animal *animals[10];

	for (int i = 0; i < 10; i++)
	{
		if (i % 2)
			animals[i] = new Dog();
		else
			animals[i] = new Cat();
	}
	
	for (int i = 0; i < 10; i++)
		animals[i]->makeSound();
	for (int i = 0; i < 10; i++)
		delete animals[i];

	std::cout << std::endl << "******************" << std::endl << std::endl;

	Dog h;
	{
		Dog f(h);
	}
}