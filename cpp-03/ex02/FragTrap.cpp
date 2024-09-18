/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrousse <mbrousse@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 16:11:47 by mbrousse          #+#    #+#             */
/*   Updated: 2024/09/18 16:49:53 by mbrousse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap( std::string name ){
	_name = name;
	_hitPoints = 100;
	_energyPoints = 100;
	_attackDamage = 30;
	std::cout << "FragTrap default constructor called" << std::endl;
}

FragTrap::FragTrap( const FragTrap &src ) : ClapTrap(src){
	_name = src._name;
	_hitPoints = src._hitPoints;
	_energyPoints = src._energyPoints;
	_attackDamage = src._attackDamage;
  	std::cout << "FragTrap copy constructor called" << std::endl;
}
FragTrap::FragTrap( void ){
	_hitPoints = 100;
	_energyPoints = 100;
	_attackDamage = 30;
	std::cout << "FragTrap default constructor called" << std::endl;
}
FragTrap& FragTrap::operator=( const FragTrap &src ){
	if (this != &src)
	{
		_name = src._name;
		_hitPoints = src._hitPoints;
		_energyPoints = src._energyPoints;
		_attackDamage = src._attackDamage;
	}
	std::cout << "FragTrap copy constructor called" << std::endl;
	return *this;
}



FragTrap::~FragTrap( void ){
	std::cout << "FragTrap destroyed" << std::endl;
}


void	FragTrap::highFivesGuys()
{
	std::cout << CYAN "FragTrap :" NC BLUE << this->_name << GREEN " wants a nice high five !" NC << std::endl;
}

void FragTrap::attack(const std::string &target) {
	if (this->_energyPoints > 0) {
		this->_energyPoints -= 1;
		std::cout << CYAN "FragTrap :" NC<< BLUE << this->_name << NC << RED " Attacks --> " BLUE  << target
				<< RED ", causing [" NC  << this->_attackDamage << RED "] POINTS OF DAMAGE !!!" NC
				<< std::endl;
	} else {
		std::cout << CYAN "FragTrap :" BLUE << this->_name << NC
				<< YELLOW " tries to attack but is too tired :<" NC << std::endl;
	}
}

// void FragTrap::takeDamage( unsigned int amount ) {
//   this->_hitPoints -= amount;
//   if (this->_hitPoints > 0)
//     std::cout << CYAN "FragTrap :" BLUE << this->_name << NC << RED " got hit and took [" NC << amount
//               << RED "] points of damage" NC << std::endl;
//   else
//     std::cout << CYAN "FragTrap :" RED << this->_name << NC << RED " got hit by " << amount
//               <<  " points of damage and died !!!"  NC << std::endl;
// }

// void FragTrap::beRepaired(unsigned int amount) {
//   if (this->_energyPoints > 0) {
//     this->_energyPoints -= 1;
//     this->_hitPoints += amount;
//     std::cout << CYAN "FragTrap :" BLUE << this->_name << NC << YELLOW " repaired itself and gained ["
//              NC << amount << YELLOW "] energy points back" NC << std::endl;
//   } else {
//     std::cout << CYAN "FragTrap :" BLUE << this->_name << NC
//               << YELLOW " tries to repair itself but is too tired" NC << std::endl;
//   }
// }