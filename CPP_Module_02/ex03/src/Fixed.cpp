/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hanmpark <hanmpark@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 11:54:08 by hanmpark          #+#    #+#             */
/*   Updated: 2023/09/22 15:37:41 by hanmpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

#include <cmath>

/* ************************************************************************** */
/*                          Constructors / Destructor                         */
/* ************************************************************************** */

Fixed::Fixed(void) : _fixedPointValue(0) {
	// std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(Fixed const &copy) {
	// std::cout << "Copy constructor called" << std::endl;
	*this = copy;
}

Fixed::Fixed(int const d) : _fixedPointValue(d * (1 << _fractionalBits)) {
	// std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(float const f) : _fixedPointValue(std::roundf(f * (1 << _fractionalBits))) {
	// std::cout << "Float constructor called" << std::endl;
}

Fixed	&Fixed::operator=(Fixed const &rhs) {
	// std::cout << "Copy assignment operator called" << std::endl;
	_fixedPointValue = rhs.getRawBits();

	return *this;
}

Fixed::~Fixed() {
	// std::cout << "Destructor called" << std::endl;
}

/* ************************************************************************** */
/*                                   Methods                                  */
/* ************************************************************************** */

int	Fixed::getRawBits(void) const {
	return _fixedPointValue;
}

void	Fixed::setRawBits(int const raw) {
	_fixedPointValue = raw;
}

float	Fixed::toFloat(void) const {
	return static_cast<float>(this->getRawBits()) / (1 << _fractionalBits);
}

int	Fixed::toInt(void) const {
	return this->getRawBits() / (1 << _fractionalBits);
}

Fixed	&Fixed::min(Fixed &first, Fixed &second) {
	if (first < second) {
		return first;
	}
	return second;
}

Fixed const	&Fixed::min(Fixed const &first, Fixed const &second) {
	if (first < second) {
		return first;
	}
	return second;
}

Fixed	&Fixed::max(Fixed &first, Fixed &second) {
	if (first > second) {
		return first;
	}
	return second;
}

Fixed const	&Fixed::max(Fixed const &first, Fixed const &second) {
	if (first > second) {
		return first;
	}
	return second;
}

/* ************************************************************************** */
/*                              Operator overloads                            */
/* ************************************************************************** */

/* ******************************* Comparison ******************************* */

bool	Fixed::operator>(Fixed const &rhs) const {
	return this->getRawBits() > rhs.getRawBits();
}

bool	Fixed::operator<(Fixed const &rhs) const {
	return this->getRawBits() < rhs.getRawBits();
}

bool	Fixed::operator>=(Fixed const &rhs) const {
	return this->getRawBits() >= rhs.getRawBits();
}

bool	Fixed::operator<=(Fixed const &rhs) const {
	return this->getRawBits() <= rhs.getRawBits();
}

bool	Fixed::operator==(Fixed const &rhs) const {
	return this->getRawBits() == rhs.getRawBits();
}

bool	Fixed::operator!=(Fixed const &rhs) const {
	return this->getRawBits() != rhs.getRawBits();
}

/* ************************** Increment / Decrement ************************* */

Fixed	Fixed::operator+(Fixed const &rhs) const {
	return Fixed(this->toFloat() + rhs.toFloat());
}

Fixed	Fixed::operator-(Fixed const &rhs) const {
	return Fixed(this->toFloat() - rhs.toFloat());
}

Fixed	Fixed::operator*(Fixed const &rhs) const {
	return Fixed(this->toFloat() * rhs.toFloat());
}

Fixed	Fixed::operator/(Fixed const &rhs) const {
	return Fixed(this->toFloat() / rhs.toFloat());
}

Fixed	Fixed::operator++(int) {
	Fixed	postIncrement(*this);

	postIncrement._fixedPointValue = this->_fixedPointValue++;

	return postIncrement;
}

Fixed	&Fixed::operator++(void) {
	this->_fixedPointValue++;

	return *this;
}

Fixed	Fixed::operator--(int) {
	Fixed	postDecrement(*this);

	postDecrement._fixedPointValue = this->_fixedPointValue--;

	return postDecrement;
}

Fixed	&Fixed::operator--(void) {
	this->_fixedPointValue--;

	return *this;
}

std::ostream	&operator<<(std::ostream &o, Fixed const &fp) {
	o << fp.toFloat();

	return o;
}
