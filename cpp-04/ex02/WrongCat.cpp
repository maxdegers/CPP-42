/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrousse <mbrousse@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 10:16:36 by mbrousse          #+#    #+#             */
/*   Updated: 2024/09/24 10:17:17 by mbrousse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat( const WrongCat &src ) : WrongAnimal(src){
    _type = src._type;
  std::cout << "WrongCat copy constructor called" << std::endl;
}
WrongCat::WrongCat( void ) : WrongAnimal(){
	_type = "WrongCat";
	std::cout << "WrongCat default constructor called" << std::endl;
}
WrongCat& WrongCat::operator=( const WrongCat &src ){
	if (this != &src)
		_type = src._type;
	std::cout << "WrongCat copy constructor called" << std::endl;
	return *this;
}



WrongCat::~WrongCat( void ){
	std::cout << "WrongCat destroyed" << std::endl;
}

void WrongCat::makeSound(void) const{
	std::cout << "« BEEEH » « BEEEH » « BEEEH »" << std::endl;
}