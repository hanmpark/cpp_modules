/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hanmpark <hanmpark@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 13:41:29 by hanmpark          #+#    #+#             */
/*   Updated: 2024/03/13 14:52:17 by hanmpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

/**
 * Orthodox canonical form:
 * - Default constructor
 * - Copy constructor
 * - Destructor
 * - Copy assignment operator
 */

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &copy) :	AForm(copy), \
																						_target(copy.getName()) {}

PresidentialPardonForm::~PresidentialPardonForm() {}

PresidentialPardonForm	&PresidentialPardonForm::operator=(PresidentialPardonForm const &rhs) {
	(void)rhs;
	return *this;
}

// End of canonical form

PresidentialPardonForm::PresidentialPardonForm(std::string const &target) : AForm(target, 25, 5), _target(target) {}

// Method

void	PresidentialPardonForm::execute(Bureaucrat const &bureaucrat) const {
	if (this->getSigned() == false)
		throw AForm::FormUnsignedException();
	else if (this->getGradeToExecute() < bureaucrat.getGrade())
		throw AForm::GradeTooLowException();

	std::cout << _target << " has been pardoned by Zaphod Beeblebrox" << std::endl;
}
