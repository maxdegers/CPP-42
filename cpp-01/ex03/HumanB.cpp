/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrousse <mbrousse@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 11:21:32 by mbrousse          #+#    #+#             */
/*   Updated: 2024/09/05 12:00:53 by mbrousse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB( std::string name ) : _name(name), _weapon(NULL){
}

HumanB::~HumanB( void ){
}

void    HumanB::attack( void ){
	std::cout << this->_name << " attacks with their ";
    if (this->_weapon == NULL)
        std::cout << "hand."<< std::endl;
    else
	    std::cout << this->_weapon->getType() << std::endl;
}

void    HumanB::setWeapon( Weapon &weapon){
    this->_weapon = &weapon;
}