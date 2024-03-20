/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hanmpark <hanmpark@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 18:42:39 by hanmpark          #+#    #+#             */
/*   Updated: 2024/03/20 09:37:12 by hanmpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <iostream>
# include <list>
# include <algorithm>

template<typename T>
void	easyfind(T const &container, int integer) {
	if (std::find(container.begin(), container.end(), integer) != container.end())
		std::cout << "Found occurence" << std::endl;
	else
		throw std::exception();
}

#endif