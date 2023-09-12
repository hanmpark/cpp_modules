/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hanmpark <hanmpark@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 15:20:05 by hanmpark          #+#    #+#             */
/*   Updated: 2023/09/12 11:43:17 by hanmpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact(void) {}

Contact::~Contact(void) {}

void	Contact::setFirstName(std::string first_name) {
	_FirstName = first_name;
	return;
}

void	Contact::setLastName(std::string last_name) {
	_LastName = last_name;
	return;
}

void	Contact::setNickName(std::string nickname) {
	_NickName = nickname;
	return;
}

void	Contact::setPhoneNumber(std::string phone_number) {
	_PhoneNumber = phone_number;
	return;
}

void	Contact::setDarkestSecret(std::string darkest_secret) {
	_DarkestSecret = darkest_secret;
	return;
}

std::string	Contact::getFirstName(void) const {
	return _FirstName;
}

std::string	Contact::getLastName(void) const {
	return _LastName;
}

std::string Contact::getNickName(void) const {
	return _NickName;
}

std::string Contact::getPhoneNumber(void) const {
	return _PhoneNumber;
}

std::string Contact::getDarkestSecret(void) const {
	return _DarkestSecret;
}
