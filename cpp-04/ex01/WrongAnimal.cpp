/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrousse <mbrousse@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 10:13:40 by mbrousse          #+#    #+#             */
/*   Updated: 2024/09/24 10:14:35 by mbrousse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal( const WrongAnimal &src ) :
						_type(src._type){
  std::cout << "WrongAnimal copy constructor called" << std::endl;
}
WrongAnimal::WrongAnimal( void ) : _type("WrongDefault"){
	std::cout << "WrongAnimal default constructor called" << std::endl;
}
WrongAnimal& WrongAnimal::operator=( const WrongAnimal &src ){
	if (this != &src)
	{
		_type = src._type;
	}
	std::cout << "WrongAnimal copy constructor called" << std::endl;
	return *this;
}



WrongAnimal::~WrongAnimal( void ){
	std::cout << "WrongAnimal destroyed" << std::endl;
}

void WrongAnimal::makeSound(void) const{
	std::cout << "**Random WrongAnimal noises**" << std::endl;
}

std::string WrongAnimal::getType(void) const{
	return _type;
}
