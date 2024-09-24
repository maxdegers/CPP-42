/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrousse <mbrousse@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 11:07:09 by mbrousse          #+#    #+#             */
/*   Updated: 2024/09/24 11:09:38 by mbrousse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog( void ){
	_type = "Dog";
	_brain = new Brain();
	std::cout << "Dog default constructor called" << std::endl;
}
Dog::Dog( const Dog &src ) : Animal(src){
    _type = src._type;
	_brain = new Brain(*src._brain);
  std::cout << "Dog copy constructor called" << std::endl;
}
Dog& Dog::operator=( const Dog &src ){
	if (this != &src)
	{
		delete _brain;
		_brain = new Brain(*src._brain);
		_type = src._type;
	}
	std::cout << "Dog copy constructor called" << std::endl;
	return *this;
}



Dog::~Dog( void ){
	delete _brain;
	std::cout << "Dog destroyed" << std::endl;
}



void Dog::makeSound(void) const{
	std::cout << "« ouaf » « ouaf » « ouaf »" << std::endl;
}