/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hanmpark <hanmpark@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 15:26:13 by hanmpark          #+#    #+#             */
/*   Updated: 2024/03/30 01:29:37 by hanmpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
# define PMERGEME_HPP

# include <iostream>
# include <list>
# include <vector>
# include <cctype>
# include <algorithm>
# include <limits>

using std::cout;
using std::endl;
using std::cerr;
using std::string;
using std::vector;
using std::list;

class PmergeMe {
private:
	static const int		_threshold = 15;
	double					_timeVec;
	double					_timeLst;
	vector<unsigned int>	_vec;
	list<unsigned int>		_lst;

	// Private methods

	void	isUnsignedInteger(const string str);
	void	checkDuplicate(vector<unsigned int> nums);

	void	insertionSort(vector<unsigned int> &nums);
	void	mergeInsertionSort(vector<unsigned int> &nums);
	void	insertionSort(list<unsigned int> &nums);
	void	mergeInsertionSort(list<unsigned int> &nums);

	PmergeMe();

public:
	PmergeMe(PmergeMe const &copy);
	~PmergeMe();
	PmergeMe	&operator=(PmergeMe const &rhs);

	PmergeMe(int const &argc, char **argv);

	// Public methods

	void	executeMergeInsertion();

	// Exceptions

	class NotUnsignedIntegerException : public std::exception {
	public:
		virtual char const	*what() const throw();
	};
	class FoundDuplicateException : public std::exception {
	public:
		virtual char const	*what() const throw();
	};
};

std::ostream	&operator<<(std::ostream &o, vector<unsigned int> &vec);
std::ostream	&operator<<(std::ostream &o, list<unsigned int> &lst);

#endif