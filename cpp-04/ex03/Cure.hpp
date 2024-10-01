/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrousse <mbrousse@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 08:17:00 by mbrousse          #+#    #+#             */
/*   Updated: 2024/10/01 12:34:35 by mbrousse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
#define CURE_HPP

#include "AMateria.hpp"

class Cure : public AMateria
{
private:
public:
	Cure(void);
	Cure(const Cure &src);
	Cure &operator=(const Cure &src);

	~Cure();

	AMateria *clone() const;
	void use(ICharacter &target);
};

#endif // Cure_HPP