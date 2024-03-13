/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hanmpark <hanmpark@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 13:17:51 by hanmpark          #+#    #+#             */
/*   Updated: 2024/03/13 15:01:57 by hanmpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBERRYCREATIONFORM_HPP
# define SHRUBERRYCREATIONFORM_HPP

# include "AForm.hpp"

class ShrubberyCreationForm : public AForm {
private:
	std::string const	_target;

	ShrubberyCreationForm(); // Canonical form

public:
	ShrubberyCreationForm(ShrubberyCreationForm const &copy); // Canonical form
	~ShrubberyCreationForm(); // Canonical form
	ShrubberyCreationForm	&operator=(ShrubberyCreationForm const &rhs); // Canonical form
	ShrubberyCreationForm(std::string const &target);

	// Method
	void	execute(Bureaucrat const &bureaucrat) const;

	// Exception
	class CreateFileException : public std::exception {
	public:
		virtual const char *what() const throw() {
			return "Could not create the file";
		}
	};
};

#endif