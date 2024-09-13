/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrousse <mbrousse@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 12:56:59 by mbrousse          #+#    #+#             */
/*   Updated: 2024/09/11 15:53:54 by mbrousse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>
#include <sstream>

class Fixed
{
private:
	int                 _value;
	static const int    _fractBits = 8;
public:
	Fixed();
	~Fixed();
	Fixed(const Fixed& cpy);
	Fixed( const int intValue);
	Fixed( const float floatValue);
	Fixed& operator=(const Fixed &src);
	int getRawBits(void) const;
	void setRawBits(int const raw);
};



#endif