/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hanmpark <hanmpark@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 15:15:57 by hanmpark          #+#    #+#             */
/*   Updated: 2023/09/03 03:44:25 by hanmpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include "PhoneBook.hpp"

#include <iostream>

int	main( void ) {

	PhoneBook	phonebook;

	while ("ff") {
		std::string	command;
		std::cout << "Please enter a command (ADD, SEARCH, EXIT): ";
		std::getline(std::cin, command);

		if (command.empty()) {
			std::cout << std::flush;
			break;
		} else if (command == "ADD") {
			phonebook.addContact();
		} else if (command == "SEARCH") {
			phonebook.searchContact();
		} else if (command == "EXIT") {
			break;
		}
	}
	return 0;
}
