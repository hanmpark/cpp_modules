/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hanmpark <hanmpark@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 18:11:56 by hanmpark          #+#    #+#             */
/*   Updated: 2023/09/23 19:01:15 by hanmpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"

# define GREEN "\033[38;5;35m"

class Dog : public Animal {
public:
	Dog();
	Dog(Dog const &copy);
	Dog &operator=(Dog const &rhs);
	~Dog();

	void makeSound() const; 
};

#endif