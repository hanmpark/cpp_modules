/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hanmpark <hanmpark@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 17:18:32 by hanmpark          #+#    #+#             */
/*   Updated: 2023/09/18 12:09:38 by hanmpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap() {
	_HitPoints = 100;
	_EnergyPoints = 50;
	_AttackDamage = 20;
	std::cout << PURPLE "[ScavTrap] default constructor called" DEF << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const &rhs) : ClapTrap(rhs.getName()){
	*this = rhs;
	std::cout << PURPLE "[ScavTrap] copy constructor called" DEF << std::endl;
}

ScavTrap::ScavTrap(std::string Name) : ClapTrap(Name) {
	_HitPoints = 100;
	_EnergyPoints = 50;
	_AttackDamage = 20;
	std::cout << PURPLE "[ScavTrap] string constructor called" DEF << std::endl;
}

ScavTrap	&ScavTrap::operator=(ScavTrap const &rhs) {
	_Name = rhs.getName();
	_HitPoints = rhs.getHitPoints();
	_EnergyPoints = rhs.getEnergyPoints();
	_AttackDamage = rhs.getAttackDamage();
	std::cout << PURPLE "[ScavTrap] copy assignment operator called" DEF << std::endl;

	return *this;
}

ScavTrap::~ScavTrap() {
	std::cout << PURPLE "[ScavTrap] destructor called" DEF << std::endl;
}

void	ScavTrap::attack(const std::string &target) {
	if (_EnergyPoints > 0) {
		std::cout << PURPLE "[ScavTrap] " << _Name << " attacks " << target << ", causing " << _AttackDamage << " points of damage!" DEF << std::endl;
		_EnergyPoints--;
	} else if (!_EnergyPoints) {
		std::cout << PURPLE "[ScavTrap] " << _Name << " has no energy point left." DEF << std::endl;
	} else if (!_HitPoints) {
		std::cout << PURPLE "[ScavTrap] " << _Name << " has no more hit points." DEF << std::endl;
	}
}

void	ScavTrap::guardGate() {
	std::cout << PURPLE "[ScavTrap] " << _Name << " is now in Gate keeper mode" DEF << std::endl;
}
