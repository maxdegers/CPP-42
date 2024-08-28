/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrousse <mbrousse@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 10:00:36 by mbrousse          #+#    #+#             */
/*   Updated: 2024/08/28 12:52:07 by mbrousse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.class.hpp"

Contact::Contact(){
	this->_first_name = "";
    this->_last_name = "";
    this->_nickname = "";
    this->_phone_number = "";
    this->_darkest_secret = "";
}

Contact::~Contact(){
}

std::string Contact::columtext(std::string str){
	
	std::string block(10,' ');
	if (str.length() > 10)
	{
		str = str.replace(9,1,".");
		block = str.substr(0,10);
		return block;
	}
	else
	{
		std::size_t length = str.length();
		block = block.replace(10 - length,length,str);
		return block;
	}
}

void    Contact::displayLine(size_t index){
	std::cout << "|         " << (index + 1);
	std::cout <<  "|";
	std::cout <<  columtext(this->_first_name);
	std::cout <<  "|";
	std::cout <<  columtext(this->_last_name);
	std::cout <<  "|";
	std::cout <<  columtext(this->_nickname);
	std::cout <<  "|" << std::endl;
}

void	Contact::newContact(){
	std::cout << "Contact First Name : " << std::endl;
	this->_first_name = this->getText();
	
	std::cout << "Contact Last Name : " << std::endl;
	this->_last_name = this->getText();
	
	std::cout << "Contact Nickname : " << std::endl;
	this->_nickname = this->getText();

	std::cout << "Contact Phone Number : " << std::endl;
	while (true){
		this->_phone_number = this->getText();
		if (this->onlyDigits(this->_phone_number) == true)
			break;
		std::cout << "The Phone Number is only Digits !!" << std::endl;
		std::cout << "Contact Phone Number : " << std::endl;
	}
	
	std::cout << "Contact Darkest Secret : " << std::endl;
	this->_darkest_secret = this->getText();
}

std::string	Contact::getText(){
	std::string str = "";

	while (str == "")
	{
		std::getline(std::cin, str);
		if (std::cin.eof())
		{
			std::cout << std::endl;
			exit(1);
		}
	}
	return str;
}

bool	Contact::onlyDigits(std::string str){

	for (size_t i = 0; i < str.length() ; i++)
	{
		if (isdigit(str[i]) == false)
			return(false);
	}
	return true;
}

void    Contact::displayContact()
{
    std::cout << "CONTACT [" << this->id + 1 << "]" << std::endl;
    std::cout << "First name = " << this->_first_name << std::endl;
    std::cout << "Last name = " << this->_last_name << std::endl;
    std::cout << "Nick name = " << this->_nickname << std::endl;
    std::cout << "Phone Number = " << this->_phone_number << std::endl;
    std::cout << "Darkest Secret = " << this->_darkest_secret << std::endl;
}