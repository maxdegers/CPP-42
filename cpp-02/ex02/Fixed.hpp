/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrousse <mbrousse@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 12:56:59 by mbrousse          #+#    #+#             */
/*   Updated: 2024/09/16 10:41:16 by mbrousse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
private:
	int                 _value;
	static const int    _fractBits = 8;
public:
	Fixed();
	Fixed(const Fixed& cpy);
	Fixed(const int value);
	Fixed(const float value);
	
	Fixed& operator=(const Fixed &src);

	~Fixed();
	
	int 	getRawBits(void) const;
	void 	setRawBits(int const raw);
	int 	toInt( void ) const;
	float 	toFloat( void ) const;

	bool	operator>(const Fixed &other) const;
	bool	operator<(const Fixed &other) const;
	bool	operator>=(const Fixed &other) const;
	bool	operator<=(const Fixed &other) const;
	bool	operator==(const Fixed &other) const;
	bool	operator!=(const Fixed &other) const;

	float	operator+(const Fixed &other) const;
	float	operator-(const Fixed &other) const;
	float	operator*(const Fixed &other) const;
	float	operator/(const Fixed &other) const;

	Fixed	operator++();
	Fixed	operator++(int);
	Fixed	operator--();
	Fixed	operator--(int);

	static Fixed	&min(Fixed &a, Fixed &b);
	static const Fixed	&min(const Fixed &a, const Fixed &b);
	static Fixed	&max(Fixed &a, Fixed &b);
	static const Fixed	&max(const Fixed &a, const Fixed &b);
	
};

std::ostream &operator<<(std::ostream &out, const Fixed &fixed);

#endif