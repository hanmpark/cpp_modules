/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hanmpark <hanmpark@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 14:38:08 by hanmpark          #+#    #+#             */
/*   Updated: 2024/03/14 10:48:44 by hanmpark         ###   ########.fr       */
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
		virtual char const	*what() const throw();
	};
	class GradeTooLowException : public std::exception {
	public:
		virtual char const	*what() const throw();
	};
	class FormUnsignedException : public std::exception {
	public:
		virtual char const	*what() const throw();
	};
};

std::ostream	&operator<<(std::ostream &o, AForm const &rhs);

#endif