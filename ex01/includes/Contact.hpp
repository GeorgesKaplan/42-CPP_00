/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnantet <dnantet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/03 12:34:05 by dnantet           #+#    #+#             */
/*   Updated: 2026/04/12 13:47:17 by dnantet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <string>

class Contact
{
	private:
		std::string	first_name;
		std::string	last_name;
		std::string	nickname;
		std::string	number;
		std::string secret;

	public:
		void		set_fname(std::string str);
		std::string	get_fname();
		void		set_lname(std::string str);
		std::string	get_lname();
		void		set_nname(std::string str);
		std::string	get_nname();
		void		set_number(std::string str);
		std::string	get_number();
		void		set_secret(std::string str);
		std::string	get_secret();
		Contact();
		~Contact();
};

#endif
