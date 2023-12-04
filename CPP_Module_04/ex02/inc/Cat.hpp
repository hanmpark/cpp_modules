/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hanmpark <hanmpark@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 11:31:18 by hanmpark          #+#    #+#             */
/*   Updated: 2023/12/04 19:17:14 by hanmpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "AAnimal.hpp"
# include "Brain.hpp"

class Cat : public AAnimal {

	private:
		Brain *_brain;

	public:
		Cat();
		Cat(Cat const &copy);
		virtual ~Cat();
		Cat &operator=(Cat const &rhs);

		void makeSound() const;
		void telepathy(int nbr) const;
 };

#endif