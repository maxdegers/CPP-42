/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrousse <mbrousse@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 17:49:32 by mbrousse          #+#    #+#             */
/*   Updated: 2024/10/01 17:50:38 by mbrousse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice(void)
{
    _type = "ice";
}
Ice::Ice(const Ice &src)
{
    _type = "ice";
    *this = src;
}

Ice &Ice::operator=(const Ice &src)
{
    if (this == &src)
        return (*this);
    return (*this);
}

Ice::~Ice(void) {}

AMateria *Ice::clone() const
{
    return (new Ice(*this));
}

void Ice::use(ICharacter &target)
{
    std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}