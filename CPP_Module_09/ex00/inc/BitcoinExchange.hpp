/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hanmpark <hanmpark@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/23 10:00:43 by hanmpark          #+#    #+#             */
/*   Updated: 2024/03/25 16:12:38 by hanmpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

# include <iostream>
# include <map>
# include <algorithm>
# include <fstream>
# include <sstream>
# include <cctype>

using std::string;
using std::cout;
using std::endl;

class BitcoinExchange {
private:
	std::map<string, string>	_map;
	string						_rawInput;
	int							_year, _month, _day;

	void	checkExtension(string const &filename, string const &extension);
	void	readFile(string const &filename);
	void	checkCSV(string const &name, char const &limiter);
	void	calculateResult(string const &name, std::map<string, string> const &db);
	int		findDateInDB(std::map<string, string> const &db);

	void	getDate(string const &date);
	void	getValueCSV(string const &value);
	void	getValueTXT(string const &value);
	bool	checkLeapYear(int year);

public:
	BitcoinExchange();
	BitcoinExchange(BitcoinExchange const &copy);
	~BitcoinExchange();
	BitcoinExchange	&operator=(BitcoinExchange const &rhs);

	void	readDB(string const &filename);
	void	readInput(string const &filename, std::map<string, string> const &db);

	// Getter
	std::map<string, string> const	&getMap() const;

	// Exceptions
	class OpenFileException : public std::exception {
	public:
		virtual char const	*what() const throw();
	};
	class FormatException : public std::exception {
	public:
		virtual char const	*what() const throw();
	};
	class NotPositiveNumberException : public std::exception {
	public:
		virtual char const	*what() const throw();
	};
	class BadInputException : public std::exception {
	public:
		virtual char const	*what() const throw();
	};
	class TooLargeNumberException : public std::exception {
	public:
		virtual char const	*what() const throw();
	};
	class NonDigitException : public std::exception {
	public:
		virtual char const	*what() const throw();
	};
};

#endif