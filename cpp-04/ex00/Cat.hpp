/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrousse <mbrousse@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 17:04:15 by mbrousse          #+#    #+#             */
/*   Updated: 2024/09/18 17:12:17 by mbrousse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"

class Cat : public Animal{
public:
    Cat( std::string type );
	Cat( const Cat &src );
	Cat( void );
	Cat &operator=( const Cat &src );

	~Cat( void );

    void makeSound( void );
};

#endif