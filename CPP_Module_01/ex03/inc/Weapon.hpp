/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hanmpark <hanmpark@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 23:27:00 by hanmpark          #+#    #+#             */
/*   Updated: 2023/09/12 11:40:54 by hanmpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <iostream>

class	Weapon {
public:
	Weapon(std::string weapon);
	~Weapon(void);

	std::string const	&getType(void) const;
	void				setType(std::string newValue);

private:
	std::string	type;
};

#endif