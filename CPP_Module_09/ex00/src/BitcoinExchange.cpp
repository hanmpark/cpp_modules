/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hanmpark <hanmpark@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/23 10:03:20 by hanmpark          #+#    #+#             */
/*   Updated: 2024/03/25 16:15:24 by hanmpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange() {}

BitcoinExchange::BitcoinExchange(BitcoinExchange const &copy) { (void)copy; }

BitcoinExchange::~BitcoinExchange() {}

BitcoinExchange	&BitcoinExchange::operator=(BitcoinExchange const &rhs) { (void)rhs; return *this; }

// Methods

void	BitcoinExchange::checkExtension(string const &filename, string const &extension) {
	if (filename.length() < extension.length() || filename.substr(filename.length() - extension.length()) != extension)
		throw FormatException();
}

void	BitcoinExchange::readFile(string const &filename) {
	std::ifstream	file(filename.c_str());

	if (file.is_open() == false)
		throw OpenFileException();
	std::getline(file, _rawInput, '\0');
	file.close();
}

void	BitcoinExchange::checkCSV(string const &name, char const &limiter) {
	std::stringstream	iss(_rawInput);
	string				line;

	std::getline(iss, line);
	if (line != name) {
		throw FormatException();
	}
	try {
		while (std::getline(iss, line)) {
			for (size_t i = 0; i < line.length(); i++) {
				if (line.at(i) == limiter) {
					if (i + 1 == line.length()) {
						throw FormatException();
					}
					getDate(line.substr(0, i));
					getValueCSV(line.substr(i + 1));
					_map[line.substr(0, i)] = line.substr(i + 1);
				}
			}
		}
	} catch (std::exception &e) {
		throw FormatException();
	}
}

int	BitcoinExchange::findDateInDB(std::map<string, string> const &db) {

}

void	BitcoinExchange::calculateResult(string const &name, std::map<string, string> const &db) {
	std::stringstream	iss(_rawInput);
	string				line;

	std::getline(iss, line);
	if (line != name) {
		throw FormatException();
	}
	while (std::getline(iss, line)) {
		cout << line << endl;
		size_t	i;
		try {
			if ((i = line.find(" | ")) == std::string::npos)
				throw BadInputException();
			getDate(line.substr(0, i));
			int exchangeRate = findDateInDB(db);
		} catch (BadInputException &e) {
			cout << "Error: " << e.what() << line.substr(0, i) << endl;
		} catch (std::exception &e) {
			cout << "Error: " << e.what() << endl;
		}
	}
}

void	BitcoinExchange::readDB(string const &filename) {
	readFile(filename);
	checkExtension(filename, ".csv");
	checkCSV("date,exchange_rate", ',');
}

void	BitcoinExchange::readInput(string const &filename, std::map<string, string> const &db) {
	readFile(filename);
	checkExtension(filename, ".txt");
	calculateResult("date | value", db);
}

// Getter

std::map<string, string> const	&BitcoinExchange::getMap() const {
	return _map;
}
