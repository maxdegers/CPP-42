/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrousse <mbrousse@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 18:14:15 by mbrousse          #+#    #+#             */
/*   Updated: 2024/09/27 18:18:31 by mbrousse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "AMateria.hpp"
#include "ICharacter.hpp"
#include <iostream>

class Character{
private:
	std::string _name;
	AMateria *_inventory[4];
public:
	Character( void );
	Character(const std::string &name);
	Character( const Character &src );
	Character &operator=( const Character &src );
	
	~Character();

	void equip(AMateria *m);
	void unequip(int idx);
	void use(int idx, ICharacter &target);
	
	std::string const &getName() const;
};
#endif // Character_HPP