/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hanmpark <hanmpark@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 13:19:17 by hanmpark          #+#    #+#             */
/*   Updated: 2023/11/29 13:20:07 by hanmpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

/*
* Orthodox canonical form:
* - Default constructor
* - Copy constructor
* - Destructor
* - Copy assignment operator
*/

WrongAnimal::WrongAnimal() : _type("Some unknown WrongAnimal") {

	std::cout << "[WrongAnimal] Default constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal const &copy) : _type(copy._type) {

	std::cout << "[WrongAnimal] Copy constructor called" << std::endl;
}

WrongAnimal::~WrongAnimal() {

	std::cout << "[WrongAnimal] Destructor called" << std::endl;
}

WrongAnimal &WrongAnimal::operator=(WrongAnimal const &rhs) {

	std::cout << "[WrongAnimal] Copy assignment called" << std::endl;

	if (this != &rhs) {
		this->_type = rhs._type;
	}
	return *this;
}

// End of the orthodox canonical form

WrongAnimal::WrongAnimal(std::string type) : _type(type) {

	std::cout << "[WrongAnimal] String constructor called" << std::endl;
}

std::string const WrongAnimal::getType() const {

	return _type;
}

void	WrongAnimal::makeSound() const {

	std::cout << "[WrongAnimal] * making weird animal noises *" << std::endl;
}
