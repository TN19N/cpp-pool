/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mannouao <mannouao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/09 00:13:54 by mannouao          #+#    #+#             */
/*   Updated: 2022/04/09 14:50:10 by mannouao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// # include "Array.hpp"

// void ft_main()
// {
// 	Array<int> a(7);

// 	std::cout << "size : " << a.size() << std::endl;

// 	try
// 	{
// 		a[0] = 1337;
// 		a[6] = 42;
// 		a[1] = 55;
// 		a[4] = 777;
// 	}
// 	catch(const std::exception& e)
// 	{
// 		std::cerr << "out of Array range !!" << std::endl;
// 		return ;
// 	}
// 	for (unsigned int i = 0; i < a.size(); i++)
// 		std::cout << a[i] << std::endl;
	
// 	std::cout << std::endl << "********************" << std::endl << std::endl; 
	
// 	Array<int> *ptr = new Array<int>(a);

// 	std::cout << "size : " << ptr->size() << std::endl;

// 	for (unsigned int i = 0; i < ptr->size(); i++)
// 		std::cout << (*ptr)[i] << std::endl;
		
// 	delete ptr;
// }

// int main()
// {
// 	ft_main();
// 	//system("leaks ex");
// }

#include <iostream>
#include "Array.hpp"

#define MAX_VAL 750

void ft_main()
{
	 Array<int> numbers(MAX_VAL);
    int* mirror = new int[MAX_VAL];
    srand(time(NULL));
    for (int i = 0; i < MAX_VAL; i++)
    {
        const int value = rand();
        numbers[i] = value;
        mirror[i] = value;
    }
    //SCOPE
    {
        Array<int> tmp = numbers;
        Array<int> test(tmp);
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        if (mirror[i] != numbers[i])
        {
            std::cerr << "didn't save the same value!!" << std::endl;
            return ;
        }
    }
    try
    {
        numbers[-2] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        numbers[MAX_VAL] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        numbers[i] = rand();
    }
    delete [] mirror;//
}

int main(int, char**)
{
   	ft_main();
	//system("leaks ex");
    return 0;
}