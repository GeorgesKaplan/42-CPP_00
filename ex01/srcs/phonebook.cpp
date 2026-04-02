/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnantet <dnantet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/02 13:00:21 by dnantet           #+#    #+#             */
/*   Updated: 2026/04/02 16:10:33 by dnantet          ###   ########.fr       */
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
	display_commands();

	std::string input;
	while ((input = read_input()) != "EXIT")
	{
		if (input == "ADD"){
			std::cout << "Adding new contact..." << std::endl;

			std::cout << "Enter first name:" << std::endl;
			input = read_input();
			std::cout << "First name: " << input << std::endl;

			std::cout << "Enter last name:" << std::endl;
			input = read_input();
			std::cout << "Last name: " << input << std::endl;

			std::cout << "Enter nickname:" << std::endl;
			input = read_input();
			std::cout << "Nickname: " << input << std::endl;

			std::cout << "Enter phone number:" << std::endl;
			input = read_input();
			std::cout << "Phone number: " << input << std::endl;

			std::cout << "Enter secret:" << std::endl;
			input = read_input();
			std::cout << "Secret: " << input << std::endl;
		}
		if (input == "SEARCH"){
			std::cout << "Searching contact..." << std::endl;
		}
	}
	std::cout << "Closing phonebook." << std::endl;
	return (0);
}
