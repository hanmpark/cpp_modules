/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hanmpark <hanmpark@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 14:46:44 by hanmpark          #+#    #+#             */
/*   Updated: 2024/03/13 15:56:52 by hanmpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

/**
 * Orthodox canonical form:
 * - Default constructor
 * - Copy constructor
 * - Destructor
 * - Copy assignment operator
 */

AForm::AForm(AForm const &copy) :	_name(copy._name), \
									_signed(copy._signed), \
									_gradeToSign(copy._gradeToSign), \
									_gradeToExecute(copy._gradeToExecute) {}

AForm::~AForm() {}

AForm	&AForm::operator=(AForm const &rhs) {
	if (this != &rhs) {
		_signed = rhs._signed;
	}
	return *this;
}

// End of the canonical form

AForm::AForm(std::string const &name, int gradeToSign, int gradeToExecute) :	_name(name), \
																				_signed(false), \
																				_gradeToSign(gradeToSign), \
																				_gradeToExecute(gradeToExecute)
{
	if (_gradeToSign < 1 || _gradeToExecute < 1)
		throw Bureaucrat::GradeTooHighException();
	if (_gradeToSign > 150 || _gradeToExecute > 150)
		throw Bureaucrat::GradeTooLowException();
}

// Getters ---------------------------------

std::string	AForm::getName() const {
	return _name;
}

bool	AForm::getSigned() const {
	return _signed;
}

int	AForm::getGradeToSign() const {
	return _gradeToSign;
}

int	AForm::getGradeToExecute() const {
	return _gradeToExecute;
}

// -----------------------------------------

std::ostream	&operator<<(std::ostream &o, AForm const &rhs) {
	o << "[AForm " << rhs.getName() << " info]" << std::endl;
	o << "AForm grade is signed: " << (rhs.getSigned() == true ? "true" : "false") << std::endl;
	o << "AForm grade to sign: " << rhs.getGradeToSign() << std::endl;
	o << "AForm grade to execute: " << rhs.getGradeToExecute();
	return o;
}

void	AForm::beSigned(Bureaucrat const &bureaucrat) {
	if (bureaucrat.getGrade() > _gradeToSign)
		throw AForm::GradeTooLowException();
	_signed = true;
}
