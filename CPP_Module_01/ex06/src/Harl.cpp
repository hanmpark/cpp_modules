/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hanmpark <hanmpark@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 12:54:53 by hanmpark          #+#    #+#             */
/*   Updated: 2023/09/05 16:27:33 by hanmpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void	Harl::debug(void) {

	std::cout << YELLOW "[ DEBUG ]" DEF << std::endl;
	std::cout << GREEN DEBUG DEF << std::endl;
	std::cout << std::endl;
}

void	Harl::info(void) {

	std::cout << YELLOW "[ INFO ]" DEF << std::endl;
	std::cout << GREEN INFO DEF << std::endl;
	std::cout << std::endl;
}

void	Harl::warning(void) {

	std::cout << YELLOW "[ WARNING ]" DEF << std::endl;
	std::cout << GREEN WARNING DEF << std::endl;
	std::cout << std::endl;
}

void	Harl::error(void) {

	std::cout << YELLOW "[ ERROR ]" DEF << std::endl;
	std::cout << GREEN ERROR DEF << std::endl;
	std::cout << std::endl;
}

void	Harl::complain(std::string level) {

	std::string	differentLevels[] = {
		"DEBUG",
		"INFO",
		"WARNING",
		"ERROR"
	};

	for (size_t i = 0; i < 4; i++) {
		if (level == differentLevels[i]) {
			switch (i) {
				case 0: this->debug();
				case 1: this->info();
				case 2: this->warning();
				case 3: this->error();
				default: break;
			}
		}
	}
}
