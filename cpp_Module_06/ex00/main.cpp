/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mannouao <mannouao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 23:57:56 by mannouao          #+#    #+#             */
/*   Updated: 2022/04/07 17:53:56 by mannouao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <climits>
# include <cmath>
# include <cctype>
# include <cstdlib>
# include <iostream>
# include <iomanip>

# define DOUBLE 1
# define CHAR 2

int find_type(char *str)
{
	char	*ptr;
	double _tmp;

	_tmp = std::strtod(str, &ptr);
	if ((ptr == &str[std::strlen(str)] || (*ptr == 'f' && str[0] != 'f' && ptr == &str[std::strlen(str) - 1])) && std::strlen(str) != 0)
		return (DOUBLE);
	else if (std::strlen(str) > 1)
		return (0);
	else
		return (CHAR);
}
int main(int ac, char *av[])
{
	char _char;
	int _int;
	float _float;
	double _double;
	int		type;

	if (ac != 2)
	{
		std::cout << "Wrong number of arguments !" << std::endl;
		return 1;
	}
	type = find_type(av[1]);
	if (type == CHAR)
	{
		_char = av[1][0];
		_int = static_cast<int> (av[1][0]);
		_float = static_cast<float> (av[1][0]);
		_double = static_cast<float> (av[1][0]);
	}
	else if (type == DOUBLE)
	{
		_double = std::strtod(av[1], NULL);
		if (!isnan(_double) && !isinf(_double))
		{
			if (_double >= CHAR_MIN && _double <= CHAR_MAX) 
				_char =  static_cast<char> (_double);
			if (_double >= INT_MIN && _double <= INT_MAX)
				_int = static_cast<int> (_double);
		}
		_float = static_cast<float> (_double);
	}
	else
	{
		std::cout << "it is impossible to convert the input to any type !" << std::endl;
		return (0);
	}

	// -----------------------------------

	std::cout << "char : ";
	if (!isnan(_double) && !isinf(_double) && _double >= CHAR_MIN && _double <= CHAR_MAX)
	{
		if (std::isprint(_char))
			std::cout << '\'' << _char << '\'';
		else
			std::cout << "Non displayable";
	}
	else
		std::cout << "impossible";
	std::cout << std::endl;

	// ------------------------------------

	std::cout << "int : ";
	if (!isnan(_double) && !isinf(_double) && _double >= INT_MIN && _double <= INT_MAX)
		std::cout << _int;
	else
		std::cout << "impossible";
	std::cout << std::endl;

	// -----------------------------------

	std::cout << "float : ";
	std::cout << _float << 'f';
	std::cout << std::endl;
	
	// ------------------------------------

	std::cout << "double : ";
	std::cout << _double;
	std::cout << std::endl;

	return (0);
}