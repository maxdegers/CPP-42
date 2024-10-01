/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrousse <mbrousse@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 10:25:22 by mbrousse          #+#    #+#             */
/*   Updated: 2024/10/01 09:24:00 by mbrousse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain( void ){
	for (int i = 0; i < 100; i++)
		this->_ideas[i] = "*Idea*";
	std::cout << "Brain default constructor called" << std::endl;
}
Brain::Brain( const Brain &src ){
	for (int i = 0; i < 100; i++)
		this->_ideas[i] = src._ideas[i];
  	std::cout << "Brain copy constructor called" << std::endl;
}
Brain& Brain::operator=( const Brain &src ){
	if (this != &src)
	{
		for (int i = 0; i < 100; i++)
			_ideas[i] = src._ideas[i];
	}
	std::cout << "Brain copy constructor called" << std::endl;
	return *this;
}


Brain::~Brain( void ){
	std::cout << "Brain destroyed" << std::endl;
}