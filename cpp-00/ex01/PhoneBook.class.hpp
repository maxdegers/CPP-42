/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrousse <mbrousse@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 10:37:31 by mbrousse          #+#    #+#             */
/*   Updated: 2024/08/28 10:28:37 by mbrousse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_CLASS_HPP
#define PHONEBOOK_CLASS_HPP

#include <sstream>
#include <iostream>
#include <iomanip>

#include "Contact.class.hpp"

class PhoneBook
{
	private:
		Contact	_contactList[8];
		std::size_t count;
		std::string columtext(std::string text);
	
	public:
		PhoneBook();
		~PhoneBook();
		void	printPhoneBook();
		void	search();
		void 	add();
};

#endif