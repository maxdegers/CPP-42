/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrousse <mbrousse@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 16:54:34 by mbrousse          #+#    #+#             */
/*   Updated: 2024/09/24 10:09:14 by mbrousse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <string>
#include <iostream>

class Animal
{
	protected:
		std::string _type;
		
	public:
		Animal( const Animal &src );
		Animal( void );
		Animal &operator=( const Animal &src );

		virtual ~Animal(void);

		virtual void makeSound(void) const;
		
  		std::string getType(void) const;
};

#endif