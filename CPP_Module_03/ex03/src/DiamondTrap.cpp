/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hanmpark <hanmpark@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 16:17:32 by hanmpark          #+#    #+#             */
/*   Updated: 2023/09/23 03:09:33 by hanmpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : FragTrap(), ScavTrap() {
	std::cout << YELLOW "[DiamondTrap] default constructor called" DEF << std::endl;
	_Name = "NoName";
	ClapTrap::_Name = "NoName_clap_name";
	_HitPoints = 100;
	_EnergyPoints = 50;
	_AttackDamage = 30;
}

DiamondTrap::DiamondTrap(std::string const &Name) : FragTrap(Name), ScavTrap(Name) {
	std::cout << YELLOW "[DiamondTrap] string constructor called" DEF << std::endl;
	_Name = Name;
	ClapTrap::_Name = Name + "_clap_name";
	_HitPoints = 100;
	_EnergyPoints = 50;
	_AttackDamage = 30;
}

DiamondTrap::DiamondTrap(DiamondTrap const &copy) : FragTrap(copy.getName()), ScavTrap(copy.getName()) {
	std::cout << YELLOW "[DiamondTrap] copy constructor called" DEF << std::endl;
	*this = copy;
}

DiamondTrap	&DiamondTrap::operator=(DiamondTrap const &rhs) {
	std::cout << YELLOW "[DiamondTrap] copy assignment operator called" DEF << std::endl;
	_Name = rhs.getName();
	_HitPoints = rhs.getHitPoints();
	_EnergyPoints = rhs.getEnergyPoints();
	_AttackDamage = rhs.getAttackDamage();

	return *this;
}

DiamondTrap::~DiamondTrap() {
	std::cout << YELLOW "[DiamondTrap] destructor called" << std::endl;
}

void	DiamondTrap::attack(const std::string &target) {
	ScavTrap::attack(target);
}

void	DiamondTrap::whoAmI() {
	std::cout << YELLOW "[DiamondTrap] My Name is " << _Name << " and my ClapTrap name is " << ClapTrap::_Name << std::endl;
}
