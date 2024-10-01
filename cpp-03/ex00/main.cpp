/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrousse <mbrousse@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 10:27:37 by mbrousse          #+#    #+#             */
/*   Updated: 2024/10/01 08:58:08 by mbrousse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void) {
  ClapTrap BOBO("BOBO");
  ClapTrap MIKE("MIKE");

  BOBO.set_attackDamage(1);
  while (BOBO.get_energyPoints() > 0) {
    BOBO.attack("MIKE");
    MIKE.takeDamage(BOBO.get_attackDamage());
    MIKE.beRepaired(1);
  }
  MIKE.set_energyPoints(10);
  MIKE.set_attackDamage(100000);
  MIKE.attack("BOBO");
  BOBO.takeDamage(MIKE.get_attackDamage());
  return (0);
}