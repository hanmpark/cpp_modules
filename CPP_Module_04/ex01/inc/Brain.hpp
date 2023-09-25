/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hanmpark <hanmpark@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 20:44:28 by hanmpark          #+#    #+#             */
/*   Updated: 2023/09/25 12:28:50 by hanmpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>

# define NB_OF_IDEAS 100

class Brain {
public:
	Brain();
	Brain(Brain const &copy);
	Brain &operator=(Brain const &rhs);
	~Brain();

	std::string const getIdea(int i) const;
	void setIdea(int i, std::string idea);

private:
	std::string _ideas[NB_OF_IDEAS];
};

#endif