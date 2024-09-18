/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrousse <mbrousse@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 16:54:34 by mbrousse          #+#    #+#             */
/*   Updated: 2024/09/18 17:14:31 by mbrousse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <string>
#include <iostream>

class Animal
{
protected:
    std::string _type = "Poney";
	std::string _sond = "";
public:
    Animal( std::string type );
	Animal( const Animal &src );
	Animal( void );
	Animal &operator=( const Animal &src );

	~Animal( void );

	void makeSound( void );
};

#endif