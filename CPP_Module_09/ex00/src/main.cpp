/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hanmpark <hanmpark@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/23 10:08:46 by hanmpark          #+#    #+#             */
/*   Updated: 2024/03/25 12:51:30 by hanmpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int	main(int argc, char **argv) {
	if (argc != 2) {
		std::cerr << "Error: could not open file." << endl;
		return 1;
	}
	try {
		BitcoinExchange	data;
		BitcoinExchange	input;

		data.readDB("data.csv");
		input.readInput(static_cast<string>(argv[1]), data.getMap());
	} catch (std::exception &e) {
		std::cerr << "Error: " << e.what() << endl;
		return 1;
	}
	return 0;
}
