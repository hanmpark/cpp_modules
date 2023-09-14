/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hanmpark <hanmpark@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 11:54:17 by hanmpark          #+#    #+#             */
/*   Updated: 2023/09/14 15:14:20 by hanmpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

int	main(void) {
	Point const	a(0, 0);
	Point const	b(4, 1);
	Point const	c(1, 3);
	Point const	d(1.9, 2.3);

	if (bsp(a, b, c, d)) {
		std::cout << "Point is INSIDE the triangle" << std::endl;
	} else {
		std::cout << "Point is OUTSIDE the triangle" << std::endl;
	}

	return 0;
}
