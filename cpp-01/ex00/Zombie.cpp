/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrousse <mbrousse@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 14:08:03 by mbrousse          #+#    #+#             */
/*   Updated: 2024/09/04 09:56:43 by mbrousse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie:: Zombie(std::string name) : _name(name){
}

Zombie::~ Zombie(void){
    std::cout << this->_name << " has been destroyed" << std::endl;
}

/**
 * @brief 
 * Print name of the Zombie.
 */
void    Zombie::announce(){
    std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}