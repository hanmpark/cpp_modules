/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hanmpark <hanmpark@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 18:08:41 by hanmpark          #+#    #+#             */
/*   Updated: 2023/09/25 13:12:12 by hanmpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int main() {

	Animal *animal1 = new Cat();
	Animal *animal2 = new Dog();

	std::cout << std::endl;
	std::cout << "animal1 is a " << animal1->getType() << std::endl;
	std::cout << "animal2 is a " << animal2->getType() << std::endl;
	animal1->makeSound();
	animal2->makeSound();
	std::cout << std::endl;

	delete animal1;
	delete animal2;

	return 0;
}
