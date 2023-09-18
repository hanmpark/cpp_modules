/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hanmpark <hanmpark@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 11:41:57 by hanmpark          #+#    #+#             */
/*   Updated: 2023/09/18 12:13:15 by hanmpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"

# define PURPLE "\033[38;5;134m"

class	ScavTrap : public ClapTrap {
public:
	ScavTrap();
	ScavTrap(ScavTrap const &rhs);
	ScavTrap	&operator=(ScavTrap const &rhs);
	~ScavTrap();

	ScavTrap(std::string Name);

	void	attack(const std::string &target);
	void	guardGate();
};

#endif