/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnantet <dnantet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/03 12:41:47 by dnantet           #+#    #+#             */
/*   Updated: 2026/04/10 11:50:13 by dnantet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{}

PhoneBook::~PhoneBook()
{}

void	PhoneBook::add_contact(Contact contact)
{
	this->contacts[contact_count % MAX_CONTACTS] = contact;
	if (contact_count != MAX_CONTACTS)
		contact_count += 1;
}
