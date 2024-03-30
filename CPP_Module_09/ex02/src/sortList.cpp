/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sortList.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hanmpark <hanmpark@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/29 21:59:42 by hanmpark          #+#    #+#             */
/*   Updated: 2024/03/30 01:19:06 by hanmpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

void	PmergeMe::insertionSort(list<unsigned int> &nums) {
	list<unsigned int>::iterator	it, jt, tmp;

	for (it = nums.begin(); it != nums.end(); ++it) {
		unsigned int key = *it;
		jt = it;
		tmp = it;

		while (jt != nums.begin() && *(--jt) > key) {
			*tmp = *jt;
			tmp--;
		}
		*tmp = key;
	}
}

void	PmergeMe::mergeInsertionSort(list<unsigned int> &nums) {
	int	n = nums.size();

	if (n <= _threshold) {
		insertionSort(nums);
	} else {
		list<unsigned int>				left, right;
		list<unsigned int>::iterator	midIt = nums.begin();

		std::advance(midIt, n / 2);
		left.splice(left.begin(), nums, nums.begin(), midIt);
		right.splice(right.begin(), nums, midIt, nums.end());

		mergeInsertionSort(left);
		mergeInsertionSort(right);

		list<unsigned int>::iterator	itLeft = left.begin(), itRight = right.begin();

		while (itLeft != left.end() && itRight != right.end()) {
			if (*itLeft < *itRight) {
				nums.push_back(*itLeft);
				itLeft++;
			} else {
				nums.push_back(*itRight);
				itRight++;
			}
		}
		while (itLeft != left.end()) {
			nums.push_back(*itLeft);
			itLeft++;
		}
		while (itRight != right.end()) {
			nums.push_back(*itRight);
			itRight++;
		}
	}
}
