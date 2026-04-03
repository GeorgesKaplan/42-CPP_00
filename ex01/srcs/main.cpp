/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnantet <dnantet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/02 13:00:21 by dnantet           #+#    #+#             */
/*   Updated: 2026/04/03 13:48:57 by dnantet          ###   ########.fr       */
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
	std::cout << "Available commands:\nADD -> Add a contact\nSEARCH -> Search for a specific contact\nEXIT -> Close phonebook\n" << std::endl;
}

int main(void)
{
	PhoneBook phonebook;

	display_commands();
	std::string input;
	while ((input = read_input()) != "EXIT")
	{
		if (input == "ADD"){
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
		if (input == "SEARCH"){
			std::cout << "Searching contacts..." << std::endl;

			for (int i = 0; i < phonebook.contact_count % MAX_CONTACTS; i++)
			{
				std::cout << std::right << std::setw(10) << i;
				std::cout << "|";
				std::cout << std::right << std::setw(10) << phonebook.contacts[i].first_name;
				std::cout << "|";
				std::cout << std::right << std::setw(10) << phonebook.contacts[i].last_name;
				std::cout << "|";
				std::cout << std::right << std::setw(10) << phonebook.contacts[i].nickname;
				std::cout << std::endl;
			}

			std::cout << "See info for contact number: ";
			input = read_input();
			if (std::stoi(input) < 0 || std::stoi(input) > phonebook.contact_count % MAX_CONTACTS)
			{
				// BUG: doesn't print?
				std::cout << "Inexistant contact, please enter a valid number: ";
			}
			else
			{
				std::cout << phonebook.contacts[stoi(input)].number << std::endl;
			}
		}
		// display_commands();
	}
	std::cout << "Closing phonebook." << std::endl;
	return (0);
}
