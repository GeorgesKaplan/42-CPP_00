/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnantet <dnantet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/02 12:34:40 by dnantet           #+#    #+#             */
/*   Updated: 2026/04/02 16:12:43 by dnantet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
# define PHONEBOOK_H

# include <iostream>
# include <fstream>
# include <string>

class Contact
{
	public:
		int			index;
		std::string	first_name;
		std::string	last_name;
		std::string	nickname;
		std::string	number;

		void	set_index(std::string str){
			this->secret = str;
		}

	private:
		std::string secret;
};

class PhoneBook
{
	public:
		int		count;
		Contact contacts[8];
};

#endif
