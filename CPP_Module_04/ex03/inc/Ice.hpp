/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hanmpark <hanmpark@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 13:33:38 by hanmpark          #+#    #+#             */
/*   Updated: 2023/11/30 16:47:48 by hanmpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

# include "AMateria.hpp"

class Ice : public AMateria {

	public:
		Ice(); // Canonical form
		Ice(Ice const &copy); // Canonical form
		virtual ~Ice(); // Canonical form
		Ice &operator=(Ice const &rhs); // Canonical form

		virtual AMateria *clone() const;
		virtual void use(ICharacter &target);
};

#endif