/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnantet <dnantet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/03 12:41:47 by dnantet           #+#    #+#             */
/*   Updated: 2026/04/15 11:21:05 by dnantet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
	this->contact_count = 0;
}

PhoneBook::~PhoneBook()
{}

void	PhoneBook::add_contact(Contact contact)
{
	this->contacts[contact_count % MAX_CONTACTS] = contact;
	contact_count += 1;
}
