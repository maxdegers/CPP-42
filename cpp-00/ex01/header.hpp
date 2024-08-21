/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrousse <mbrousse@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 13:28:57 by mbrousse          #+#    #+#             */
/*   Updated: 2024/08/21 17:11:23 by mbrousse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>


class Contact
{
    public:
        Contact() : last_name(""), first_name(""), nickname(""), phone_number(""), darkest_secret("") {}
        
        std::string last_name;
        std::string first_name;
        std::string nickname;
        std::string phone_number;
        std::string darkest_secret;
        
        void new_contact(){
            std::cout << "Contact First Name : " << std::endl;
            std::cin >> first_name;
            std::cout << "Contact Last Name : " << std::endl;
            std::cin >> last_name;
            std::cout << "Contact Nickname : " << std::endl;
            std::cin >> nickname;
            std::cout << "Contact Phone Number : " << std::endl;
            std::cin >> phone_number;
            std::cout << "Contact Darkest Secret : " << std::endl;
            std::cin >> darkest_secret;
        }
};

class PhoneBook
{
    private:
        std::size_t count;
        Contact *contacts;
        
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
        PhoneBook() : count(0), contacts(new Contact[8]){}
    
        void search(){
            std::cout << "     Index|First Name| Last Name|  Nickname" << std::endl;
            for (std::size_t i = 0; i < count ; i++)
            {
                std::cout <<  "----------";
                std::cout <<  "|";
                std::cout <<  columtext(contacts[i].first_name);
                std::cout <<  "|";
                std::cout <<  columtext(contacts[i].last_name);
                std::cout <<  "|";
                std::cout <<  columtext(contacts[i].nickname) << std::endl;
            }
        }

        void add(){
            if (count < 7)
            {
                contacts[count].new_contact();
                count++;
            }
            else
                std::cout << "Vous avez dega la limite de contracte !!!" << std::endl;
        }

};