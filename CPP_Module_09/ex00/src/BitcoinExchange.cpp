/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hanmpark <hanmpark@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/23 10:03:20 by hanmpark          #+#    #+#             */
/*   Updated: 2024/03/23 11:01:21 by hanmpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange() {}

BitcoinExchange::BitcoinExchange(BitcoinExchange const &copy) { (void)copy; }

BitcoinExchange::~BitcoinExchange() {}

BitcoinExchange	&BitcoinExchange::operator=(BitcoinExchange const &rhs) { (void)rhs; return *this; }

// Methods

void	BitcoinExchange::checkExtension(std::string const &filename, std::string const &extension) {
	if (filename.length() < 4 || filename.substr(filename.length() - 4) != extension)
		throw std::exception();
}

void	BitcoinExchange::readFile(std::string const &filename) {
	std::ifstream	file(filename.c_str());

	if (file.is_open() == false)
		throw std::exception();
	std::getline(file, _rawInput, '\0');
	file.close();
	std::cout << _rawInput << std::endl;
}

void	BitcoinExchange::splitForMap(char const &limiter) {
	std::stringstream	iss(_rawInput);
	std::string			line;

	while (std::getline(iss, line)) {
		for (int i = 0; i < line.length(); i++) {
			if (line.at(i) == limiter) {
				_map[line.substr(0, i + 1)] = line.substr(i);
				break ;
			}
		}
	}
}

void	BitcoinExchange::readDB(std::string const &filename) {
	checkExtension(filename, ".csv");
	readFile(filename);
	splitForMap();
}
