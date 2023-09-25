/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hanmpark <hanmpark@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 18:21:46 by hanmpark          #+#    #+#             */
/*   Updated: 2023/09/25 13:01:03 by hanmpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() : _type("Animal") {
	std::cout << YELLOW "[Animal] default constructor called" DEF << std::endl;
}

Animal::Animal(std::string const &type) : _type(type) {
	std::cout << YELLOW "[Animal] string constructor called" DEF << std::endl;
}

Animal::Animal(Animal const &copy) : _type(copy.getType()) {
	std::cout << YELLOW "[Animal] copy constructor called" DEF << std::endl;
	*this = copy;
}

Animal &Animal::operator=(Animal const &rhs) {
	std::cout << YELLOW "[Animal] copy assignment operator called" DEF << std::endl;
	_type = rhs.getType();

	return *this;
}

Animal::~Animal() {
	std::cout << YELLOW "[Animal] destructor called" DEF << std::endl;
}

std::string const Animal::getType() const {
	return _type;
}
