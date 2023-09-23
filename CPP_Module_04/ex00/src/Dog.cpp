/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hanmpark <hanmpark@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 18:21:58 by hanmpark          #+#    #+#             */
/*   Updated: 2023/09/23 19:01:53 by hanmpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal("Dog") {
	std::cout << GREEN "[Dog] default constructor called" DEF << std::endl;
}

Dog::Dog(Dog const &copy) : Animal(copy.getType()) {
	std::cout << GREEN "[Dog] copy constructor called" DEF << std::endl;
	*this = copy;
}

Dog &Dog::operator=(Dog const &rhs) {
	std::cout << GREEN "[Dog] copy assignment operator called" DEF << std::endl;
	_type = rhs.getType();

	return *this;
}

Dog::~Dog() {
	std::cout << GREEN "[Dog] destructor called" DEF << std::endl;
}

void Dog::makeSound() const {
	std::cout << GREEN "[Dog] - \"Bark bark\"" DEF << std::endl;
}
