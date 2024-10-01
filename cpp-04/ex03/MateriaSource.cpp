/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrousse <mbrousse@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 18:08:46 by mbrousse          #+#    #+#             */
/*   Updated: 2024/10/01 08:31:22 by mbrousse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource(void)
{
  for (int i = 0; i < 4; i++)
    this->materia[i] = NULL;
}
MateriaSource::MateriaSource(const MateriaSource &src)
{
  if (this != &src)
  {
    for (int i = 0; i < 4; i++)
    {
      if (this->materia[i])
        delete this->materia[i];
      this->materia[i] = src.materia[i];
    }
  }
}
MateriaSource &MateriaSource::operator=(const MateriaSource &src)
{
  if (this != &src)
  {
    for (int i = 0; i < 4; i++)
    {
      if (this->materia[i])
        delete this->materia[i];
      this->materia[i] = src.materia[i];
    }
  }
  return *this;
}

MateriaSource::~MateriaSource(void)
{
  for (int i = 0; i < 4; i++)
    delete this->materia[i];
}

void MateriaSource::learnMateria(AMateria *m)
{
  for (int i = 0; i < 4; i++)
  {
    if (materia[i] == NULL)
    {
      materia[i] = m;
      return;
    }
  }
}
AMateria *MateriaSource::createMateria(std::string const &type)
{
  for (int i = 0; i < 4; i++)
    if (materia[i] && materia[i]->getType() == type)
      return materia[i]->clone();
  return NULL;
}