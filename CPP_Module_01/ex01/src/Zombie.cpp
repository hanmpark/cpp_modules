/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hanmpark <hanmpark@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 17:02:04 by hanmpark          #+#    #+#             */
/*   Updated: 2023/09/06 11:37:13 by hanmpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::~Zombie(void) {

	std::cout << "Zombie " << this->_name << " starved to death" << std::endl;
}

void	Zombie::setName(std::string zombieName) {

	this->_name = zombieName;
}

void	Zombie::announce(void) const {

	std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
