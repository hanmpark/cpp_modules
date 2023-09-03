/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   searchContact.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hanmpark <hanmpark@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 01:26:40 by hanmpark          #+#    #+#             */
/*   Updated: 2023/09/03 03:34:09 by hanmpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include "PhoneBook.hpp"

void	PhoneBook::searchContact(void) const {

	showRegisteredContact();
	std::string	index;
	std::cout << "Enter the index of the contact: ";
	std::getline(std::cin, index);

	try {
		int	chosenIndex = std::stoi(index);
		if (chosenIndex < 0 || chosenIndex >= _count) {
			std::cerr << "Invalid argument: The chosen index does not exist" << std::endl;
			return;
		}
		putChosenContactInfo(chosenIndex);
	}
	catch (const std::invalid_argument &error) {
		std::cerr << "Invalid argument: " << error.what() << std::endl;
		return;
	}
}
