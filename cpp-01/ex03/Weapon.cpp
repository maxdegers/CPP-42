/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrousse <mbrousse@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 10:37:48 by mbrousse          #+#    #+#             */
/*   Updated: 2024/09/05 11:02:44 by mbrousse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon( std::string type ) : _type(type){
}

Weapon::~Weapon(){
}

/**
 * @brief 
 * Get the curent value of _type.
 * @return std::string
 */
std::string	Weapon::getType( void ){
	return this->_type;
}

/**
 * @brief 
 * @param type 
 * 
 * Change the curent value of _type to the param string.
 */
void Weapon::setType( std::string type ){
	this->_type = type;
}