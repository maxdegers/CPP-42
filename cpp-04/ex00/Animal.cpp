/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrousse <mbrousse@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 16:58:00 by mbrousse          #+#    #+#             */
/*   Updated: 2024/09/19 11:03:13 by mbrousse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal( std::string type ) : 
						_type(type){
	std::cout << "Animal default constructor called" << std::endl;
}

Animal::Animal( const Animal &src ) :
						_type(src._type){
  std::cout << "Animal copy constructor called" << std::endl;
}
Animal::Animal( void ){
	std::cout << "Animal default constructor called" << std::endl;
}
Animal& Animal::operator=( const Animal &src ){
	if (this != &src)
	{
		_type = src._type;
	}
	std::cout << "Animal copy constructor called" << std::endl;
	return *this;
}



Animal::~Animal( void ){
	std::cout << "Animal destroyed" << std::endl;
}

void 	Animal::makeSound( void ){
	std::cout << _sond << std::endl;
}