#ifndef WHATEVER_HPP
#define WHATEVER_HPP

#include <iostream>

template < typename T >
void	swap(T &num1, T &num2) {
	T tmp = num1;
	num1 = num2;
	num2 = tmp;
}

template < typename T >
T	min(T &num1, T &num2) {
	if (num1 >= num2)
		return num2;
	return num1;
}

template < typename T >
T	max(T &num1, T &num2) {
	if (num1 <= num2)
		return num2;
	return num1;
}

#endif