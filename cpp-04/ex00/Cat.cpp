/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrousse <mbrousse@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 11:13:17 by mbrousse          #+#    #+#             */
/*   Updated: 2024/09/19 11:15:12 by mbrousse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat( std::string type ){
    _type = type;
    _sond = "« Meow » « Meow » « Meow »";
	std::cout << "Cat default constructor called" << std::endl;
}

Cat::Cat( const Cat &src ) : Animal(src){
    _type = src._type;
    _sond = "« Meow » « Meow » « Meow »";
  std::cout << "Cat copy constructor called" << std::endl;
}
Cat::Cat( void ){
    _sond = "« Meow » « Meow » « Meow »";
	std::cout << "Cat default constructor called" << std::endl;
}
Cat& Cat::operator=( const Cat &src ){
	if (this != &src)
	{
        _sond = "« Meow » « Meow » « Meow »";
		_type = src._type;
	}
	std::cout << "Cat copy constructor called" << std::endl;
	return *this;
}



Cat::~Cat( void ){
	std::cout << "Cat destroyed" << std::endl;
}