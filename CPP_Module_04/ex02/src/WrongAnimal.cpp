/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hanmpark <hanmpark@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 19:24:36 by hanmpark          #+#    #+#             */
/*   Updated: 2023/09/23 19:50:54 by hanmpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : _type("WrongAnimal") {
	std::cout << PURPLE "[WrongAnimal] default constructor called" DEF << std::endl;
}

WrongAnimal::WrongAnimal(std::string const &type) : _type(type) {
	std::cout << PURPLE "[WrongAnimal] string constructor called" DEF << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal const &copy) {
	std::cout << PURPLE "[WrongAnimal] copy constructor called" DEF << std::endl;
	*this = copy;
}

WrongAnimal &WrongAnimal::operator=(WrongAnimal const &rhs) {
	std::cout << PURPLE "[WrongAnimal] copy assignment operator called" DEF << std::endl;
	_type = rhs.getType();

	return *this;
}

WrongAnimal::~WrongAnimal() {
	std::cout << PURPLE "[WrongAnimal] destructor called" DEF << std::endl;
}

std::string const WrongAnimal::getType() const {
	return _type;
}

void WrongAnimal::makeSound() const {
	std::cout << PURPLE "[WrongAnimal] - \"...\"" DEF << std::endl;
}
