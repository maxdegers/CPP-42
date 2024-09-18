/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrousse <mbrousse@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 10:58:42 by mbrousse          #+#    #+#             */
/*   Updated: 2024/09/18 14:04:56 by mbrousse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap{
public:
	ScavTrap(std::string name);
	ScavTrap(const ScavTrap &src);
	ScavTrap(void);
	ScavTrap &operator=(const ScavTrap &src);
	
	~ScavTrap(void);

	void guardGate(void);

	void attack(const std::string &target);
	void beRepaired(unsigned int amount);
	void takeDamage(unsigned int amount);
};

#endif
