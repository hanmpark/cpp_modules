/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hanmpark <hanmpark@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 13:17:26 by hanmpark          #+#    #+#             */
/*   Updated: 2023/11/30 16:47:34 by hanmpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

# include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal {

	public:
		WrongCat(); // Canonical form
		WrongCat(WrongCat const &copy); // Canonical form
		virtual ~WrongCat(); // Canonical form
		WrongCat &operator=(WrongCat const &rhs); // Canonical form

		void makeSound() const;
};


#endif