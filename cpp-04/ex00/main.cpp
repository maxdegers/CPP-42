/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrousse <mbrousse@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 10:27:37 by mbrousse          #+#    #+#             */
/*   Updated: 2024/09/18 17:08:12 by mbrousse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int main() {
	cout << "----- TEST ANIMAL ------" << endl;
	const Animal* animal = new Animal();
	animal->makeSound();
	delete animal;
	cout << "---------------------" << endl << endl;	
	cout << "----- TEST CAT ------" << endl;
	const Animal* cat = new Cat();
	cat->makeSound();
	delete cat;
	cout << "---------------------" << endl << endl;
	cout << "----- TEST DOG ------" << endl;
	const Animal* dog = new Dog();
	dog->makeSound();
	delete dog;
	cout << "---------------------" << endl << endl;
	cout << "----- TEST WRONGANIMAL ------" << endl;
	const WrongAnimal* wronganimal = new WrongAnimal();
	wronganimal->makeSound();
	delete wronganimal;
	cout << "---------------------" << endl << endl;	
	cout << "----- TEST WRONGCAT ------" << endl;
	const WrongCat* wrongcat = new WrongCat();
	wrongcat->makeSound();
	delete wrongcat;
	cout << "---------------------" << endl << endl;
	cout << "----- TEST WRONGCAT AS WRONGANIMAL ------" << endl;
	WrongAnimal *animals = new WrongCat;
	animals->makeSound();
	delete animals;
	cout << "---------------------" << endl << endl;
	return (0);
}