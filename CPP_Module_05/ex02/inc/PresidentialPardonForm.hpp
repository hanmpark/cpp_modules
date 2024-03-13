/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hanmpark <hanmpark@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 13:22:36 by hanmpark          #+#    #+#             */
/*   Updated: 2024/03/13 15:02:01 by hanmpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include "AForm.hpp"

class PresidentialPardonForm : public AForm {
private:
	std::string const	_target;

	PresidentialPardonForm(); // Canonical form

public:
	PresidentialPardonForm(PresidentialPardonForm const &copy); // Canonical form
	~PresidentialPardonForm(); // Canonical form
	PresidentialPardonForm	&operator=(PresidentialPardonForm const &rhs); // Canonical form
	PresidentialPardonForm(std::string const &target);

	// Method
	void	execute(Bureaucrat const &bureaucrat) const;
};

#endif