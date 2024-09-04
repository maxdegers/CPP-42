/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrousse <mbrousse@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 14:21:58 by mbrousse          #+#    #+#             */
/*   Updated: 2024/09/04 09:35:57 by mbrousse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

/**
 * @brief 
 * @param name 
 * 
 * It creates a zombie, name it, and return it so you can use it outside of the function
scope.
 * @return Zombie* 
 */
Zombie* newZombie( std::string name ){
    Zombie  *newZombie = new Zombie(name);
    return newZombie;
}