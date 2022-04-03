/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mannouao <mannouao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/02 23:44:47 by mannouao          #+#    #+#             */
/*   Updated: 2022/04/03 13:37:01 by mannouao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Cat.hpp"
# include "Dog.hpp"
# include "Animal.hpp"
# include "WrongAnimal.hpp"
# include "WrongCat.hpp"

int main()
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound! 
	j->makeSound();
    meta->makeSound();
	delete meta;
	delete j;
	delete i;

	std::cout << std::endl << "***************************" << std::endl << std::endl;
	
	const WrongAnimal* ptr = new WrongCat();
	
	std::cout << ptr->getType() << std::endl;
	ptr->makeSound();
	delete ptr;
	return 0;
}