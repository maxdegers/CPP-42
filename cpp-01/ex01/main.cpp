/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrousse <mbrousse@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 14:21:43 by mbrousse          #+#    #+#             */
/*   Updated: 2024/09/04 19:10:07 by mbrousse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main() {
    int size = 10;
	
	Zombie	*Horde = zombieHorde(size, "Mr Bobo");
	
	for (int i = 0; i < size; ++i) { 
		Horde[i].announce();
	}
	delete []Horde;

    return 0;
}