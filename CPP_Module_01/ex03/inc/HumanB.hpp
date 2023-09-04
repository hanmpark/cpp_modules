/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hanmpark <hanmpark@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 23:28:11 by hanmpark          #+#    #+#             */
/*   Updated: 2023/09/05 00:35:13 by hanmpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

# include "Weapon.hpp"

class	HumanB {

public:

	HumanB(std::string name);

	void	setWeapon(Weapon &weapon);
	void	attack(void) const;

private:

	std::string	_name;
	Weapon		*_weapon;

};

#endif