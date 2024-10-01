/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrousse <mbrousse@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 17:40:50 by mbrousse          #+#    #+#             */
/*   Updated: 2024/10/01 17:41:10 by mbrousse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
#define ICE_HPP

#include "AMateria.hpp"

class Ice : public AMateria
{
private:
public:
	Ice(void);
	Ice(const Ice &src);
	Ice &operator=(const Ice &src);

	~Ice();

	AMateria *clone() const;
	void use(ICharacter &target);
};

#endif // Ice_HPP