/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrousse <mbrousse@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 14:21:43 by mbrousse          #+#    #+#             */
/*   Updated: 2024/09/04 10:04:32 by mbrousse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main() {
    // Crée un zombie sur le tas
    Zombie* heapZombie = newZombie("Jeff");
    heapZombie->announce();
    
    // Crée un zombie sur la pile et l'annonce immédiatement puis Libère la mémoire allouée.
    randomChump("Momo");

    // Libère la mémoire allouée pour le zombie sur le tas
    delete heapZombie;
    return 0;
}