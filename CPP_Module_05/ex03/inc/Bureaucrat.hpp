/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hanmpark <hanmpark@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 13:29:06 by hanmpark          #+#    #+#             */
/*   Updated: 2024/03/14 10:49:38 by hanmpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <exception>

# include "AForm.hpp"

class AForm;

class Bureaucrat {
private:
	std::string const	_name;
	int					_grade;

public:
	Bureaucrat(); // Canonical form
	Bureaucrat(Bureaucrat const &copy); // Canonical form
	~Bureaucrat(); // Canonical form
	Bureaucrat	&operator=(Bureaucrat const &rhs); // Canonical form
	Bureaucrat	(std::string const &name, int grade);

	// Getters
	std::string	getName() const;
	int 		getGrade() const;

	// Methods
	void	incGrade();
	void	decGrade();
	void	signForm(AForm &form) const;
	void	executeForm(AForm const &form);

	// Exceptions
	class GradeTooHighException : public std::exception {
	public:
		virtual char const	*what() const throw();
	};
	class GradeTooLowException : public std::exception {
	public:
		virtual char const	*what() const throw();
	};
};

std::ostream	&operator<<(std::ostream &o, Bureaucrat const &rhs);

#endif