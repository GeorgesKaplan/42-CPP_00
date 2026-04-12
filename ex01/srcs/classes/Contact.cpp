/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnantet <dnantet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/03 12:54:37 by dnantet           #+#    #+#             */
/*   Updated: 2026/04/12 12:45:24 by dnantet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact()
{}

Contact::~Contact()
{}

void		Contact::set_fname(std::string str)
{
	this->first_name = str;
}

std::string	Contact::get_fname()
{
	return (this->first_name);
}

void		Contact::set_lname(std::string str)
{
	this->last_name = str;
}

std::string	Contact::get_lname()
{
	return (this->last_name);
}

void		Contact::set_nname(std::string str)
{
	this->nickname = str;
}

std::string	Contact::get_nname()
{
	return (this->nickname);
}

void		Contact::set_number(std::string str)
{
	this->number = str;
}

std::string	Contact::get_number()
{
	return (this->number);
}

void		Contact::set_secret(std::string str)
{
	this->secret = str;
}

std::string Contact::get_secret()
{
	return (this->secret);
}
