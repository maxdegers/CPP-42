/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrousse <mbrousse@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 10:58:15 by mbrousse          #+#    #+#             */
/*   Updated: 2024/09/18 16:47:55 by mbrousse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap( std::string name ){
	_name = name;
	_hitPoints = 100;
	_energyPoints = 50;
	_attackDamage = 20;
	std::cout << "ScavTrap default constructor called" << std::endl;
}

ScavTrap::ScavTrap( const ScavTrap &src ) : ClapTrap(src){
	_name = src._name;
	_hitPoints = src._hitPoints;
	_energyPoints = src._energyPoints;
	_attackDamage = src._attackDamage;
  	std::cout << "ScavTrap copy constructor called" << std::endl;
}
ScavTrap::ScavTrap( void ){
	_hitPoints = 100;
	_energyPoints = 50;
	_attackDamage = 20;
	std::cout << "ScavTrap default constructor called" << std::endl;
}
ScavTrap& ScavTrap::operator=( const ScavTrap &src ){
	if (this != &src)
	{
		_name = src._name;
		_hitPoints = src._hitPoints;
		_energyPoints = src._energyPoints;
		_attackDamage = src._attackDamage;
	}
	std::cout << "ScavTrap copy constructor called" << std::endl;
	return *this;
}



ScavTrap::~ScavTrap( void ){
	std::cout << "ScavTrap destroyed" << std::endl;
}


void ScavTrap::guardGate(void) {
  std::cout << CYAN "ScavTrap :" NC << BLUE << this->_name << GREEN " is now in gatekeeper mode" NC
            << std::endl;
}

void ScavTrap::attack(const std::string &target) {
	if (this->_energyPoints > 0) {
		this->_energyPoints -= 1;
		std::cout << CYAN "ScavTrap :" NC<< BLUE << this->_name << NC << RED " Attacks --> " BLUE  << target
				<< RED ", causing [" NC  << this->_attackDamage << RED "] POINTS OF DAMAGE !!!" NC
				<< std::endl;
	} else {
		std::cout << CYAN "ScavTrap :" BLUE << this->_name << NC
				<< YELLOW " tries to attack but is too tired :<" NC << std::endl;
	}
}

// void ScavTrap::takeDamage( unsigned int amount ) {
//   this->_hitPoints -= amount;
//   if (this->_hitPoints > 0)
//     std::cout << CYAN "ScavTrap :" BLUE << this->_name << NC << RED " got hit and took [" NC << amount
//               << RED "] points of damage" NC << std::endl;
//   else
//     std::cout << CYAN "ScavTrap :" RED << this->_name << NC << RED " got hit by " << amount
//               <<  " points of damage and died !!!"  NC << std::endl;
// }

// void ScavTrap::beRepaired(unsigned int amount) {
//   if (this->_energyPoints > 0) {
//     this->_energyPoints -= 1;
//     this->_hitPoints += amount;
//     std::cout << CYAN "ScavTrap :" BLUE << this->_name << NC << YELLOW " repaired itself and gained ["
//              NC << amount << YELLOW "] energy points back" NC << std::endl;
//   } else {
//     std::cout << CYAN "ScavTrap :" BLUE << this->_name << NC
//               << YELLOW " tries to repair itself but is too tired" NC << std::endl;
//   }
// }