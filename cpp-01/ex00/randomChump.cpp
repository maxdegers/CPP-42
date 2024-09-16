/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrousse <mbrousse@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 14:22:01 by mbrousse          #+#    #+#             */
/*   Updated: 2024/09/16 13:02:07 by mbrousse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

/**
 * @brief 
 * @param name 
 * 
 * It creates a zombie, name it, and the zombie announces itself
 */
void randomChump( std::string name ){
    Zombie zombie(name);
    zombie.announce();
}