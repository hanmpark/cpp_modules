/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hanmpark <hanmpark@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 16:56:03 by hanmpark          #+#    #+#             */
/*   Updated: 2023/09/04 18:47:39 by hanmpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>

/* Colors */

# define RED "\033[38;5;204m"
# define GREEN "\033[38;5;80m"
# define BLUE "\033[38;5;32m"
# define DEF "\033[0m"

/* Class */

class	Zombie {

public:

	~Zombie(void);

	void		setName(std::string);

	void	announce(void);

private:

	std::string	_name;

};

/* Prototypes */

Zombie	*zombieHorde(int N, std::string name);

#endif