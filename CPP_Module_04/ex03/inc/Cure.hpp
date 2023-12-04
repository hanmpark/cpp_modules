/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hanmpark <hanmpark@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 13:52:37 by hanmpark          #+#    #+#             */
/*   Updated: 2023/11/30 16:47:44 by hanmpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

# include "AMateria.hpp"

class Cure : public AMateria {

	public:
		Cure(); // Canonical form
		Cure(Cure const &copy); // Canonical form
		virtual ~Cure(); // Canonical form
		Cure &operator=(Cure const &rhs); // Canonical form

		virtual AMateria *clone() const;
		virtual void use(ICharacter &target);
};

#endif