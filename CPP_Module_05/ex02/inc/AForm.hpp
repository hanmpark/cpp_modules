/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hanmpark <hanmpark@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 14:38:08 by hanmpark          #+#    #+#             */
/*   Updated: 2024/03/13 16:12:04 by hanmpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
# define AFORM_HPP

# include "Bureaucrat.hpp"

class Bureaucrat;

class AForm {
private:
	std::string const	_name;
	bool				_signed;
	int const			_gradeToSign;
	int const			_gradeToExecute;

	AForm(); // Canonical form

public:
	AForm(AForm const &copy); // Canonical form
	virtual ~AForm(); // Canonical form
	AForm	&operator=(AForm const &rhs); // Canonical form
	AForm(std::string const &name, int gradeToSign, int gradeToExecute);

	// Getters
	std::string	getName() const;
	bool		getSigned() const;
	int			getGradeToSign() const;
	int			getGradeToExecute() const;

	// Method
	void			beSigned(Bureaucrat const &bureaucrat);
	virtual void	execute(Bureaucrat const &bureaucrat) const = 0;

	// Exceptions
	class GradeTooHighException : public std::exception {
	public:
		virtual const char	*what() const throw() {
			return "Grade is too high";
		}
	};
	class GradeTooLowException : public std::exception {
	public:
		virtual const char	*what() const throw() {
			return "Grade is too low";
		}
	};
	class FormUnsignedException : public std::exception {
	public:
		virtual const char *what() const throw() {
			return "Form is unsigned";
		}
	};
};

std::ostream	&operator<<(std::ostream &o, AForm const &rhs);

#endif