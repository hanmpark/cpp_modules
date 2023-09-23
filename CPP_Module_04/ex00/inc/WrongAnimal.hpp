/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hanmpark <hanmpark@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 19:11:16 by hanmpark          #+#    #+#             */
/*   Updated: 2023/09/23 19:46:28 by hanmpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <iostream>

# define PURPLE "\033[38;5;93m"
# define DEF "\033[0m"

class WrongAnimal {
public:
	WrongAnimal();
	WrongAnimal(std::string const &type);
	WrongAnimal(WrongAnimal const &copy);
	WrongAnimal &operator=(WrongAnimal const &rhs);
	~WrongAnimal();

	std::string const getType() const;
	void makeSound() const;

protected:
	std::string _type;
};

#endif