/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hanmpark <hanmpark@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 10:23:06 by hanmpark          #+#    #+#             */
/*   Updated: 2023/12/04 19:17:03 by hanmpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_HPP
# define AANIMAL_HPP

# include <iostream>

class AAnimal {

	protected:
		std::string _type;

	public:
		AAnimal(); // Canonical form
		AAnimal(AAnimal const &copy); // Canonical form
		virtual ~AAnimal(); // Canonical form
		AAnimal &operator=(AAnimal const &rhs); // Canonical form

		AAnimal(std::string type);

		std::string const getType() const;
		virtual void makeSound() const = 0;
		virtual void telepathy(int nbr) const = 0;
};

#endif