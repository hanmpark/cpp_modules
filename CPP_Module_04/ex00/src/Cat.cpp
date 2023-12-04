/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hanmpark <hanmpark@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 11:42:53 by hanmpark          #+#    #+#             */
/*   Updated: 2023/11/29 12:31:49 by hanmpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

/*
* Orthodox canonical form:
* - Default constructor
* - Copy constructor
* - Destructor
* - Copy assignment operator
*/

Cat::Cat() : Animal("Cat") {

	std::cout << "[Cat] Default constructor called" << std::endl;
}

Cat::Cat(Cat const &copy) : Animal(copy._type) {

	std::cout << "[Cat] Copy constructor called" << std::endl;
}

Cat::~Cat() {

	std::cout << "[Cat] Destructor called" << std::endl;
}

Cat &Cat::operator=(Cat const &rhs) {

	std::cout << "[Cat] Copy assignment operator called" << std::endl;

	if (this != &rhs) {
		this->_type = rhs._type;
	}
	return *this;
}

// End of the orthodox canonical form

void Cat::makeSound() const {

	std::cout << "[Cat] Meow meow" << std::endl;
}
