/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hanmpark <hanmpark@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 13:31:51 by hanmpark          #+#    #+#             */
/*   Updated: 2023/12/01 20:11:56 by hanmpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>

class Brain {

	private:
		std::string _ideas[100];

	public:
		Brain(); // Canonical form
		Brain(Brain const &copy); // Canonical form
		virtual ~Brain(); // Canonical form
		Brain &operator=(Brain const &rhs); // Canonical form

		Brain(std::string const &animalType);

		void sayIdeas(int nbr) const;
};

#endif