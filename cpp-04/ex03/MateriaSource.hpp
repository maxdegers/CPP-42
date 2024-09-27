/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrousse <mbrousse@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 18:04:48 by mbrousse          #+#    #+#             */
/*   Updated: 2024/09/27 18:07:01 by mbrousse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"
#include "AMateria.hpp"

class MateriaSource : public IMateriaSource{
private:
	AMateria *materia[4];
public:
	MateriaSource( void );
	MateriaSource( const MateriaSource &src );
	MateriaSource &operator=( const MateriaSource &src );
	
	~MateriaSource();

	void learnMateria(AMateria *);
	AMateria *createMateria(std::string const &type);
};

#endif // MateriaSource_HPP