/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrousse <mbrousse@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 14:10:31 by mbrousse          #+#    #+#             */
/*   Updated: 2024/09/04 09:45:40 by mbrousse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>

class Zombie
{
private:
	std::string _name;

public:
	Zombie( std::string name );
	~Zombie( void );

	void announce(void);
};

Zombie* newZombie( std::string name );
void randomChump( std::string name );


#endif