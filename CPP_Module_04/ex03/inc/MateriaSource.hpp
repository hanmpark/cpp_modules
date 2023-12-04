/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hanmpark <hanmpark@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 15:05:53 by hanmpark          #+#    #+#             */
/*   Updated: 2023/11/30 16:47:58 by hanmpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include "AMateria.hpp"
# include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource {

	private:
		AMateria *_materias[4];

	public:
		MateriaSource(); // Canonical form
		MateriaSource(MateriaSource const &copy); // Canonical form
		virtual ~MateriaSource(); // Canonical form
		MateriaSource &operator=(MateriaSource const &rhs); // Canonical form

		AMateria *getMateria(std::string const &type);
		AMateria *createMateria(std::string const &type);
		void learnMateria(AMateria *);
};

#endif