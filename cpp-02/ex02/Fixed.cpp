/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrousse <mbrousse@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 10:26:32 by mbrousse          #+#    #+#             */
/*   Updated: 2024/10/07 08:56:58 by mbrousse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

std::ostream &operator<<(std::ostream &out, const Fixed &fixed){
	out << fixed.toFloat();
	return (out);
}


Fixed::Fixed(){
	// std::cout << "Default constructor called" << std::endl;
	_value = 0;
}


Fixed::Fixed( const Fixed& cpy ){
	// std::cout << "Copy constructor called" << std::endl;
	*this = cpy;
}


Fixed::Fixed( const int value) : _value(value << this->_fractBits){
	// std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed( const float value) : _value(roundf(value * (1 << this->_fractBits))){
	// std::cout << "Float constructor called" << std::endl;
}

Fixed& Fixed::operator=(const Fixed &src){
	// std::cout << "Copy assignment operator called" << std::endl;
	if (this != &src)
		this->_value = src.getRawBits();
	return (*this);
}


Fixed::~Fixed(){
	// std::cout << "Destructor called" << std::endl;
}



int	Fixed::getRawBits(void) const{
	// std::cout << "getRawBits member function called" << std::endl;
	return (_value);
}


void	Fixed::setRawBits(int const raw){
	// std::cout << "setRawBits member function called" << std::endl;
	this->_value = raw;
}


int	Fixed::toInt( void ) const{
	return (this->_value >> this->_fractBits);
}

float Fixed::toFloat( void ) const{
	return ((float)this->_value / (1 << this->_fractBits));
}


bool	Fixed::operator>(const Fixed &other) const{
	return this->_value > other._value;
}

bool	Fixed::operator<(const Fixed &other) const{
	return this->_value < other._value;
}

bool	Fixed::operator>=(const Fixed &other) const{
	return this->_value >= other._value;
}

bool	Fixed::operator<=(const Fixed &other) const{
	return this->_value <= other._value;
}

bool	Fixed::operator==(const Fixed &other) const{
	return this->_value == other._value;
}

bool	Fixed::operator!=(const Fixed &other) const{
	return this->_value != other._value;
}



Fixed	Fixed::operator+(const Fixed &other) const{
	Fixed tmp;
	tmp.setRawBits(this->getRawBits() + other.getRawBits());
	return tmp;
}

Fixed	Fixed::operator-(const Fixed &other) const{
	Fixed tmp;
	tmp.setRawBits(this->getRawBits() - other.getRawBits());
	return tmp;
}

Fixed	Fixed::operator*(const Fixed &other) const{
	Fixed tmp;
	tmp.setRawBits((long long)(this->getRawBits() * other.getRawBits() / (1 << _fractBits)));
	return tmp;
}

Fixed	Fixed::operator/(const Fixed &other) const{
	Fixed tmp;
	tmp.setRawBits((long long)((this->getRawBits() << _fractBits) / other.getRawBits()));
	return tmp;
}



Fixed	Fixed::operator++(){
	this->_value++;
	return *this;
}

Fixed	Fixed::operator++(int){
	Fixed tmp = *this;
	this->_value++;
	return tmp;
}

Fixed	Fixed::operator--(){
	this->_value--;
	return *this;
}

Fixed	Fixed::operator--(int){
	Fixed tmp = *this;
	this->_value--;
	return tmp;
}

Fixed		&Fixed::min(Fixed &a, Fixed &b){
	return (a < b ? a : b);
}

const Fixed	&Fixed::min(const Fixed &a, const Fixed &b){
	return (a < b ? a : b);
}

Fixed		&Fixed::max(Fixed &a, Fixed &b){
	return (a > b ? a : b);
}

const Fixed	&Fixed::max(const Fixed &a, const Fixed &b){
	return (a > b ? a : b);
}