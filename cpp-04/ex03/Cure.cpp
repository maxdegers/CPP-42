/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrousse <mbrousse@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 17:40:36 by mbrousse          #+#    #+#             */
/*   Updated: 2024/10/01 17:49:12 by mbrousse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure(void)
{
    _type = "cure";
}
Cure::Cure(const Cure &src)
{
    _type = "cure";
    *this = src;
}

Cure &Cure::operator=(const Cure &src)
{
    if (this == &src)
        return (*this);
    return (*this);
}

Cure::~Cure(void) {}

AMateria *Cure::clone() const
{
    return (new Cure(*this));
}

void Cure::use(ICharacter &target)
{
    std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}