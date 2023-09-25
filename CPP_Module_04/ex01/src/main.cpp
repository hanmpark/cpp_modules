/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hanmpark <hanmpark@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 18:08:41 by hanmpark          #+#    #+#             */
/*   Updated: 2023/09/25 12:54:38 by hanmpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int main() {

	Animal *zoo[4] = {
		new Cat(),
		new Cat(),
		new Dog(),
		new Dog()
	};

	std::cout << std::endl;
	for (int i = 0; i < 4; i++) {
		zoo[i]->makeSound();
	}
	std::cout << std::endl;

	Cat *cat1 = new Cat();
	std::cout << std::endl;
	Cat *copyCat = cat1;
	std::cout << "CHECKING DEEP COPIES:" << std::endl;
	std::cout << "Their addresses:" << std::endl;
	std::cout << "cat1 address: " << cat1->getBrain() << std::endl;
	std::cout << "copyCat address: " << copyCat->getBrain() << std::endl;
	std::cout << std::endl << "eg:" << std::endl;
	std::cout << "cat1: " << cat1->getBrainIdea(0) << std::endl;
	std::cout << "copyCat: " << copyCat->getBrainIdea(0) << std::endl;
	cat1->setBrainIdea(0, "Woof woof");
	std::cout << "cat1: " << cat1->getBrainIdea(0) << std::endl;
	std::cout << "copyCat: " << copyCat->getBrainIdea(0) << std::endl;
	std::cout << std::endl;

	for (int i = 0; i < 4; i++) {
		delete zoo[i];
	}

	// system("leaks Polymorphism");

	return 0;
}
