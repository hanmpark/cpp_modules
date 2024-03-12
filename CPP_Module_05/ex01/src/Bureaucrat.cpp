/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hanmpark <hanmpark@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 13:29:40 by hanmpark          #+#    #+#             */
/*   Updated: 2024/03/12 15:44:30 by hanmpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

/**
 * Orthodox canonical form:
 * - Default constructor
 * - Copy constructor
 * - Destructor
 * - Copy assignment operator
 */

Bureaucrat::Bureaucrat() :	_name("Some bureaucrat"), \
							_grade(150) {}

Bureaucrat::Bureaucrat(Bureaucrat const &copy) :	_name(copy._name), \
													_grade(copy._grade) {}

Bureaucrat::~Bureaucrat() {}

Bureaucrat	&Bureaucrat::operator=(Bureaucrat const &rhs) {
	if (this != &rhs) {
		_grade = rhs.getGrade();
	}
	return *this;
}

// End of the canonical form

Bureaucrat::Bureaucrat(std::string const &name, int grade) :	_name(name), \
																_grade(grade)
{
	if (_grade < 1)
		throw Bureaucrat::GradeTooHighException();
	if (_grade > 150)
		throw Bureaucrat::GradeTooLowException();
}

// Getters ---------------------------------

std::string const	Bureaucrat::getName() const {
	return _name;
}

int	Bureaucrat::getGrade() const {
	return _grade;
}

// -----------------------------------------

void	Bureaucrat::incGrade() {
	if (_grade - 1 < 1)
		throw Bureaucrat::GradeTooHighException();
	_grade--;
}

void	Bureaucrat::decGrade() {
	if (_grade + 1 > 150)
		throw Bureaucrat::GradeTooLowException();
	_grade++;
}

std::ostream	&operator<<(std::ostream &o, Bureaucrat const &rhs) {
	o << rhs.getName() << ", bureaucrat grade " << rhs.getGrade();
	return o;
}

void	Bureaucrat::signForm(Form &form) const {
	try {
		form.beSigned(*this);
		std::cout << *this << " signed " << form.getName() << std::endl;
	} catch (Form::GradeTooLowException &e) {
		std::cout << _name << " couldn't sign " << form.getName() << " because " << e.what() << std::endl;
	}
}
