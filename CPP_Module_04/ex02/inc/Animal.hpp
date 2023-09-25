/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hanmpark <hanmpark@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 18:09:21 by hanmpark          #+#    #+#             */
/*   Updated: 2023/09/25 13:00:38 by hanmpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>

# define YELLOW "\033[38;5;184m"
# define DEF "\033[0m"

class Animal {
public:
	Animal();
	Animal(std::string const &type);
	Animal(Animal const &copy);
	Animal &operator=(Animal const &rhs);
	virtual ~Animal();

	std::string const getType() const;
	virtual void makeSound() const = 0;

protected:
	std::string _type;
};

#endif