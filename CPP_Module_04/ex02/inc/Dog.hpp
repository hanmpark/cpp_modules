/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hanmpark <hanmpark@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 10:54:27 by hanmpark          #+#    #+#             */
/*   Updated: 2023/12/04 19:17:20 by hanmpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "AAnimal.hpp"
# include "Brain.hpp"

class Dog : public AAnimal {

	private:
		Brain *_brain;

	public:
		Dog(); // Canonical form
		Dog(Dog const &copy); // Canonical form
		virtual ~Dog(); // Canonical form
		Dog &operator=(Dog const &rhs); // Canonical form

		void makeSound() const;
		void telepathy(int nbr) const;
};

#endif