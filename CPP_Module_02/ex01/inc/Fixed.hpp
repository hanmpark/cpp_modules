/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hanmpark <hanmpark@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 11:53:50 by hanmpark          #+#    #+#             */
/*   Updated: 2023/09/13 11:13:41 by hanmpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class	Fixed {
public:
	Fixed(void);
	Fixed(Fixed const &rhs);
	Fixed	&operator=(Fixed const &rhs);
	~Fixed(void);

	Fixed(int const d);
	Fixed(float const f);

	int		getRawBits(void) const;
	void	setRawBits(int const raw);

	float	toFloat(void) const;
	int		toInt(void) const;

private:
	int					_fixedPointValue;
	static int const	_fractionalBits = 8;
};

std::ostream	&operator<<(std::ostream &o, Fixed const &fp);

#endif