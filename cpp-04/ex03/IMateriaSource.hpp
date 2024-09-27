/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrousse <mbrousse@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 10:17:09 by mbrousse          #+#    #+#             */
/*   Updated: 2024/09/25 10:18:24 by mbrousse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IMATERIASOURCE_HPP
#define IMATERIASOURCE_HPP

#include "AMateria.hpp"

class IMateriaSource{
private:
	
public:

	virtual ~IMateriaSource(){};

  	virtual void learnMateria(AMateria *) = 0;
  	virtual AMateria *createMateria(std::string const &type) = 0;
	
};

#endif // IMateriaSource_HPP