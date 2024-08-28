/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrousse <mbrousse@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 10:00:30 by mbrousse          #+#    #+#             */
/*   Updated: 2024/08/28 12:46:10 by mbrousse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_CLASS_HPP
#define CONTACT_CLASS_HPP

#include <iostream>
#include <iomanip>
#include <cstdlib>

class Contact
{
	private:
		
		int		id;
		std::string	_last_name;
		std::string	_first_name;
		std::string	_nickname;
		std::string	_phone_number;
		std::string	_darkest_secret;
		
	public:
		Contact();
		~Contact();

		std::string	columtext(std::string str);
		void		displayLine(size_t index);
		void 		newContact();
		std::string	getText();
		bool		onlyDigits(std::string str);
		void		displayContact();
};


#endif