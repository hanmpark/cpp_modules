/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hanmpark <hanmpark@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 11:53:50 by hanmpark          #+#    #+#             */
/*   Updated: 2023/09/22 17:32:38 by hanmpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class	Fixed {
public:
	Fixed(void);
	Fixed(Fixed const &copy);
	Fixed	&operator=(Fixed const &rhs);
	~Fixed(void);

	Fixed(int const d);
	Fixed(float const f);

	int		getRawBits(void) const;
	void	setRawBits(int const raw);

	float	toFloat(void) const;
	int		toInt(void) const;

	bool	operator>(Fixed const &rhs) const;
	bool	operator<(Fixed const &rhs) const;
	bool	operator>=(Fixed const &rhs) const;
	bool	operator<=(Fixed const &rhs) const;
	bool	operator==(Fixed const &rhs) const;
	bool	operator!=(Fixed const &rhs) const;

	Fixed	operator+(Fixed const &rhs) const;
	Fixed	operator-(Fixed const &rhs) const;
	Fixed	operator*(Fixed const &rhs) const;
	Fixed	operator/(Fixed const &rhs) const;

	Fixed	operator++(int);
	Fixed	&operator++(void);
	Fixed	operator--(int);
	Fixed	&operator--(void);

	static Fixed		&min(Fixed &first, Fixed &second);
	static Fixed const	&min(Fixed const &first, Fixed const &second);
	static Fixed		&max(Fixed &first, Fixed &second);
	static Fixed const	&max(Fixed const &first, Fixed const &second);

private:
	int					_fixedPointValue;
	static int const	_fractionalBits = 8;
};

std::ostream	&operator<<(std::ostream &o, Fixed const &fp);

#endif