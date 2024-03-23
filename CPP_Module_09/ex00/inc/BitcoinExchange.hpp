/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hanmpark <hanmpark@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/23 10:00:43 by hanmpark          #+#    #+#             */
/*   Updated: 2024/03/23 10:58:57 by hanmpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

# include <iostream>
# include <map>
# include <fstream>
# include <sstream>

class BitcoinExchange {
private:
	std::map<std::string, std::string>	_map;
	std::string							_rawInput;

	void	checkExtension(std::string const &filename, std::string const &extension);
	void	readFile(std::string const &filename);
	void	BitcoinExchange::splitForMap(char const &limiter);

public:
	BitcoinExchange();
	BitcoinExchange(BitcoinExchange const &copy);
	~BitcoinExchange();
	BitcoinExchange	&operator=(BitcoinExchange const &rhs);

	void	readDB(std::string const &filename);
};

#endif