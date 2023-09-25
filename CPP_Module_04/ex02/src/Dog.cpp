/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hanmpark <hanmpark@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 18:21:58 by hanmpark          #+#    #+#             */
/*   Updated: 2023/09/25 12:53:12 by hanmpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal("Dog") {
	std::cout << GREEN "[Dog] default constructor called" DEF << std::endl;
	_dogBrain = new Brain();
}

Dog::Dog(Dog const &copy) : Animal(copy.getType()) {
	std::cout << GREEN "[Dog] copy constructor called" DEF << std::endl;
	*this = copy;
}

Dog &Dog::operator=(Dog const &rhs) {
	std::cout << GREEN "[Dog] copy assignment operator called" DEF << std::endl;
	_type = rhs.getType();
	*_dogBrain = *rhs._dogBrain;

	return *this;
}

Dog::~Dog() {
	delete _dogBrain;
	std::cout << GREEN "[Dog] destructor called" DEF << std::endl;
}

void Dog::makeSound() const {
	std::cout << GREEN "[Dog] - \"Bark bark\"" DEF << std::endl;
}

std::string const Dog::getBrainIdea(int i) const {
	return _dogBrain->getIdea(i);
}

Brain const *Dog::getBrain() const {
	return _dogBrain;
}

void Dog::setBrainIdea(int i, std::string idea) {
	return _dogBrain->setIdea(i, idea);
}
