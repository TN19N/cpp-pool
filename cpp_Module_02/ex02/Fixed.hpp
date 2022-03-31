/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mannouao <mannouao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 07:06:27 by mannouao          #+#    #+#             */
/*   Updated: 2022/03/31 09:52:02 by mannouao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP

# define FIXED_HPP

# include <cmath>
# include <iostream>

class Fixed
{
	private:
		int					raw;
		static int const	bits = 8;
	public:
		Fixed(void);
		Fixed(const Fixed& other);
		Fixed(int const number);
		Fixed(float const number);
		
		~Fixed(void);
		
		int		getRawBits(void) const;
		void	setRawBits(int const raw);
		
		float	toFloat(void) const;
		int		toInt(void) const;
		
		bool	operator>(const Fixed& other) const;
		bool	operator<(const Fixed& other) const;
		bool	operator>=(const Fixed& other) const;
		bool	operator<=(const Fixed& other) const;
		bool	operator==(const Fixed& other) const;
		bool	operator!=(const Fixed& other) const;
		
		Fixed	operator+(const Fixed& other);
		Fixed	operator-(const Fixed& other);
		Fixed	operator*(const Fixed& other);
		Fixed	operator/(const Fixed& other);
		
		Fixed&	operator++(void);
		Fixed	operator++(int);
		
		Fixed&	operator--(void);
		Fixed	operator--(int);

		static const Fixed&	min(Fixed& fix_1, Fixed& fix_2);
		static const Fixed&	min(const Fixed& fix_1, const Fixed& fix_2);

		static const Fixed&	max(Fixed& fix_1, Fixed& fix_2);
		static const Fixed&	max(const Fixed& fix_1, const Fixed& fix_2);
		
		Fixed&	operator=(const Fixed& other);
};

std::ostream& operator<<(std::ostream& cout_1,const Fixed& fixed);

#endif