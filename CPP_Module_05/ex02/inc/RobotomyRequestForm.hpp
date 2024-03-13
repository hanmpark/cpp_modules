/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hanmpark <hanmpark@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 13:20:31 by hanmpark          #+#    #+#             */
/*   Updated: 2024/03/13 15:01:59 by hanmpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include "AForm.hpp"

class RobotomyRequestForm : public AForm {
private:
	std::string const	_target;

	RobotomyRequestForm(); // Canonical form

public:
	RobotomyRequestForm(RobotomyRequestForm const &copy); // Canonical form
	~RobotomyRequestForm(); // Canonical form
	RobotomyRequestForm	&operator=(RobotomyRequestForm const &rhs); // Canonical form
	RobotomyRequestForm(std::string const &target);

	// Method
	void	execute(Bureaucrat const &bureaucrat) const;
};

#endif