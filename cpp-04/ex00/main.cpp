/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrousse <mbrousse@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 10:27:37 by mbrousse          #+#    #+#             */
/*   Updated: 2024/09/24 10:19:48 by mbrousse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int main() {
	std::cout << "----- TEST ANIMAL ------" << std::endl;
	const Animal* animal = new Animal();
	animal->makeSound();
	std::cout << "Type : " << animal->getType() << std::endl;
	delete animal;
	std::cout << "---------------------" << std::endl << std::endl;	
	std::cout << "----- TEST CAT ------" << std::endl;
	const Animal* cat = new Cat();
	cat->makeSound();
	std::cout << "Type : " << cat->getType() << std::endl;
	delete cat;
	std::cout << "---------------------" << std::endl << std::endl;
	std::cout << "----- TEST DOG ------" << std::endl;
	const Animal* dog = new Dog();
	dog->makeSound();
	std::cout << "Type : " << dog->getType() << std::endl;
	delete dog;
	std::cout << "---------------------" << std::endl << std::endl;
	std::cout << "----- TEST WRONGANIMAL ------" << std::endl;
	const WrongAnimal* wronganimal = new WrongAnimal();
	wronganimal->makeSound();
	std::cout << "Type : " << wronganimal->getType() << std::endl;
	delete wronganimal;
	std::cout << "---------------------" << std::endl << std::endl;	
	std::cout << "----- TEST WRONGCAT ------" << std::endl;
	const WrongCat* wrongcat = new WrongCat();
	wrongcat->makeSound();
	std::cout << "Type : " << wrongcat->getType() << std::endl;
	delete wrongcat;
	std::cout << "---------------------" << std::endl << std::endl;
	std::cout << "----- TEST WRONGCAT AS WRONGANIMAL ------" << std::endl;
	WrongAnimal *animals = new WrongCat;
	animals->makeSound();
	std::cout << "Type : " << animals->getType() << std::endl;
	delete animals;
	std::cout << "---------------------" << std::endl << std::endl;
	return (0);
}