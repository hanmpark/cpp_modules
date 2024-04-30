/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hanmpark <hanmpark@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 17:02:04 by hanmpark          #+#    #+#             */
/*   Updated: 2024/04/30 21:39:39 by hanmpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(void) {}

Zombie::~Zombie(void) {
	std::cout << "Zombie " << _name << " starved to death" << std::endl;
}

void	Zombie::setName(std::string zombieName) { _name = zombieName; }

std::string	Zombie::getName(void) const { return _name; }

void	Zombie::announce(void) const {
	std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
