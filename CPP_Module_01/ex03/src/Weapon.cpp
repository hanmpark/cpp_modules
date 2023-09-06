/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hanmpark <hanmpark@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 23:26:45 by hanmpark          #+#    #+#             */
/*   Updated: 2023/09/06 11:24:28 by hanmpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string weapon) : type(weapon) {}

Weapon::~Weapon(void) {}

std::string const	&Weapon::getType(void) const {

	return this->type;
}

void	Weapon::setType(std::string newValue) {

	this->type = newValue;
}
