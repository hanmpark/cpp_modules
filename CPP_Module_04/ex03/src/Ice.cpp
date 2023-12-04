/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hanmpark <hanmpark@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 13:37:13 by hanmpark          #+#    #+#             */
/*   Updated: 2023/12/04 16:40:07 by hanmpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

/*
* Orthodox canonical form:
* - Default constructor
* - Copy constructor
* - Destructor
* - Copy assignment operator
*/

Ice::Ice() : AMateria("ice") {

	// std::cout << "[Ice] Default constructor called" << std::endl;
}

Ice::Ice(Ice const &copy) : AMateria("ice") {

	// std::cout << "[Ice] Copy constructor called" << std::endl;
	*this = copy;
}

Ice::~Ice() {

	// std::cout << "[Ice] Destructor called" << std::endl;
}

Ice &Ice::operator=(Ice const &rhs) {

	// std::cout << "[Ice] Copy assignment operator called" << std::endl;

	if (this != &rhs) {
		_type = rhs._type;
	}
	return *this;
}

// End of the orthodox canonical form

AMateria *Ice::clone() const {

	return new Ice(*this);
}

void Ice::use(ICharacter &target) {

	std::cout << BLUE "* shoots an ice bolt at " << target.getName() << " *" << DEF << std::endl;
}
