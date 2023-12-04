/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hanmpark <hanmpark@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 12:54:36 by hanmpark          #+#    #+#             */
/*   Updated: 2023/12/04 17:11:21 by hanmpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

static bool isLevel(std::string chosenLevel) {

	return chosenLevel == "DEBUG" || chosenLevel == "INFO" \
		|| chosenLevel == "WARNING" || chosenLevel == "ERROR";
}

int main(void) {

	setlevel:
	std::string chosenLevel;
	std::cout << BLUE "Choose a level of complain: " DEF;
	std::getline(std::cin, chosenLevel);
	if (!isLevel(chosenLevel)) {
		std::cout << RED << chosenLevel << " is not an existing level" DEF << std::endl;
		goto setlevel;
	}
	Harl harl;
	harl.complain(chosenLevel);
	return 0;
}
