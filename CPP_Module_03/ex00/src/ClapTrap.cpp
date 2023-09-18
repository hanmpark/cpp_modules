/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hanmpark <hanmpark@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 16:02:45 by hanmpark          #+#    #+#             */
/*   Updated: 2023/09/18 12:15:17 by hanmpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void) : _HitPoints(10), _EnergyPoints(10), _AttackDamage(0) {
	std::cout << GREEN "[ClapTrap] default constructor called" DEF << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const &rhs) : _Name(rhs._Name), _HitPoints(rhs._HitPoints), _EnergyPoints(rhs._EnergyPoints), _AttackDamage(rhs._AttackDamage) {
	std::cout << GREEN "[ClapTrap] copy constructor called" DEF << std::endl;
}

ClapTrap::ClapTrap(std::string Name) : _Name(Name), _HitPoints(10), _EnergyPoints(10), _AttackDamage(0) {
	std::cout << GREEN "[ClapTrap] string constructor called" DEF << std::endl;
}

ClapTrap::~ClapTrap(void) {
	std::cout << GREEN "[ClapTrap] destructor called" DEF << std::endl;
}

ClapTrap	&ClapTrap::operator=(ClapTrap const &rhs) {
	std::cout << GREEN "[ClapTrap] copy assignment operator called" DEF << std::endl;
	this->_Name = rhs._Name;
	return *this;
}

void	ClapTrap::attack(std::string const &target) {
	if (_EnergyPoints > 0 && _HitPoints > 0) {
		std::cout << GREEN "[ClapTrap] " << _Name << " attacks " << target << ", causing " << _AttackDamage << " points of damage!" DEF << std::endl;
		_EnergyPoints--;
	} else if (!_EnergyPoints) {
		std::cout << GREEN "[ClapTrap] " << _Name << " has no energy point left." DEF << std::endl;
	} else if (!_HitPoints) {
		std::cout << GREEN "[ClapTrap] " << _Name << " has no more hit points." DEF << std::endl;
	}
}

void	ClapTrap::takeDamage(unsigned int amount) {
	if (_HitPoints > 0) {
		std::cout << GREEN "[ClapTrap] " << _Name << " took " << amount << " damage." DEF << std::endl;
		if (_HitPoints < amount) {
			_HitPoints = 0;
		}
	} else {
		std::cout << GREEN "[ClapTrap] " << _Name << " has already no more hit points." DEF << std::endl;
	}
}

void	ClapTrap::beRepaired(unsigned int amount) {
	if (_EnergyPoints > 0 && _HitPoints > 0) {
		std::cout << GREEN "[ClapTrap] " << _Name << " repaired itself and gained back " << amount << " hits points." DEF << std::endl;
		_HitPoints += amount;
		_EnergyPoints--;
	} else if (!_EnergyPoints) {
		std::cout << GREEN "[ClapTrap] " << _Name << " has no energy point left." DEF << std::endl;
	} else if (!_HitPoints) {
		std::cout << GREEN "[ClapTrap] " << _Name << " has no more hit points." DEF << std::endl;
	}
}

unsigned int const	&ClapTrap::getAttackDamage(void) const {
	return _AttackDamage;
}

unsigned int const	&ClapTrap::getHitPoints(void) const {
	return _HitPoints;
}

std::string const	&ClapTrap::getName(void) const {
	return _Name;
}
