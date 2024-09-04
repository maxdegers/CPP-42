/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrousse <mbrousse@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 18:47:19 by mbrousse          #+#    #+#             */
/*   Updated: 2024/09/04 19:11:46 by mbrousse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name ){
    Zombie	*newHorde = new Zombie[N];
	for (size_t i = 0; (int)i < N; ++i) {
		newHorde[i].setName(name);
	}
	return newHorde;
}