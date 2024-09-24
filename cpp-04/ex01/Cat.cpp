/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrousse <mbrousse@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 11:13:17 by mbrousse          #+#    #+#             */
/*   Updated: 2024/09/24 11:09:34 by mbrousse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat( void ){
	_type = "Cat";
	_brain = new Brain();
	std::cout << "Cat default constructor called" << std::endl;
}
Cat::Cat( const Cat &src ) : Animal(src){
    _type = src._type;
	_brain = new Brain(*src._brain);
  std::cout << "Cat copy constructor called" << std::endl;
}
Cat& Cat::operator=( const Cat &src ){
	if (this != &src)
	{
		delete _brain;
		_brain = new Brain(*src._brain);
		_type = src._type;
	}
	std::cout << "Cat copy constructor called" << std::endl;
	return *this;
}



Cat::~Cat( void ){
	delete _brain;
	std::cout << "Cat destroyed" << std::endl;
}

void Cat::makeSound(void) const{
	std::cout << "« Meow » « Meow » « Meow »" << std::endl;
}