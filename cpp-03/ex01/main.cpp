/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrousse <mbrousse@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 10:27:37 by mbrousse          #+#    #+#             */
/*   Updated: 2024/09/18 16:35:25 by mbrousse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main(void) {
  ClapTrap Mike("Mike");
  ClapTrap Jo("Jo");
  ScavTrap Rog("Rog");

  Rog.guardGate();

  Jo.attack("Rog");
  Mike.attack("Rog");

  Rog.takeDamage(Jo.get_attackDamage());
  Rog.takeDamage(Mike.get_attackDamage());

  Rog.beRepaired(20);
  
  Rog.attack("Jo");
  Jo.takeDamage(Rog.get_attackDamage());
  Rog.attack("Mike");
  Mike.takeDamage(Rog.get_attackDamage());

  return (0);
}