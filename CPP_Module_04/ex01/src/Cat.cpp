/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hanmpark <hanmpark@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 18:21:53 by hanmpark          #+#    #+#             */
/*   Updated: 2023/09/25 12:53:15 by hanmpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal("Cat") {
	std::cout << BLUE "[Cat] default constructor called" DEF << std::endl;
	_catBrain = new Brain();
}

Cat::Cat(Cat const &copy) : Animal(copy.getType()) {
	std::cout << BLUE "[Cat] copy constructor called" DEF << std::endl;
	*this = copy;
}

Cat &Cat::operator=(Cat const &rhs) {
	std::cout << BLUE "[Cat] copy assignment operator called" DEF << std::endl;
	_type = rhs.getType();
	*_catBrain = *rhs._catBrain;

	return *this;
}

Cat::~Cat() {
	delete _catBrain;
	std::cout << BLUE "[Cat] destructor called" DEF << std::endl;
}

void Cat::makeSound() const {
	std::cout << BLUE "[Cat] - \"Meow meow\"" DEF << std::endl;
}

std::string const Cat::getBrainIdea(int i) const {
	return _catBrain->getIdea(i);
}

Brain const *Cat::getBrain() const {
	return _catBrain;
}

void Cat::setBrainIdea(int i, std::string idea) {
	return _catBrain->setIdea(i, idea);
}
