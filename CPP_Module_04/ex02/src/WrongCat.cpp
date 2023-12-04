/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hanmpark <hanmpark@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 13:20:17 by hanmpark          #+#    #+#             */
/*   Updated: 2023/11/29 13:21:07 by hanmpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

/*
* Orthodox canonical form:
* - Default constructor
* - Copy constructor
* - Destructor
* - Copy assignment operator
*/

WrongCat::WrongCat() : WrongAnimal("WrongCat") {

	std::cout << "[WrongCat] Default constructor called" << std::endl;
}

WrongCat::WrongCat(WrongCat const &copy) : WrongAnimal(copy._type) {

	std::cout << "[WrongCat] Copy constructor called" << std::endl;
}

WrongCat::~WrongCat() {

	std::cout << "[WrongCat] Destructor called" << std::endl;
}

WrongCat &WrongCat::operator=(WrongCat const &rhs) {

	std::cout << "[WrongCat] Copy assignment operator called" << std::endl;

	if (this != &rhs) {
		this->_type = rhs._type;
	}
	return *this;
}

// End of the orthodox canonical form

void WrongCat::makeSound() const {

	std::cout << "[WrongCat] Meow meow" << std::endl;
}
