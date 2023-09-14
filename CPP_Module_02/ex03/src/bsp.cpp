/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hanmpark <hanmpark@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 09:13:16 by hanmpark          #+#    #+#             */
/*   Updated: 2023/09/14 15:06:42 by hanmpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

static Fixed	abs(Fixed x) {
	if (x < 0) {
		return x * -1;
	}
	return x;
}

// Using Gauss' formula to calculate the area of a given polygon, in this case a triangle
static Fixed	getArea(Point const a, Point const b, Point const c) {
	return (((a.getX() * (b.getY() - c.getY())) \
		+ (b.getX() * (c.getY() - a.getY())) \
		+ (c.getX() * (a.getY() - b.getY()))) / 2);
}

bool	bsp(Point const a, Point const b, Point const c, Point const point) {
	Fixed	A_abc = abs(getArea(a, b, c));
	Fixed	A_dbc = abs(getArea(point, b, c));
	Fixed	A_dca = abs(getArea(point, c, a));
	Fixed	A_dab = abs(getArea(point, a, b));

	Fixed	u = A_dbc / A_abc;
	Fixed	v = A_dca / A_abc;
	Fixed	w = A_dab / A_abc;

	return u + v + w == 1;
}
