/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   addContact.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hanmpark <hanmpark@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 01:24:19 by hanmpark          #+#    #+#             */
/*   Updated: 2023/09/03 03:20:16 by hanmpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"

static void	setContactInformation(Contact &newContact, std::string *infoType) {

	std::cout << "Adding new contact, please enter the following information:" << std::endl;

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
		std::cout << "First name of the contact is: " << _contacts[_count].getFirstName() << std::endl;
		_count++;
	}
}
