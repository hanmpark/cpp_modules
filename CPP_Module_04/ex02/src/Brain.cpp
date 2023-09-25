/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hanmpark <hanmpark@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 20:50:00 by hanmpark          #+#    #+#             */
/*   Updated: 2023/09/25 10:46:51 by hanmpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain() {
	std::cout << "[Brain] default constructor called" << std::endl;
	for (int i = 0; i < NB_OF_IDEAS; i++) {
		_ideas[i] = "I want to eat";
	}
}

Brain::Brain(Brain const &copy) {
	std::cout << "[Brain] copy constructor called" << std::endl;
	*this = copy;
}

Brain &Brain::operator=(Brain const &rhs) {
	std::cout << "[Brain] copy assignment operator called" << std::endl;
	for (int i = 0; i < NB_OF_IDEAS; i++) {
		_ideas[i] = rhs.getIdea(i);
	}
	return *this;
}

Brain::~Brain() {
	std::cout << "[Brain] destructor called" << std::endl;
}

std::string const Brain::getIdea(int i) const {
	if (i >= 0 && i <= 100) {
		return _ideas[i];
	} else {
		std::cout << "[Brain] Missing intellectual capacity" << std::endl;
	}
	return "No ideas found";
}

void Brain::setIdea(int i, std::string idea) {
	if (i >= 0 && i <= 100) {
		_ideas[i] = idea;
	} else {
		std::cout << "[Brain] Missing intellectual capacity" << std::endl;
	}
}
