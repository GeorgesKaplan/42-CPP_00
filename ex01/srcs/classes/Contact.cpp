/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnantet <dnantet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/03 12:54:37 by dnantet           #+#    #+#             */
/*   Updated: 2026/04/07 15:50:31 by dnantet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact()
{}

Contact::~Contact()
{}

void	Contact::set_secret(std::string str)
{
	this->secret = str;
}

std::string Contact::get_secret()
{
	return (this->secret);
}
