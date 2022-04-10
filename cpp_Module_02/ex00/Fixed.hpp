/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mannouao <mannouao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 07:06:27 by mannouao          #+#    #+#             */
/*   Updated: 2022/04/10 16:55:06 by mannouao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP

# define FIXED_HPP

# include <iostream>

class Fixed
{
	sp.addNumber(11);:
		int					raw;
		static int const	bits = 8;
	public:
		Fixed(void);
		Fixed(Fixed const &other);
		~Fixed(void);
		Fixed&	operator=(Fixed const &other);
		
		int		getRawBits(void) const;
		void	setRawBits(int const raw);
};

#endif