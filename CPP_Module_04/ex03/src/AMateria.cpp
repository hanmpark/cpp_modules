/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hanmpark <hanmpark@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 12:55:25 by hanmpark          #+#    #+#             */
/*   Updated: 2023/11/30 15:51:16 by hanmpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

/*
* Orthodox canonical form:
* - Default constructor
* - Copy constructor
* - Destructor
* - Copy assignment operator
*/

AMateria::AMateria() : _type("* no type *") {

	std::cout << GREEN "[AMateria] " << _type << " has been created" DEF << std::endl;
}

AMateria::AMateria(AMateria const &copy) {

	*this = copy;
	std::cout << GREEN "[AMateria] " << _type << " has been created" DEF << std::endl;
}

AMateria::~AMateria() {

	std::cout << GREEN "[AMateria] " << _type << " destroyed" DEF << std::endl;
}

AMateria &AMateria::operator=(AMateria const &rhs) {

	std::cout << "[AMateria] Copy assignment operator called" << std::endl;

	if (this != &rhs) {
		_type = rhs._type;
	}
	return *this;
};

// End of the orthodox canonical form

AMateria::AMateria(std::string const &type) : _type(type) {

	std::cout << GREEN "[AMateria] " << _type << " has been created" DEF << std::endl;
}

std::string const &AMateria::getType() const {

	return _type;
}

void AMateria::use(ICharacter &target) {

	std::cout << BLUE "[AMateria] " << _type << " used on " << target.getName() << DEF << std::endl;
}
