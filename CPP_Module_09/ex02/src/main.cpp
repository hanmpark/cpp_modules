/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hanmpark <hanmpark@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 15:54:23 by hanmpark          #+#    #+#             */
/*   Updated: 2024/03/30 01:13:28 by hanmpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int	main(int argc, char **argv) {
	if (argc < 2) {
		cerr << "Error: wrong number of arguments." << endl;
		return 1;
	}
	try {
		PmergeMe	sort(argc, argv);

		sort.executeMergeInsertion();
	} catch (std::exception &e) {
		cerr << "Error: " << e.what() << endl;
		return 1;
	}
	return 0;
}
