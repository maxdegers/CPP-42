/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrousse <mbrousse@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 09:53:22 by mbrousse          #+#    #+#             */
/*   Updated: 2024/09/25 12:01:45 by mbrousse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(void) : _type(""){
}
AMateria::AMateria(std::string const &type) : _type(type){
}
AMateria::AMateria(const AMateria &src) : _type(src._type){
}
AMateria &AMateria::operator=(const AMateria &src){
  if (this != &src){
	_type = src._type;
  }
  return (*this);
}


AMateria::~AMateria(void){
}


std::string const &AMateria::getType(void) const{
	return _type;
}
AMateria *AMateria::clone() const{
	return (AMateria *)this;
}
void AMateria::use(ICharacter &target){
  std::cout << "AMateria " << _type << " used on " << target.getName() << std::endl;
}