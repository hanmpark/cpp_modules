/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hanmpark <hanmpark@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 15:20:12 by hanmpark          #+#    #+#             */
/*   Updated: 2023/09/12 11:43:38 by hanmpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

#include <iomanip>
#include <sstream>

PhoneBook::PhoneBook(void) : _count(0), _trackOldestContact(0) {}

PhoneBook::~PhoneBook(void) {}

static void	setContactInformation(Contact &newContact, std::string *infoType) {
	system("clear");
	std::cout << BLUE "Adding new contact, please enter the following information:" DEF << std::endl;

	for (int i = 0; infoType[i].length(); i++) {
		std::string	line;

		std::cout << infoType[i];
		std::getline(std::cin, line);

		switch (i) {
			case 0:
				newContact.setFirstName(line); break;
			case 1:
				newContact.setLastName(line); break;
			case 2:
				newContact.setNickName(line); break;
			case 3:
				newContact.setPhoneNumber(line); break;
			case 4:
				newContact.setDarkestSecret(line); break;
			default: break;
		}
	}
	std::cout << std::endl;
}

void	PhoneBook::addContact(void) {
	Contact		newContact;
	std::string	infoType[] = {
		"First name: ",
		"Last name: ",
		"Nickname: ",
		"Phone Number: ",
		"Darkest secret: ",
		""
	};

	setContactInformation(newContact, infoType);
	if (_count == MAX_CONTACTS) {
		_contacts[_trackOldestContact++] = newContact;
		if (_trackOldestContact == MAX_CONTACTS) {
			_trackOldestContact = 0;
		}
	} else {
		_contacts[_count] = newContact;
		_count++;
	}
}

static void	putTableSeparator(void) {
	for (int i = 0; i < 4; i++) {
		std::cout << "-----------";
	}
	std::cout << "-";
	std::cout << std::endl;
}

static void	putIndexInfo(std::string info) {
	std::cout << "|";
	if (info.empty()) {
		std::cout << std::setw(10) << "";
		return;
	}
	if (info.length() > MAX_COLUMN_LENGTH) {
		info.resize(9);
		std::cout << std::setiosflags(std::ios::right) << std::setw(9) << info << ".";
	} else {
		std::cout << std::setiosflags(std::ios::right) << std::setw(10) << info;
	}
}

void	PhoneBook::putChosenContactInfo(int chosenIndex) const {
	std::cout << GREEN "Chosen contact's information" DEF << std::endl;
	putTableSeparator();
	std::cout << "First name: " << _contacts[chosenIndex].getFirstName() << std::endl;
	std::cout << "Last name: " << _contacts[chosenIndex].getLastName() << std::endl;
	std::cout << "Nick name: " << _contacts[chosenIndex].getNickName() << std::endl;
	std::cout << "Phone number: " << _contacts[chosenIndex].getPhoneNumber() << std::endl;
	std::cout << "Darkest Secret: " << _contacts[chosenIndex].getDarkestSecret() << std::endl;
	putTableSeparator();
	std::cout << std::endl;
}

void	PhoneBook::showRegisteredContact(void) const {
	system("clear");
	std::cout << GREEN "Registered contact(s)" DEF << std::endl;
	for (int i = 0; i <= _count - 1; i++) {
		putTableSeparator();
		putIndexInfo(std::to_string(i));
		putIndexInfo(_contacts[i].getFirstName());
		putIndexInfo(_contacts[i].getLastName());
		putIndexInfo(_contacts[i].getNickName());
		std::cout << "|" << std::endl;
	}
	putTableSeparator();
	std::cout << std::endl;
}

static int	stringToInt(std::string &str) {
	for (size_t i = 0; i < str.size(); i++) {
		if (!std::isdigit(str.at(i))) {
			return -1;
		}
	}
	int	i;
	std::istringstream(str) >> i;
	return i;
}

void	PhoneBook::searchContact(void) const {
	if (_count == 0) {
		std::cout << RED "No registered contact found" DEF << std::endl;
		return;
	}

	showRegisteredContact();

	while (1) {
		std::string	index;
		std::cout << BLUE "Enter the index of the contact: " DEF;
		std::getline(std::cin, index);
		int	chosenIndex = stringToInt(index);
		if (chosenIndex < 0 || chosenIndex >= _count) {
			std::cerr << RED "The chosen index does not exist" DEF << std::endl;
			continue;
		}
		putChosenContactInfo(chosenIndex);
		break;
	}
}
