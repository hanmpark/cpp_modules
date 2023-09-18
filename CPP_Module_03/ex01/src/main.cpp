/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hanmpark <hanmpark@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 16:02:47 by hanmpark          #+#    #+#             */
/*   Updated: 2023/09/18 12:06:04 by hanmpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int	main() {
	ClapTrap	jon("Jon");
	ScavTrap	jack("Jack");

	std::cout << std::endl;
	jon.attack("Jack");
	jack.takeDamage(jon.getAttackDamage());
	std::cout << std::endl << "Now it is Jack's turn to attack Jon!" << std::endl;
	jack.attack("Jon");
	jon.takeDamage(jack.getAttackDamage());
	jon.attack("Jack");
	jack.takeDamage(jon.getAttackDamage());

	std::cout << std::endl << "A new foe has appeared!" << std::endl;
	ScavTrap	newfoe(jack);
	newfoe.attack("jon");
	jon.takeDamage(newfoe.getAttackDamage());
	newfoe.guardGate();
	jon.beRepaired(10);
	std::cout << std::endl;
	return 0;
}
