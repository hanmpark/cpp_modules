/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hanmpark <hanmpark@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 10:54:27 by hanmpark          #+#    #+#             */
/*   Updated: 2023/11/30 16:46:39 by hanmpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"

class Dog : public Animal {

	public:
		Dog(); // Canonical form
		Dog(Dog const &copy); // Canonical form
		virtual ~Dog(); // Canonical form
		Dog &operator=(Dog const &rhs); // Canonical form

		void makeSound() const;
};

#endif