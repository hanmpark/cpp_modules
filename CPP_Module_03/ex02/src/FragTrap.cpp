/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hanmpark <hanmpark@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 12:28:27 by hanmpark          #+#    #+#             */
/*   Updated: 2023/09/21 21:02:55 by hanmpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap() {
	_HitPoints = 100;
	_EnergyPoints = 100;
	_AttackDamage = 30;
}

FragTrap::FragTrap(FragTrap const &copy) : ClapTrap(copy.getName()) {
	*this = copy;
	std::cout << ROSE "[FragTrap] copy constructor called" DEF << std::endl;
}

FragTrap::FragTrap(std::string Name) : ClapTrap(Name) {
	_HitPoints = 100;
	_EnergyPoints = 100;
	_AttackDamage = 30;
	std::cout << ROSE "[FragTrap] string constructor called" DEF << std::endl;
}

FragTrap	&FragTrap::operator=(FragTrap const &rhs) {
	_Name = rhs.getName();
	_HitPoints = rhs.getHitPoints();
	_EnergyPoints = rhs.getEnergyPoints();
	_AttackDamage = rhs.getAttackDamage();
	std::cout << ROSE "[FragTrap] copy assignment operator called" DEF << std::endl;

	return *this;
}

FragTrap::~FragTrap() {
	std::cout << ROSE "[FragTrap] destructor called" DEF << std::endl;
}

void	FragTrap::highFivesGuys() {
	std::cout << ROSE "[FragTrap] Would you mind high fiving me ?" DEF << std::endl;
}
