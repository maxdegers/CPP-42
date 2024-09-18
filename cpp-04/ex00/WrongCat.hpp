/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrousse <mbrousse@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 17:10:14 by mbrousse          #+#    #+#             */
/*   Updated: 2024/09/18 17:11:57 by mbrousse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include "Animal.hpp"

class WrongCat : public Animal{
public:
    WrongCat( std::string type );
	WrongCat( const WrongCat &src );
	WrongCat( void );
	WrongCat &operator=( const WrongCat &src );

	~WrongCat( void );

    void makeSound( void );
};

#endif