/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrousse <mbrousse@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 10:12:40 by mbrousse          #+#    #+#             */
/*   Updated: 2024/09/24 10:13:20 by mbrousse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <string>
#include <iostream>

class WrongAnimal
{
	protected:
		std::string _type;
		
	public:
		WrongAnimal( const WrongAnimal &src );
		WrongAnimal( void );
		WrongAnimal &operator=( const WrongAnimal &src );

		virtual ~WrongAnimal(void);

		virtual void makeSound(void) const;
		
  		std::string getType(void) const;
};

#endif