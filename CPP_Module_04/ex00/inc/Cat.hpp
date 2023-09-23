/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hanmpark <hanmpark@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 18:13:30 by hanmpark          #+#    #+#             */
/*   Updated: 2023/09/23 18:57:04 by hanmpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"

# define BLUE "\033[38;5;111m"

class Cat : public Animal {
public:
	Cat();
	Cat(Cat const &copy);
	Cat &operator=(Cat const &rhs);
	~Cat();

	void makeSound() const;
};

#endif