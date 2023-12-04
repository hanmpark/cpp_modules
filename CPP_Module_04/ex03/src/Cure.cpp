/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hanmpark <hanmpark@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 13:53:09 by hanmpark          #+#    #+#             */
/*   Updated: 2023/12/04 16:40:17 by hanmpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

/*
* Orthodox canonical form:
* - Default constructor
* - Copy constructor
* - Destructor
* - Copy assignment operator
*/

Cure::Cure() : AMateria("cure") {

	// std::cout << "[Cure] Default constructor called" << std::endl;
}

Cure::Cure(Cure const &copy) : AMateria("cure") {

	// std::cout << "[Cure] Copy constructor called" << std::endl;
	*this = copy;
}

Cure::~Cure() {

	// std::cout << "[Cure] Destructor called" << std::endl;
}

Cure &Cure::operator=(Cure const &rhs) {

	// std::cout << "[Cure] Copy assignment operator called" << std::endl;

	if (this != &rhs) {
		_type = rhs._type;
	}
	return *this;
}

// End of the orthodox canonical form

AMateria *Cure::clone() const {

	return new Cure(*this);
}

void Cure::use(ICharacter &target) {

	std::cout << BLUE "* heals " << target.getName() << "'s wounds *" DEF << std::endl;
}
