/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hanmpark <hanmpark@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 10:37:04 by hanmpark          #+#    #+#             */
/*   Updated: 2023/11/29 15:51:45 by hanmpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

/*
* Orthodox canonical form:
* - Default constructor
* - Copy constructor
* - Destructor
* - Copy assignment operator
*/

Animal::Animal() : _type("Some unknown Animal") {

	std::cout << "[Animal] Default constructor called" << std::endl;
}

Animal::Animal(Animal const &copy) : _type(copy._type) {

	std::cout << "[Animal] Copy constructor called" << std::endl;
}

Animal::~Animal() {

	std::cout << "[Animal] Destructor called" << std::endl;
}

Animal &Animal::operator=(Animal const &rhs) {

	std::cout << "[Animal] Copy assignment called" << std::endl;

	if (this != &rhs) {
		this->_type = rhs._type;
	}
	return *this;
}

// End of the orthodox canonical form

Animal::Animal(std::string type) : _type(type) {

	std::cout << "[Animal] String constructor called" << std::endl;
}

std::string const Animal::getType() const {

	return _type;
}
