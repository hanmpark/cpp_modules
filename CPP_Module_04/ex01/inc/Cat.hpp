/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hanmpark <hanmpark@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 11:31:18 by hanmpark          #+#    #+#             */
/*   Updated: 2023/12/01 20:29:52 by hanmpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Cat : public Animal {

	private:
		Brain *_brain;

	public:
		Cat(); // Canonical form
		Cat(Cat const &copy); // Canonical form
		virtual ~Cat(); // Canonical form
		Cat &operator=(Cat const &rhs); // Canonical form

		void makeSound() const;
		void telepathy(int nbr) const;
};

#endif