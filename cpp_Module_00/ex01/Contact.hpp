/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mannouao <mannouao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 10:59:40 by mannouao          #+#    #+#             */
/*   Updated: 2022/03/10 09:22:28 by mannouao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef CONTACT_HPP

# define CONTACT_HPP

# include <cstring>
# include <iostream>

class Contact {

	private :
		std::string	first_name;
		std::string	last_name;
		std::string nickname;
		std::string phone_number;
		std::string	darkest_secret;
	public :
		std::string get_first_name(void) const;
		std::string get_last_name(void) const;
		std::string get_nickname(void) const;
		std::string get_phone_number(void) const;
		std::string get_darkest_secret(void) const;

		int			set_first_name(std::string str);
		int			set_last_name(std::string str);
		int			set_nickname(std::string str);
		int			set_phone_number(std::string str);
		int			set_darkest_secret(std::string str);
};

# endif