/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrousse <mbrousse@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 11:07:09 by mbrousse          #+#    #+#             */
/*   Updated: 2024/09/24 10:00:49 by mbrousse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog( const Dog &src ) : Animal(src){
    _type = src._type;
  std::cout << "Dog copy constructor called" << std::endl;
}
Dog::Dog( void ) : Animal(){
	_type = "Dog";
	std::cout << "Dog default constructor called" << std::endl;
}
Dog& Dog::operator=( const Dog &src ){
	if (this != &src)
	{
		_type = src._type;
	}
	std::cout << "Dog copy constructor called" << std::endl;
	return *this;
}



Dog::~Dog( void ){
	std::cout << "Dog destroyed" << std::endl;
}



void Dog::makeSound(void) const{
	std::cout << "« ouaf » « ouaf » « ouaf »" << std::endl;
}