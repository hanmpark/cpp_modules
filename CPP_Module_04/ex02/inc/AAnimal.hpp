/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hanmpark <hanmpark@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 10:23:06 by hanmpark          #+#    #+#             */
/*   Updated: 2023/12/01 20:25:37 by hanmpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_HPP
# define AANIMAL_HPP

# include <iostream>

class Animal {

	protected:
		std::string _type;

	public:
		Animal(); // Canonical form
		Animal(Animal const &copy); // Canonical form
		virtual ~Animal(); // Canonical form
		Animal &operator=(Animal const &rhs); // Canonical form

		Animal(std::string type);

		std::string const getType() const;
		virtual void makeSound() const = 0;
		virtual void telepathy(int nbr) const = 0;
};

#endif