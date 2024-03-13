/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hanmpark <hanmpark@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 16:26:04 by hanmpark          #+#    #+#             */
/*   Updated: 2024/03/13 18:18:47 by hanmpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

/**
 * Orthodox canonical form:
 * - Default constructor
 * - Copy constructor
 * - Destructor
 * - Copy assignment operator
 */

Intern::Intern() {}

Intern::Intern(Intern const &copy) {
	if (this != &copy)
		*this = copy;
}

Intern::~Intern() {}

Intern	&Intern::operator=(Intern const &rhs) {
	(void)rhs;
	return *this;
}

// End of canonical form

// Method

AForm	*Intern::makeForm(std::string const &formName, std::string const &target) {
	t_dispatch_form	dispatchForm[3] = {
		{"shrubbery creation", new ShrubberyCreationForm(target)},
		{"robotomy request", new RobotomyRequestForm(target)},
		{"presidential pardon", new PresidentialPardonForm(target)}
	};

	for (int i = 0; i < 3; i++) {
		if (dispatchForm[i] == formName)
	}
}
