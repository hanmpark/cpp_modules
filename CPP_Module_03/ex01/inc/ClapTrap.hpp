/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hanmpark <hanmpark@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 16:02:43 by hanmpark          #+#    #+#             */
/*   Updated: 2023/09/18 12:13:18 by hanmpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>

# define GREEN "\033[38;5;73m"
# define DEF "\033[0m"

class ClapTrap {
public:
	ClapTrap();
	ClapTrap(ClapTrap const &rhs);
	ClapTrap	&operator=(ClapTrap const &rhs);
	~ClapTrap();

	ClapTrap(std::string Name);

	void	attack(const std::string &target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);

	std::string	const	&getName() const;
	unsigned int const	&getHitPoints() const;
	unsigned int const	&getEnergyPoints() const;
	unsigned int const	&getAttackDamage() const;

protected:
	std::string		_Name;
	unsigned int	_HitPoints;
	unsigned int	_EnergyPoints;
	unsigned int	_AttackDamage;
};

#endif