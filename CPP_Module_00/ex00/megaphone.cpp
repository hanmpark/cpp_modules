/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hanmpark <hanmpark@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 16:18:54 by hanmpark          #+#    #+#             */
/*   Updated: 2023/08/30 12:04:15 by hanmpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstring>

std::string	make_loud_noise(std::string simple_noise) {

	for (size_t i = 0; i < simple_noise.length(); i++) {
		simple_noise[i] = toupper(simple_noise[i]);
	}

	return simple_noise;
}

int	main(int argc, char **argv) {

	std::string	noise;

	if (argc < 2) {
		noise = "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	}
	else {
		for (int i = 1; i < argc; i++) {
			noise += make_loud_noise(argv[i]);
		}
	}

	std::cout << noise << std::endl;

	return 0;
}
