/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hanmpark <hanmpark@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 19:26:31 by hanmpark          #+#    #+#             */
/*   Updated: 2023/09/23 19:48:06 by hanmpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

# include "WrongAnimal.hpp"

# define ROSE "\033[38;5;165m"

class WrongCat : public WrongAnimal {
public:
	WrongCat();
	WrongCat(WrongCat const &copy);
	WrongCat &operator=(WrongCat const &rhs);
	~WrongCat();

	void makeSound() const;
};

#endif