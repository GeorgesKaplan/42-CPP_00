/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnantet <dnantet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/02 13:00:21 by dnantet           #+#    #+#             */
/*   Updated: 2026/04/03 12:10:30 by dnantet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

std::string read_input(void)
{
	std::string input;
	std::getline(std::cin, input);
	return (input);
}

void display_commands()
{
	std::cout << "Available commands:\nADD -> Add a contact\nSEARCH -> Search for a specific contact\nEXIT -> Close phonebook" << std::endl;
}

int main(void)
{
	PhoneBook phonebook;
	int contact_count = 0;

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
			std::cout << "First name: " << contact.first_name << std::endl;

			std::cout << "Enter last name:" << std::endl;
			input = read_input();
			contact.last_name = input;
			std::cout << "Last name: " << contact.last_name << std::endl;

			std::cout << "Enter nickname:" << std::endl;
			input = read_input();
			contact.nickname = input;
			std::cout << "Nickname: " << contact.nickname << std::endl;

			std::cout << "Enter phone number:" << std::endl;
			input = read_input();
			contact.number = input;
			std::cout << "Phone number: " << contact.number << std::endl;

			std::cout << "Enter secret:" << std::endl;
			input = read_input();
			contact.set_secret(input);
			std::cout << "Secret cannot be displayed. " << std::endl;

			contact_count += 1;
		}
		if (input == "SEARCH"){
			std::cout << "Searching contact..." << std::endl;
		}
	}
	std::cout << "Closing phonebook." << std::endl;
	return (0);
}
