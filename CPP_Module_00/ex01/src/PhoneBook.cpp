/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hanmpark <hanmpark@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 15:20:12 by hanmpark          #+#    #+#             */
/*   Updated: 2023/09/03 03:31:28 by hanmpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"

#include <iostream>
#include <string>
#include <iomanip>

PhoneBook::PhoneBook(void) : _count(0), _trackOldestContact(0) {}

PhoneBook::~PhoneBook(void) {}

static void	putTableSeparator(void) {

	for (int i = 0; i < 4; i++) {
		std::cout << "-----------";
	}
	std::cout << "-";
	std::cout << std::endl;
}

static void	putIndexInfo(std::string info) {

	std::cout << "|";
	if (info.length() > MAX_COLUMN_LENGTH) {
		info.resize(9);
		std::cout << std::setiosflags(std::ios::right) << std::setw(9) << info << ".";
	} else {
		std::cout << std::setiosflags(std::ios::right) << std::setw(10) << info;
	}
}

void	PhoneBook::putChosenContactInfo(int chosenIndex) const {

	std::cout << "Here are the information of the chosen index's contact" << std::endl;
	putTableSeparator();
	std::cout << _contacts[chosenIndex].getFirstName() << std::endl;
	std::cout << _contacts[chosenIndex].getLastName() << std::endl;
	std::cout << _contacts[chosenIndex].getNickName() << std::endl;
	std::cout << _contacts[chosenIndex].getPhoneNumber() << std::endl;
	std::cout << _contacts[chosenIndex].getDarkestSecret() << std::endl;
	putTableSeparator();
}

void	PhoneBook::showRegisteredContact(void) const {
	
	for (int i = 0; i <= _count - 1; i++) {
		putTableSeparator();
		putIndexInfo(std::to_string(i));
		putIndexInfo(_contacts[i].getFirstName());
		putIndexInfo(_contacts[i].getLastName());
		putIndexInfo(_contacts[i].getNickName());
		std::cout << "|" << std::endl;
	}
	putTableSeparator();
}
