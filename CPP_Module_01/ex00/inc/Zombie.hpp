/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hanmpark <hanmpark@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 16:56:03 by hanmpark          #+#    #+#             */
/*   Updated: 2023/12/04 17:05:56 by hanmpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>

# define RED "\033[38;5;204m"
# define GREEN "\033[38;5;80m"
# define DEF "\033[0m"

class Zombie {

	public:
		Zombie(void);
		~Zombie(void);

		void setName(std::string);
		std::string getName(void) const;

		void announce(void) const;

	private:
		std::string _name;
};

/* Prototypes */

Zombie *newZombie(std::string name);
void randomChump(std::string name);

#endif