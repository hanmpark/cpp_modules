/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hanmpark <hanmpark@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 18:13:30 by hanmpark          #+#    #+#             */
/*   Updated: 2023/09/25 12:48:14 by hanmpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"
# include "Brain.hpp"

# define BLUE "\033[38;5;111m"

class Cat : public Animal {
public:
	Cat();
	Cat(Cat const &copy);
	Cat &operator=(Cat const &rhs);
	~Cat();

	void makeSound() const;
	std::string const getBrainIdea(int i) const;
	Brain const *getBrain() const;
	void setBrainIdea(int i, std::string idea);

private:
	Brain *_catBrain;
};

#endif