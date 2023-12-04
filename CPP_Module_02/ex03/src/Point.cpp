/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hanmpark <hanmpark@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 14:23:39 by hanmpark          #+#    #+#             */
/*   Updated: 2023/12/04 17:20:27 by hanmpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point(void) : _x(0), _y(0) {}

Point::Point(float const x, float const y) : _x(x), _y(y) {}

Point::Point(Point const &rhs) : _x(rhs._x), _y(rhs._y) {}

Point &Point::operator=(Point const &rhs) {

	(Fixed)_x = rhs._x;
	(Fixed)_y = rhs._y;
	return *this;
}

Point::~Point(void) {}

Fixed const Point::getX(void) const {

	return _x;
}

Fixed const Point::getY(void) const {

	return _y;
}
