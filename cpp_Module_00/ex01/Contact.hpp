/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mannouao <mannouao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 10:59:40 by mannouao          #+#    #+#             */
/*   Updated: 2022/03/22 14:29:19 by mannouao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef CONTACT_HPP

# define CONTACT_HPP

# include <string>

class Contact {

	private :
		std::string	first_name;
		std::string	last_name;
		std::string nickname;
		std::string phone_number;
		std::string	darkest_secret;
	public :
		std::string	get_first_name(void) const;
		std::string	get_last_name(void) const;
		std::string	get_nickname(void) const;
		std::string	get_phone_number(void) const;
		std::string	get_darkest_secret(void) const;

		int			set_first_name(std::string const str);
		int			set_last_name(std::string const str);
		int			set_nickname(std::string const str);
		int			set_phone_number(std::string const str);
		int			set_darkest_secret(std::string const str);
};

# endif