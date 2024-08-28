/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrousse <mbrousse@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 10:00:43 by mbrousse          #+#    #+#             */
/*   Updated: 2024/08/28 13:07:06 by mbrousse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.class.hpp"

PhoneBook::PhoneBook(){
	this->count = 0;
}

PhoneBook::~PhoneBook(){
}

void	PhoneBook::printPhoneBook(){
	int		i;

	i = 0;
    std::cout << "┌----------┬------ SUMMARY ------┬----------┐" << std::endl;
    std::cout << "|     Index|First Name| Last Name|  Nickname|" << std::endl;
	while (i < 8)
	{
		this->_contactList[i].displayLine(i);
		i++;
	}
	std::cout << "└----------┴----------┴----------┴----------┘" << std::endl;
}

void	PhoneBook::search(){
	std::string input;
	std::size_t	index;
	
	this->printPhoneBook();
    if (this->count == 0){
		std::cout << "Your directory is empty !"<< std::endl;
		return;
	}
	std::cout << "Enter index: ";
	while (true){
		input = this->_contactList[0].getText();
		if (this->_contactList[0].onlyDigits(input) == true){
			std::istringstream(input) >> index;
			if (index > this->count || index > 8)
				std::cout << "The Index is too big !!!" << std::endl;
			else if (index < 1)
				std::cout << "The Index is too small !!!" << std::endl;
			else
				break;
		}
		else
			std::cout << "The Index is only Digits !!" << std::endl;
		std::cout << "Enter index: " << std::endl;
	}
	this->_contactList[index - 1].displayContact();
}

void	PhoneBook::add(){
	this->_contactList[this->count % 8].newContact();
	this->count++;
}