/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hanmpark <hanmpark@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 13:14:07 by hanmpark          #+#    #+#             */
/*   Updated: 2023/11/29 13:17:20 by hanmpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <iostream>

class WrongAnimal {

	protected:
		std::string _type;

	public:
		WrongAnimal(); // Canonical form
		WrongAnimal(WrongAnimal const &copy); // Canonical form
		virtual ~WrongAnimal(); // Canonical form
		WrongAnimal &operator=(WrongAnimal const &rhs); // Canonical form

		WrongAnimal(std::string type);

		std::string const getType() const;
		void makeSound() const;
};

#endif