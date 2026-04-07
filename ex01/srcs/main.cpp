/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnantet <dnantet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/02 13:00:21 by dnantet           #+#    #+#             */
/*   Updated: 2026/04/07 15:55:21 by dnantet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AwesomePhonebook.hpp"

std::string read_input(void)
{
	std::string input;
	std::getline(std::cin, input);
	return (input);
}

void display_commands()
{
	std::cout << "Available commands:\nADD\t-> Add a contact\nSEARCH\t-> Search for a specific contact\nEXIT\t-> Close phonebook\n" << std::endl;
}

void display_contacts(PhoneBook phonebook)
{
	for (int i = 0; i < (phonebook.contact_count % MAX_CONTACTS); i++)
	{
		Contact contact = phonebook.contacts[i];

		std::cout << std::right << std::setw(10) << i;
		std::cout << "|";

		std::string f_name = contact.first_name;
		if (f_name.size() > 10)
		{
			f_name.resize(10);
			f_name[9] = '.';
		}
		std::cout << std::right << std::setw(10) << f_name;
		std::cout << "|";

		std::string l_name = contact.last_name;
		if (l_name.size() > 10)
		{
			l_name.resize(10);
			l_name[9] = '.';
		}
		std::cout << std::right << std::setw(10) << l_name;
		std::cout << "|";

		std::string n_name = contact.nickname;
		if (n_name.size() > 10)
		{
			n_name.resize(10);
			n_name[9] = '.';
		}
		std::cout << std::right << std::setw(10) << n_name;
		std::cout << std::endl;
	}
}

void display_contact_info(Contact contact)
{
	std::cout << std::endl;
	std::cout << "First name:   " << contact.first_name << std::endl;
	std::cout << "Last name:    " << contact.last_name << std::endl;
	std::cout << "Nickname:     " << contact.nickname << std::endl;
	std::cout << "Phone number: " << contact.number << std::endl;
	std::cout << "Secret:       " << contact.get_secret() << std::endl;
}

int main(void)
{
	PhoneBook phonebook;

	display_commands();
	std::string input;
	while ((input = read_input()) != "EXIT")
	{
		if (input == "ADD")
		{
			Contact contact;

			std::cout << "Adding new contact..." << std::endl;

			std::cout << "Enter first name:" << std::endl;
			input = read_input();
			contact.first_name = input;

			std::cout << "Enter last name:" << std::endl;
			input = read_input();
			contact.last_name = input;

			std::cout << "Enter nickname:" << std::endl;
			input = read_input();
			contact.nickname = input;

			std::cout << "Enter phone number:" << std::endl;
			input = read_input();
			contact.number = input;

			std::cout << "Enter secret:" << std::endl;
			input = read_input();
			contact.set_secret(input);

			phonebook.add_contact(contact);
		}
		if (input == "SEARCH")
		{
			std::cout << "Searching contacts..." << std::endl;
			if (phonebook.contact_count < 1)
			{
				std::cout << "No contacts found." << std::endl;
				continue ;
			}
			display_contacts(phonebook);

			std::cout << "See info for contact number: ";
			input = read_input();

			if (isdigit(input[0]) && input[1] == '\0')
			{
				int index = std::stoi(input);
				if (index >= phonebook.contact_count % MAX_CONTACTS)
				{
					std::cout << "Inexistant contact, please enter a number between 0 and " << phonebook.contact_count % MAX_CONTACTS - 1 << ": ";
				}
				else
				{
					display_contact_info(phonebook.contacts[index]);
				}
			}
			else
			{
				std::cout << "Invalid index." << std::endl;
			}
		}
	}
	std::cout << "Closing phonebook." << std::endl;
	return (0);
}
