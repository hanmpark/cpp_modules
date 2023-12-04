/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hanmpark <hanmpark@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 12:50:30 by hanmpark          #+#    #+#             */
/*   Updated: 2023/11/30 15:45:35 by hanmpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <iostream>
# include "ICharacter.hpp"

# define RED "\033[38;5;160m"
# define GREEN "\033[38;5;112m"
# define BLUE "\033[38;5;81m"
# define DEF "\033[0m"

class ICharacter;

class AMateria {

	protected:
		std::string _type;

	public:
		AMateria(); // Canonical form
		AMateria(AMateria const &copy); // Canonical form
		virtual ~AMateria(); // Canonical form
		AMateria &operator=(AMateria const &rhs); // Canonical form

		AMateria(std::string const &type);

		std::string const &getType() const; // Returns the materia type

		virtual AMateria *clone() const = 0;
		virtual void use(ICharacter &target);
};

#endif