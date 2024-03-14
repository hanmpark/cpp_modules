/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hanmpark <hanmpark@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 13:17:51 by hanmpark          #+#    #+#             */
/*   Updated: 2024/03/14 10:41:17 by hanmpark         ###   ########.fr       */
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
		virtual char const	*what() const throw();
	};
};

#endif