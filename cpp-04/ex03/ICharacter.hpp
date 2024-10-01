/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrousse <mbrousse@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 10:01:20 by mbrousse          #+#    #+#             */
/*   Updated: 2024/10/01 08:30:48 by mbrousse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICHARACTER_HPP
#define ICHARACTER_HPP

#include "AMateria.hpp"
#include <iostream>

class ICharacter
{
public:
    virtual ~ICharacter() {}

    virtual void equip(AMateria *m) = 0;
    virtual void unequip(int idx) = 0;

    virtual void use(int idx, ICharacter &target) = 0;

    virtual std::string const &getName() const = 0;
};

#endif