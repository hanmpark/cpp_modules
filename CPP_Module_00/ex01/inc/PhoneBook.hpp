/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hanmpark <hanmpark@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 12:09:16 by hanmpark          #+#    #+#             */
/*   Updated: 2023/09/12 11:43:07 by hanmpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"

/* Defines */

# define MAX_CONTACTS 8
# define MAX_COLUMN_LENGTH 10

/* Class */

class PhoneBook {

public:
	PhoneBook(void);
	~PhoneBook(void);

	void	addContact(void);
	void	searchContact(void) const;

private:
	int		_count;
	int		_trackOldestContact;
	Contact	_contacts[MAX_CONTACTS];

	void	showRegisteredContact(void) const;
	void	putChosenContactInfo(int chosenIndex) const;
};

#endif