/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hanmpark <hanmpark@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 16:02:43 by hanmpark          #+#    #+#             */
/*   Updated: 2023/09/14 21:02:06 by hanmpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>

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

	unsigned int const	&getAttackDamage() const;
	unsigned int const	&getHitPoints() const;
	std::string	const	&getName() const;

private:
	std::string		_Name;
	unsigned int	_HitPoints;
	unsigned int	_EnergyPoints;
	unsigned int	_AttackDamage;
};

#endif