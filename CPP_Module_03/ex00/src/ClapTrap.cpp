/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hanmpark <hanmpark@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 16:02:45 by hanmpark          #+#    #+#             */
/*   Updated: 2023/09/14 21:22:22 by hanmpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void) : _HitPoints(10), _EnergyPoints(10), _AttackDamage(0) {
	std::cout << "Default ClapTrap constructor called" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const &rhs) : _Name(rhs._Name), _HitPoints(rhs._HitPoints), _EnergyPoints(rhs._EnergyPoints), _AttackDamage(rhs._AttackDamage) {
	std::cout << "ClapTrap copy constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string Name) : _Name(Name), _HitPoints(10), _EnergyPoints(10), _AttackDamage(0) {
	std::cout << "ClapTrap string constructor called" << std::endl;
}

ClapTrap::~ClapTrap(void) {
	std::cout << "ClapTrap destructor called" << std::endl;
}

ClapTrap	&ClapTrap::operator=(ClapTrap const &rhs) {
	std::cout << "ClapTrap copy assignment operator called" << std::endl;
	this->_Name = rhs._Name;
	return *this;
}

void	ClapTrap::attack(std::string const &target) {
	if (_EnergyPoints > 0) {
		std::cout << "ClapTrap " << _Name << " attacks " << target << ", causing " << _AttackDamage << " points of damage!" << std::endl;
		_EnergyPoints--;
	} else if (!_EnergyPoints) {
		std::cout << "ClapTrap " << _Name << " has no energy point left." << std::endl;
	} else if (!_HitPoints) {
		std::cout << "ClapTrap " << _Name << " has no more hit points." << std::endl;
	}
}

void	ClapTrap::takeDamage(unsigned int amount) {
	std::cout << "ClapTrap" << _Name << " took " << amount << " damage." << std::endl;
	_HitPoints -= amount;
}

void	ClapTrap::beRepaired(unsigned int amount) {
	if (_EnergyPoints > 0 && _HitPoints > 0) {
		std::cout << _Name << " repaired itself and gained back " << amount << " hits points." << std::endl;
		_HitPoints += amount;
		_EnergyPoints--;
	} else if (!_EnergyPoints) {
		std::cout << "ClapTrap " << _Name << " has no energy point left." << std::endl;
	} else if (!_HitPoints) {
		std::cout << "ClapTrap " << _Name << " has no more hit points." << std::endl;
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
