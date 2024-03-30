/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sortVector.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hanmpark <hanmpark@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/29 21:49:16 by hanmpark          #+#    #+#             */
/*   Updated: 2024/03/30 11:02:34 by hanmpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

void	PmergeMe::insertionSort(vector<unsigned int> &nums) {
	int	n = nums.size();

	for (int i = 1; i < n; i++) {
		unsigned int	key = nums[i];
		int	j = i - 1;
		while (j >= 0 && nums[j] > key) {
			nums[j + 1] = nums[j];
			j--;
		}
		nums[j + 1] = key;
	}
}

void	PmergeMe::mergeInsertionSort(vector<unsigned int> &nums) {
	int	n = nums.size();

	if (n <= _threshold) {
		insertionSort(nums);
	} else {
		vector<unsigned int>	left(nums.begin(), nums.begin() + n / 2);
		vector<unsigned int>	right(nums.begin() + n / 2, nums.end());

		mergeInsertionSort(left);
		mergeInsertionSort(right);

		size_t	i = 0, j = 0, k = 0;

		while (i < left.size() && j < right.size()) {
			if (left[i] < right[j]) {
				nums[k] = left[i];
				i++;
			} else {
				nums[k] = right[j];
				j++;
			}
			k++;
		}
		while (i < left.size()) {
			nums[k++] = left[i++];
		}
		while (j < right.size()) {
			nums[k++] = right[j++];
		}
	}
}
