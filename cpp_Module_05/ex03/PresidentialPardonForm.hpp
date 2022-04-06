/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mannouao <mannouao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 14:18:10 by mannouao          #+#    #+#             */
/*   Updated: 2022/04/06 15:59:07 by mannouao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP

#define PRESIDENTIALPARDONFORM_HPP

# include <string>
# include "Form.hpp"

class PresidentialPardonForm : public Form
{
	private:
		std::string target;
	public:
		PresidentialPardonForm(void);
		PresidentialPardonForm(const std::string& target);
		PresidentialPardonForm(const PresidentialPardonForm& other);
		~PresidentialPardonForm(void);

		void ActiveForm(void) const;

		PresidentialPardonForm& operator = (const PresidentialPardonForm& other);
};

#endif