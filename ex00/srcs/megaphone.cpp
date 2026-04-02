/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnantet <dnantet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/02 16:37:52 by dnantet           #+#    #+#             */
/*   Updated: 2026/04/02 16:54:35 by dnantet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <cctype>

int main(int ac, char *av[])
{
	std::string noise = "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	std::string voice = "";

	if (ac < 2){
		std::cout << noise << std::endl;
		return (0);
	}
	for (int j = 1; j < ac; j++){
		voice = av[j];
		for (size_t i = 0; i < voice.size(); i++){
			voice[i] = std::toupper(voice[i]);
		}
		std::cout << voice;
	}
	std::cout << std::endl;
}
