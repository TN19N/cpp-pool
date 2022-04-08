/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mannouao <mannouao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 20:56:50 by mannouao          #+#    #+#             */
/*   Updated: 2022/04/08 13:52:00 by mannouao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>
# include <ctime>

class Base
{
	public:
		virtual ~Base(void) {};	
};

class A : public Base
{	
};

class B : public Base
{	
};

class C : public Base
{	
};

Base *generate(void)
{
	srand(time(NULL));

	if (rand() % 3 == 2)
		return (new A());
	else if (rand() % 3)
		return (new B());
	else
		return (new C());
}

void identify(Base* p)
{
	if (dynamic_cast<A*> (p))
		std::cout << "A" << std::endl;
	else if (dynamic_cast<B*> (p))
		std::cout << "B" << std::endl;
	else if (dynamic_cast<C*> (p))
		std::cout << "C" << std::endl;
	else
		std::cout << "Base" << std::endl; 
}

void identify(Base& p)
{
	try
	{
		(void)dynamic_cast<A&> (p);
		std::cout << "A" << std::endl;
	}
	catch (const std::exception& e)
	{
		try
		{
			(void)dynamic_cast<B&> (p);
			std::cout << "B" << std::endl;
		}
		catch(const std::exception& e)
		{
			try
			{
				(void)dynamic_cast<C&> (p);
				std::cout << "C" << std::endl;
			}
			catch(const std::exception& e)
			{
				std::cout << "Base" << std::endl;
			}
		}
	}
}

int main()
{
	Base *abc = generate();

	identify(abc);
	identify(*abc);

	delete abc;
}