/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrousse <mbrousse@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 09:45:09 by mbrousse          #+#    #+#             */
/*   Updated: 2024/09/25 10:13:25 by mbrousse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include "ICharacter.hpp"
#include <iostream>

class AMateria{
private:
	std::string _type;
public:
	AMateria( void );
	AMateria(std::string const &type);
	AMateria( const AMateria &src );
	AMateria &operator=( const AMateria &src );
	
	virtual ~AMateria();
	
	virtual AMateria *clone() const = 0;
	virtual void use(ICharacter &target);

	std::string const &getType(void) const;
};


#endif