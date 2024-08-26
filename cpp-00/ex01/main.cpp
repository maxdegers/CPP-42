/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrousse <mbrousse@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 13:41:43 by mbrousse          #+#    #+#             */
/*   Updated: 2024/08/26 09:54:07 by mbrousse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.hpp"

int main()
{
	PhoneBook book;
	std::string text = "";
	while (true)
	{
		std::cout << "The program only accepts ADD, SEARCH and EXIT: " << std::endl;
		std::getline(std::cin, text);
		if (std::cin.eof())
		{
			std::cout << std::endl;
			return 0;
		}
		if (text == "EXIT")
			break;
		if (text == "SEARCH")
			book.search();
		if (text == "ADD")
			book.add();
	}
	return 0;
}
