/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mannouao <mannouao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 11:04:03 by mannouao          #+#    #+#             */
/*   Updated: 2022/03/21 09:49:16 by mannouao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"
	
class PhoneBook {

	private :
		Contact	contacts[8];
		
	public :
		int		number_of_contacts;
		void 	add(void);
		void 	search(void) const;
};

# endif