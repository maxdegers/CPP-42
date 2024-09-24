/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrousse <mbrousse@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 10:27:37 by mbrousse          #+#    #+#             */
/*   Updated: 2024/09/24 11:45:20 by mbrousse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
	std::cout << "-----Constructors-----" << std::endl;
	const Animal *animals[4] = {new Dog(), new Dog(), new Cat(), new Cat()};

	std::cout << "-----Destructors-----" << std::endl;
	for (int i = 0; i < 4; i++)
	{
		std::cout << "Animal [" << i << "]" << std::endl;
		delete animals[i];
		std::cout << "--------" << std::endl;
	}
	// Animal test;
	Dog basic;
	std::cout << "---" << std::endl;
	{
		Dog tmp = basic;
	}
	std::cout << "---" << std::endl;
}