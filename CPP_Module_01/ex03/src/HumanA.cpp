/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hanmpark <hanmpark@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 23:26:20 by hanmpark          #+#    #+#             */
/*   Updated: 2023/09/22 17:19:38 by hanmpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &usingWeapon) : _name(name), _weapon(usingWeapon) {}

void	HumanA::attack(void) const {
	std::cout << _name << " attacks with his " << _weapon.getType() << std::endl;
}
