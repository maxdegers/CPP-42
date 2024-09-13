/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrousse <mbrousse@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 12:56:52 by mbrousse          #+#    #+#             */
/*   Updated: 2024/09/11 15:53:01 by mbrousse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

/**
 * @brief Construct a new Fixed:: Fixed object
 * 
 */
Fixed::Fixed(){
    std::cout << "Default constructor called" << std::endl;
}

/**
 * @brief Destroy the Fixed:: Fixed object
 * 
 */
Fixed::~Fixed(){
    std::cout << "Destructor called" << std::endl;
}

/**
 * @brief Construct a new Fixed:: Fixed object
 * 
 * @param cpy 
 */
Fixed::Fixed( const Fixed& cpy ){
	std::cout << "Copy constructor called" << std::endl;
	*this = cpy;
}

/**
 * @brief 
 * 
 * @param src 
 * @return Fixed& 
 */
Fixed& Fixed::operator=(const Fixed &src)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &src)
		this->_value = src.getRawBits();
	return (*this);
}

Fixed::Fixed(const int value) : _value(value << this->_fractBits){
	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float n) : _value(roundf(n * (1 << this->_fractBits)))
{
	std::cout << "Float constructor called" << std::endl;
}

/**
 * @brief 
 * 
 * @return int 
 */
int	Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (_value);
}

/**
 * @brief 
 * 
 * @param raw 
 */
void	Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called" << std::endl;
	_value = raw;
}