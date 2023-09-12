/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hanmpark <hanmpark@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 23:26:37 by hanmpark          #+#    #+#             */
/*   Updated: 2023/09/12 11:41:02 by hanmpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

#include <stddef.h>

HumanB::HumanB(std::string name) : _name(name) {
	this->_weapon = NULL;
}

void	HumanB::attack(void) const {
	if (this->_weapon == NULL) {
		std::cout << this->_name << " doesn't have any weapon" << std::endl;
	} else {
		std::cout << this->_name << " attacks with their " << this->_weapon->getType() << std::endl;
	}
}

void	HumanB::setWeapon(Weapon &weapon) {
	this->_weapon = &weapon;
}
