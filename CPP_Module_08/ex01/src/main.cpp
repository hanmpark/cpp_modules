/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hanmpark <hanmpark@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 10:32:42 by hanmpark          #+#    #+#             */
/*   Updated: 2024/03/20 15:46:01 by hanmpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int	generateRand() {
	return std::rand();
}

int	main() {
	{
		std::cout << BOLD PURPLE "Subject main:" DEF << std::endl;
		Span sp = Span(5);
		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
		std::cout << sp << std::endl;
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl << std::endl;
	}
	try {
		std::vector<int>	vec(10000);
	
		std::srand(time(NULL));
		std::generate(vec.begin(), vec.end(), std::rand);
	
		Span	sp1 = Span(vec.size());
		sp1.addNumber(vec.begin(), vec.end());

		std::cout << BOLD PURPLE "Test for multiple add:" DEF << std::endl;
		std::cout << sp1 << std::endl << std::endl;
	} catch (std::exception &e) {
		std::cerr << "Error: " << e.what() << std::endl;
	}
	try {
		std::cout << BOLD PURPLE "Test for OutOfBounds exception:" DEF << std::endl;
		Span	sp2(0);
		sp2.addNumber(1);
	} catch (std::exception &e) {
		std::cerr << "Error: " << e.what() << std::endl;
	}
	std::cout << std::endl;
	try {
		std::cout << BOLD PURPLE "Test for exceptions:" DEF << std::endl;
		Span	sp2(0);
		std::cout << sp2.longestSpan() << std::endl;
	} catch (std::exception &e) {
		std::cerr << "Error: " << e.what() << std::endl;
	}
	return 0;
}
