/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrousse <mbrousse@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 10:37:31 by mbrousse          #+#    #+#             */
/*   Updated: 2024/08/26 10:42:57 by mbrousse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <sstream>
#include <iostream>
#include <iomanip>

#include "Contact.hpp"

class PhoneBook
{
	private:
		Contact	_contactlist[8];
	public:
		PhoneBook();
		~PhoneBook();
		
		
};

#endif