/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hanmpark <hanmpark@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 19:43:13 by hanmpark          #+#    #+#             */
/*   Updated: 2023/09/23 19:48:38 by hanmpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal("WrongCat") {
	std::cout << ROSE "[WrongCat] default constructor called" DEF << std::endl;
}

WrongCat::WrongCat(WrongCat const &copy) : WrongAnimal(copy.getType()) {
	std::cout << ROSE "[WrongCat] copy constructor called" DEF << std::endl;
	*this = copy;
}

WrongCat &WrongCat::operator=(WrongCat const &rhs) {
	std::cout << ROSE "[WrongCat] copy assignment operator called" DEF << std::endl;
	_type = rhs.getType();

	return *this;
}

WrongCat::~WrongCat() {
	std::cout << ROSE "[WrongCat] destructor called" DEF << std::endl;
}

void WrongCat::makeSound() const {
	std::cout << ROSE "[WrongCat] - \"Meow meow\"" DEF << std::endl;
}
