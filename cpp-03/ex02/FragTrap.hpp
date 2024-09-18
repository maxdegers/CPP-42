/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrousse <mbrousse@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 16:11:43 by mbrousse          #+#    #+#             */
/*   Updated: 2024/09/18 16:23:31 by mbrousse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap{
public:
	FragTrap(std::string name);
	FragTrap(const FragTrap &src);
	FragTrap(void);
	FragTrap &operator=(const FragTrap &src);
	
	~FragTrap(void);

	void		highFivesGuys();
	void attack(const std::string &target);
	// void beRepaired(unsigned int amount);
	// void takeDamage(unsigned int amount);
};


#endif