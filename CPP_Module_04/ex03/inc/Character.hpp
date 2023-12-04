/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hanmpark <hanmpark@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 14:07:52 by hanmpark          #+#    #+#             */
/*   Updated: 2023/12/04 16:05:43 by hanmpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include "AMateria.hpp"
# include "ICharacter.hpp"

class Character : public ICharacter {

	private:
		AMateria *_inventory[4];
		AMateria **_ground;
		std::string _name;

		void updateGround(AMateria *);
		int countGroundItem() const;
		void reorderItems();

	public:
		Character(); // Canonical form
		Character(Character const &copy); // Canonical form
		virtual ~Character(); // Canonical form
		Character &operator=(Character const &rhs); // Canonical form

		Character(std::string const &name);

		std::string const &getName() const;
		void equip(AMateria *m);
		void unequip(int idx);
		void use(int idx, ICharacter &target);
		void checkground() const;
};

#endif