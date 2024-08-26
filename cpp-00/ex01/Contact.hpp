/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrousse <mbrousse@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 10:00:30 by mbrousse          #+#    #+#             */
/*   Updated: 2024/08/26 10:40:16 by mbrousse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>
#include <iomanip>
#include <cstdlib>

#include "Contact.cpp"

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::getline;

class Contact
{
	private:
		int		id;
		string	_last_name;
		string	_first_name;
		string	_nickname;
		string	_phone_number;
		string	_darkest_secret;
	public:
		Contact();
		~Contact();
		
}


#endif