/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hanmpark <hanmpark@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 11:05:07 by hanmpark          #+#    #+#             */
/*   Updated: 2023/12/01 20:32:32 by hanmpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

/*
* Orthodox canonical form:
* - Default constructor
* - Copy constructor
* - Destructor
* - Copy assignment operator
*/

Dog::Dog() : Animal("Dog") {

	std::cout << "[Dog] Default constructor called" << std::endl;
	_brain = new Brain("dog");
}

Dog::Dog(Dog const &copy) : Animal(copy._type) {

	std::cout << "[Dog] Copy constructor called" << std::endl;
	_brain = new Brain(*copy._brain);
}

Dog::~Dog() {

	std::cout << "[Dog] Destructor called" << std::endl;
	delete _brain;
}

Dog &Dog::operator=(Dog const &rhs) {

	std::cout << "[Dog] Copy assignment operator called" << std::endl;

	if (this != &rhs) {
		_type = rhs._type;
		*_brain = *rhs._brain;
	}
	return *this;
}

// End of the orthodox canonical form

void Dog::makeSound() const {

	std::cout << "[Dog] Waf waf" << std::endl;
}

void Dog::telepathy(int nbr) const {

	_brain->sayIdeas(nbr);
}
