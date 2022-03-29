/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mannouao <mannouao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 07:06:27 by mannouao          #+#    #+#             */
/*   Updated: 2022/03/29 09:09:33 by mannouao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP

# define FIXED_HPP

# include <iostream>

class Fixed
{
	private:
		int			number;
		static int	bits;
	public:
		Fixed(void);
		Fixed(Fixed const &other);
		~Fixed(void);
		int		getRawBits(void) const;
		void	setRawBits(int const raw);
		void	operator=(Fixed const &other);
};

#endif