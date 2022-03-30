/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mannouao <mannouao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 07:06:27 by mannouao          #+#    #+#             */
/*   Updated: 2022/03/30 10:08:55 by mannouao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP

# define FIXED_HPP

# include <cmath>
# include <iostream>

class Fixed
{
	private:
		int					number;
		static int const	bits = 8;
	public:
		Fixed(void);
		Fixed(Fixed const &other);
		Fixed(int const number);
		Fixed(float const number);
		
		~Fixed(void);
		
		int		getRawBits(void) const;
		void	setRawBits(int const raw);
		
		float	toFloat(void) const;
		int		toInt(void) const;
		
		Fixed&	operator=(Fixed const &other);
};

std::ostream& operator<<(std::ostream& cout_1,const Fixed& fixed);

#endif