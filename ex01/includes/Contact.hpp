/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnantet <dnantet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/03 12:34:05 by dnantet           #+#    #+#             */
/*   Updated: 2026/04/10 12:15:48 by dnantet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef CONTACT_H
# define CONTACT_H

# include <string>

class Contact
{
	private:
		std::string secret;

	public:
		// int			index;
		std::string	first_name;
		std::string	last_name;
		std::string	nickname;
		std::string	number;

		void		set_secret(std::string str);
		std::string	get_secret();
		Contact();
		~Contact();
};

#endif
