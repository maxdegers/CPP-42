/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrousse <mbrousse@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 17:01:58 by mbrousse          #+#    #+#             */
/*   Updated: 2024/09/18 17:12:11 by mbrousse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"

class Dog : public Animal{
public:
    Dog( std::string type );
	Dog( const Dog &src );
	Dog( void );
	Dog &operator=( const Dog &src );

	~Dog( void );

    void makeSound( void );
};

#endif