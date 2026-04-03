/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnantet <dnantet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/03 12:34:05 by dnantet           #+#    #+#             */
/*   Updated: 2026/04/03 12:44:38 by dnantet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_H
# define CONTACT_H

# include <string>

class Contact
{
	private:
		std::string secret;

	public:
		std::string	first_name;
		std::string	last_name;
		std::string	nickname;
		std::string	number;

		void	set_secret(std::string str);
		Contact();
		~Contact();
};

#endif
