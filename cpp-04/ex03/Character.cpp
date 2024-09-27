/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrousse <mbrousse@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 18:18:42 by mbrousse          #+#    #+#             */
/*   Updated: 2024/09/27 18:26:16 by mbrousse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(void) : _name("Unknown Character"){
  for (int i = 0; i < 4; i++)
	this->_inventory[i] = NULL;
}
Character::Character(const std::string &name) : _name(name){
  for (int i = 0; i < 4; i++)
	this->_inventory[i] = NULL;
}
Character::Character(const Character &src) : _name(src._name){
  for (int i = 0; i < 4; i++){
	delete this->_inventory[i];
	this->_inventory[i] = src._inventory[i];
  }
}
Character &Character::operator=(const Character &src){
  if (this != &src){
	for (int i = 0; i < 4; i++){
	  delete this->_inventory[i];
	  this->_inventory[i] = src._inventory[i];
	}
	_name = src._name;
  }
  return (*this);
}


Character::~Character(void){
  for (int i = 0; i < 4; i++){
	if (this->_inventory[i])
	  delete this->_inventory[i];
  }
}


void Character::equip(AMateria *m){
  	for (int i = 0; i < 4; i++){
		if (this->_inventory[i] == NULL){
	  		this->_inventory[i] = m;
	  	return;
	}
  	}
  	std::cout << this->getName()
			<< " doesn't have any space left in his inventory" << std::endl;
}
void Character::unequip(int idx){
  	if (this->_inventory[idx] == NULL){
		std::cout << this->getName() << " dropped some rock off his pockets" << std::endl;
		return;
  	}
  	else{
		std::cout << this->getName() << " dropped "
			  << this->_inventory[idx]->getType() << " on the floor" << std::endl;
		this->_inventory[idx] = NULL;
	}
}
void Character::use(int idx, ICharacter &target){
  	if (this->_inventory[idx]){
		this->_inventory[idx]->use(target);
  	}
  	else{
	std::cout << this->getName() << " doesn't have any item here" << std::endl;
  	}
}


std::string const &Character::getName(void) const{
	return (_name);
}
