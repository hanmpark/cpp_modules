/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hanmpark <hanmpark@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 12:54:53 by hanmpark          #+#    #+#             */
/*   Updated: 2023/09/05 14:30:13 by hanmpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void	Harl::debug(void) {

	std::cout << GREEN DEBUG DEF << std::endl;
}

void	Harl::info(void) {

	std::cout << GREEN INFO DEF << std::endl;
}

void	Harl::warning(void) {

	std::cout << GREEN WARNING DEF << std::endl;
}

void	Harl::error(void) {

	std::cout << GREEN ERROR DEF << std::endl;
}

void	Harl::complain(std::string level) {

	Level const	complainHarl[] = {
		{&Harl::debug, "DEBUG"},
		{&Harl::info, "INFO"},
		{&Harl::warning, "WARNING"},
		{&Harl::error, "ERROR"}
	};

	for (size_t i = 0; i < 4; i++) {
		if (level == complainHarl[i].level) {
			(this->*complainHarl[i].complainLevel)();
		}
	}
}
