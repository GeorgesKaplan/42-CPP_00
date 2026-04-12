/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnantet <dnantet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/02 12:34:40 by dnantet           #+#    #+#             */
/*   Updated: 2026/04/12 13:47:22 by dnantet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"

# define MAX_CONTACTS 8

class PhoneBook
{
	public:
		int		contact_count = 0;
		Contact	contacts[MAX_CONTACTS];

	void	add_contact(Contact contact);
	PhoneBook();
	~PhoneBook();
};

#endif
