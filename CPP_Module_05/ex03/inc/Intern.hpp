/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hanmpark <hanmpark@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 16:26:19 by hanmpark          #+#    #+#             */
/*   Updated: 2024/03/14 10:35:06 by hanmpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

typedef struct t_dispatch_form {
	std::string const	name;
	AForm				*ret;
}	t_dispatch_form;

class Intern {
public:
	Intern(); // Canonical form
	Intern(Intern const &copy); // Canonical form
	~Intern(); // Canonical form
	Intern	&operator=(Intern const &rhs); // Canonical form

	// Method
	AForm	*makeForm(std::string const &formName, std::string const &target);
	class NotFoundFormException : public std::exception {
	public:
		virtual char const *what() const throw();
	};
};

#endif