/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnantet <dnantet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/02 16:37:52 by dnantet           #+#    #+#             */
/*   Updated: 2026/04/02 16:43:41 by dnantet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <cctype>

int main(int ac, char *av[])
{
	std::string noise = "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	std::string voice = "";

	if (ac < 1){
		std::cout << noise << std::endl;
		return (0);
	}
}
