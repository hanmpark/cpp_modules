/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hanmpark <hanmpark@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 15:11:36 by hanmpark          #+#    #+#             */
/*   Updated: 2023/11/30 16:15:44 by hanmpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

/*
* Orthodox canonical form:
* - Default constructor
* - Copy constructor
* - Destructor
* - Copy assignment operator
*/

MateriaSource::MateriaSource() {

	for (int i = 0; i < 4; i++) {
		_materias[i] = NULL;
	}
	std::cout << GREEN "[MateriaSource] has been created" DEF << std::endl;
}

MateriaSource::MateriaSource(MateriaSource const &copy) {

	*this = copy;
	std::cout << GREEN "[MateriaSource] has been created" DEF << std::endl;
}

MateriaSource::~MateriaSource() {

	for (int i = 0; i < 4; i++) {
		if (_materias[i]) {
			delete _materias[i];
		}
		_materias[i] = NULL;
	}
	std::cout << GREEN "[MateriaSource] has been destroyed" DEF << std::endl;
}

MateriaSource &MateriaSource::operator=(MateriaSource const &rhs) {

	std::cout << "[MateriaSource] Copy assignment operator called" << std::endl;
	if (this != &rhs) {
		for (int i = 0; i < 4; i++) {
			_materias[i] = rhs._materias[i];
		}
	}
	return *this;
}

// End of the orthodox canonical form

AMateria *MateriaSource::getMateria(std::string const &type) {

	for (int i = 0; i < 4; i++) {
		if (_materias[i] && _materias[i]->getType() == type) {
			return _materias[i];
		}
	}
	return NULL;
}

void MateriaSource::learnMateria(AMateria *m) {

	for (int i = 0; i < 4; i++) {
		if (_materias[i] == NULL) {
			_materias[i] = m;
			return;
		}
	}
	delete m;
	m = NULL;
}

AMateria *MateriaSource::createMateria(std::string const &type) {

	for (int i = 0; i < 4; i++) {
		if (_materias[i] && _materias[i]->getType() == type) {
			return _materias[i]->clone();
		}
	}
	return NULL;
}
