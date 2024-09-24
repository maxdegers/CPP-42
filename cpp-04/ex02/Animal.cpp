/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrousse <mbrousse@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 16:58:00 by mbrousse          #+#    #+#             */
/*   Updated: 2024/09/24 11:48:10 by mbrousse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal( const Animal &src ) :
						_type(src._type){
  std::cout << "Animal copy constructor called" << std::endl;
}
Animal::Animal( void ) : _type("Default"){
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

// void Animal::makeSound(void) const{
// 	std::cout << "**Random Animal noises**" << std::endl;
// }

std::string Animal::getType(void) const{
	return _type;
}
