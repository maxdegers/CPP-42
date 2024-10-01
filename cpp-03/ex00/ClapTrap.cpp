/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrousse <mbrousse@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 10:04:44 by mbrousse          #+#    #+#             */
/*   Updated: 2024/10/01 08:56:55 by mbrousse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap( std::string name ) : 
						_name(name), 
						_hitPoints(10), 
						_energyPoints(10), 
						_attackDamage(0){
	std::cout << "ClapTrap default constructor called" << std::endl;
}

ClapTrap::ClapTrap( const ClapTrap &src ) :
						_name(src._name), 
						_hitPoints(src._hitPoints),
						_energyPoints(src._energyPoints),
						_attackDamage(src._attackDamage){
  std::cout << "ClapTrap copy constructor called" << std::endl;
}
ClapTrap::ClapTrap( void ) :
						_name("Unknown ClapTrap"),
						_hitPoints(10), 
						_energyPoints(10), 
						_attackDamage(0){
	std::cout << "ClapTrap default constructor called" << std::endl;
}
ClapTrap& ClapTrap::operator=( const ClapTrap &src ){
	if (this != &src)
	{
		_name = src._name;
		_hitPoints = src._hitPoints;
		_energyPoints = src._energyPoints;
		_attackDamage = src._attackDamage;
	}
	std::cout << "ClapTrap copy constructor called" << std::endl;
	return *this;
}



ClapTrap::~ClapTrap( void ){
	std::cout << "ClapTrap destroyed" << std::endl;
}



std::string ClapTrap::get_name( void ) const{
	return (_name);
}

void ClapTrap::set_name( const std::string name ){
	_name = name;
}

int ClapTrap::get_hitPoints( void ) const{
	return (_hitPoints);
}

void ClapTrap::set_hitPoints( const int hitPoints ){
	_hitPoints = hitPoints;
}

int ClapTrap::get_energyPoints( void ) const{
	return (_energyPoints);
}

void ClapTrap::set_energyPoints( const int energyPoints ){
	_energyPoints = energyPoints;
}

int ClapTrap::get_attackDamage( void ) const{
	return (_attackDamage);
}

void ClapTrap::set_attackDamage( const int attackDamage ){
	_attackDamage = attackDamage;
}


void ClapTrap::attack(const std::string &target) {
  if (this->_energyPoints > 0) {
    this->_energyPoints -= 1;
    std::cout << GREEN "ClapTrap :" NC<< BLUE << this->_name << NC << RED " Attacks --> " BLUE  << target
              << RED ", causing [" NC  << this->_attackDamage << RED "] POINTS OF DAMAGE !!!" NC
              << std::endl;
  } else {
    std::cout << GREEN "ClapTrap :" BLUE << this->_name << NC
              << YELLOW " tries to attack but is too tired :<" NC << std::endl;
  }
}

void ClapTrap::takeDamage(unsigned int amount) {
  this->_hitPoints -= amount;
  if (this->_hitPoints > 0)
    std::cout << GREEN "ClapTrap :" BLUE << this->_name << NC << RED " got hit and took [" NC << amount
              << RED "] points of damage" NC << std::endl;
  else
    std::cout << GREEN "ClapTrap :" RED << this->_name << NC << RED " got hit by " << amount
              <<  " points of damage and died !!!"  NC << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount) {
  if (this->_energyPoints > 0) {
    this->_energyPoints -= 1;
    this->_hitPoints += amount;
    std::cout << GREEN "ClapTrap :" BLUE << this->_name << NC << YELLOW " repaired itself and gained ["
             NC << amount << YELLOW "] energy points back" NC << std::endl;
  } else {
    std::cout << GREEN "ClapTrap :" BLUE << this->_name << NC
              << YELLOW " tries to repair itself but is too tired" NC << std::endl;
  }
}