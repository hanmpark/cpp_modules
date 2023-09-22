/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hanmpark <hanmpark@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 11:53:50 by hanmpark          #+#    #+#             */
/*   Updated: 2023/09/22 15:26:29 by hanmpark         ###   ########.fr       */
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

	int		getRawBits(void) const;
	void	setRawBits(int const raw);

private:
	int					_fixedPointValue;
	static int const	_fractionalBits = 8;
};

#endif