/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hanmpark <hanmpark@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 16:02:47 by hanmpark          #+#    #+#             */
/*   Updated: 2023/09/14 21:21:18 by hanmpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main() {
	ClapTrap	jon("Jon");
	ClapTrap	robert("Robert");

	std::cout << "Jon attacking Robert 11 times:" << std::endl;
	std::cout <<  "-----------------------------------------------" << std::endl;
	for (int i = 0; i < 11; i++) {
		jon.attack("Robert");
		robert.takeDamage(jon.getAttackDamage());
	}
	std::cout << "-----------------------------------------------" << std::endl << std::endl;
	robert.beRepaired(5);
	std::cout << "Jon has " << jon.getHitPoints() << " hit points." << std::endl;
	std::cout << "Robert has " << robert.getHitPoints() << " hit points." << std::endl;

	ClapTrap	tequila(robert);
	std::cout << "Object tequila is called " << tequila.getName() << " and has " << tequila.getHitPoints() << std::endl;
	return 0;
}
