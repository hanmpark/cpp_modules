/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hanmpark <hanmpark@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 11:54:17 by hanmpark          #+#    #+#             */
/*   Updated: 2023/09/14 15:07:21 by hanmpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

int	main(void) {
	if (bsp(Point(0, 0), Point(4, 1), Point(1, 3), Point(1.9, 2.3))) {
		std::cout << "Point is INSIDE the triangle" << std::endl;
	} else {
		std::cout << "Point is OUTSIDE the triangle" << std::endl;
	}

	return 0;
}
