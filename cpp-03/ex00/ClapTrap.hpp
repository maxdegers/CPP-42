/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrousse <mbrousse@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 11:43:18 by mbrousse          #+#    #+#             */
/*   Updated: 2024/09/16 11:45:59 by mbrousse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <string>
#include <iostream>

class ClapTrap {
private:
  std::string _name;
  int _hitPoints;
  int _energyPoints;
  int _attackDamage;

public:
  void attack( const std::string &target );
  void takeDamage( unsigned int amount );
  void beRepaired( unsigned int amount );

  ClapTrap( std::string name );
  ClapTrap( const ClapTrap &src );
  ClapTrap( void );
  ClapTrap &operator=( const ClapTrap &src );

  ~ClapTrap( void );
  
  std::string get_name( void ) const;
  void set_name( const std::string name );
  int get_hitPoints( void ) const;
  void set_hitPoints( const int hitPoints );
  int get_energyPoints( void ) const;
  void set_energyPoints( const int energyPoints );
  int get_attackDamage( void ) const;
  void set_attackDamage( const int attackDamage );
};

#endif