/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrousse <mbrousse@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 13:28:57 by mbrousse          #+#    #+#             */
/*   Updated: 2024/08/26 10:03:39 by mbrousse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>



class Contact
{
	private:
	
	
	public:
		Contact() : last_name(""), first_name(""), nickname(""), phone_number(""), darkest_secret("") {}
		
		std::string last_name;
		std::string first_name;
		std::string nickname;
		std::string phone_number;
		std::string darkest_secret;
		
		void new_contact(){
			std::cout << "Contact First Name : " << std::endl;
			while (first_name == "")
			{
				std::getline(std::cin, first_name);
				if (std::cin.eof())
				{
					std::cout << std::endl;
					return ;
				}
			}
			std::cout << "Contact Last Name : " << std::endl;
			while (last_name == "")
			{
				std::getline(std::cin, last_name);
				if (std::cin.eof())
				{
					std::cout << std::endl;
					return ;
				}
			}
			std::cout << "Contact Nickname : " << std::endl;
			while (nickname == "")
			{
				std::getline(std::cin, nickname);
				if (std::cin.eof())
				{
					std::cout << std::endl;
					return ;
				}
			}
			std::cout << "Contact Phone Number : " << std::endl;
			while (phone_number == "")
			{
				std::getline(std::cin, phone_number);
				if (std::cin.eof())
				{
					std::cout << std::endl;
					return ;
				}
			}
			std::cout << "Contact Darkest Secret : " << std::endl;
			while (darkest_secret == "")
			{
				std::getline(std::cin, darkest_secret);
				if (std::cin.eof())
				{
				std::cout << std::endl;
				return ;
				}
			}
		}
};

class PhoneBook
{
	private:
		std::size_t count;
		Contact contacts[8];
		
		std::string columtext(std::string text){
			std::string block(10,' ');
			if (text.length() > 10)
			{
				text = text.replace(9,1,".");
				block = text.substr(0,10);
				return block;
			}
			else
			{
				std::size_t length = text.length();
				block = block.replace(10 - length,length,text);
				return block;
			}
		}
	public:
		PhoneBook() : count(0), contacts(){} //TODO CHECK IF NEW IS ALLOAWD
	
		void search(){
			std::cout << "     Index|First Name| Last Name|  Nickname" << std::endl;
			for (std::size_t i = 0; i < count ; i++)
			{
				std::cout << "         " << i + 1;
				std::cout <<  "|";
				std::cout <<  columtext(contacts[i].first_name);
				std::cout <<  "|";
				std::cout <<  columtext(contacts[i].last_name);
				std::cout <<  "|";
				std::cout <<  columtext(contacts[i].nickname) << std::endl;
			}
			std::cout << "Enter the index of the contact to display: ";
			std::string input;
			std::getline(std::cin, input);
			if (std::cin.eof())
			{
				std::cout << std::endl;
				return ;
			}
			// if (input == "") // TODO finich the serche section for index
			// {
				
			// }
		}

		void add(){
			if (count < 8)
			{
				contacts[count].new_contact();
				count++;
			}
			else
				std::cout << "Vous avez dega la limite de contracte !!!" << std::endl;
		}

};