/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hanmpark <hanmpark@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 13:29:06 by hanmpark          #+#    #+#             */
/*   Updated: 2024/03/12 16:02:03 by hanmpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <exception>

# include "Form.hpp"

class Form;

class Bureaucrat {
public:
	Bureaucrat(); // Canonical form
	Bureaucrat(Bureaucrat const &copy); // Canonical form
	~Bureaucrat(); // Canonical form
	Bureaucrat	&operator=(Bureaucrat const &rhs); // Canonical form
	Bureaucrat	(std::string const &name, int grade);

	// Getters
	std::string const	getName() const;
	int 				getGrade() const;

	// Methods
	void	incGrade();
	void	decGrade();
	void	signForm(Form &form) const;

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


private:
	std::string const	_name;
	int					_grade;
};

std::ostream	&operator<<(std::ostream &o, Bureaucrat const &rhs);

#endif