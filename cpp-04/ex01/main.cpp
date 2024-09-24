/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrousse <mbrousse@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 10:27:37 by mbrousse          #+#    #+#             */
/*   Updated: 2024/09/24 11:21:50 by mbrousse         ###   ########.fr       */
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
	Dog basic;
	std::cout << "---" << std::endl;
	{
		Dog tmp = basic;
	}
	std::cout << "---" << std::endl;
}

// int main(void) {
//   const Animal *j = new Dog();
//   const Animal *i = new Cat();

//   delete j;
//   delete i;

//   Dog basic;
//   { Dog tmp = basic; }

//   const Animal *animals[4] = {new Dog(), new Dog(), new Cat(), new Cat()};
//   for (int i = 0; i < 4; i++) {
//     delete animals[i];
//   }

//   return 0;
// }