/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hanmpark <hanmpark@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 23:26:37 by hanmpark          #+#    #+#             */
/*   Updated: 2023/09/05 00:52:55 by hanmpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _name(name) {

	_weapon = nullptr;
}

void	HumanB::attack(void) const {

	if (_weapon == nullptr) {
		std::cout << _name << " doesn't have any weapon" << std::endl;
	} else {
		std::cout << _name << " attacks with their " << _weapon->getType() << std::endl;
	}
}

void	HumanB::setWeapon(Weapon &weapon) {

	_weapon = &weapon;
}
