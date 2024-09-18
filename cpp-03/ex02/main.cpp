/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrousse <mbrousse@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 10:27:37 by mbrousse          #+#    #+#             */
/*   Updated: 2024/09/18 16:49:02 by mbrousse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main() {
	FragTrap Max("Max");
	ClapTrap Bobo("Bobo");
	ClapTrap Jon("Jon");
	ScavTrap David("David");

	Bobo.attack("Jon");
	David.attack("Bobo");
	Max.attack("David");
	
	Bobo.takeDamage(David.get_attackDamage());
	David.takeDamage(Max.get_attackDamage());
	Jon.takeDamage(Bobo.get_attackDamage());
	
	Bobo.beRepaired(10);
	
	David.guardGate();
	Max.highFivesGuys();
}