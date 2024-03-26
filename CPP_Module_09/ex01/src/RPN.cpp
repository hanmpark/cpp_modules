/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hanmpark <hanmpark@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 13:04:55 by hanmpark          #+#    #+#             */
/*   Updated: 2024/03/26 15:24:28 by hanmpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

// Canonical form

RPN::RPN() {}

RPN::RPN(RPN const &copy) {
	*this = copy;
}

RPN::~RPN() {}

RPN	&RPN::operator=(RPN const &rhs) {
	if (this != &rhs) {
		_stack = rhs._stack;
	}
	return *this;
}

// private methods

double	RPN::add(int a, int b) {
	return static_cast<double>(a) + static_cast<double>(b);
}

double	RPN::substract(int a, int b) {
	return static_cast<double>(a) - static_cast<double>(b);
}

double	RPN::divide(int a, int b) {
	return static_cast<double>(a) / static_cast<double>(b);
}

double	RPN::multiply(int a, int b) {
	return static_cast<double>(a) * static_cast<double>(b);
}

bool	RPN::isOperator(char const &c) const {
	return c == '+' || c == '-' || c == '/' || c == '*';
}

void	RPN::chooseOperation(char const &operand) {
	static t_op const	op[] = {
		{'+', &RPN::add},
		{'-', &RPN::substract},
		{'/', &RPN::divide},
		{'*', &RPN::multiply}
	};

	for (int i = 0; i < NB_OP; i++) {
		if (operand == op[i].c) {
			if (_stack.size() < 2) {
				throw NumberOperandsException();
			}
			int	b = _stack.top();
			_stack.pop();
			int	a = _stack.top();
			_stack.pop();
			_stack.push((this->*op[i].ft)(a, b));
		}
	}
}

// Public method

void	RPN::calculate(string const &s) {
	bool	pushed = false;

	for (size_t i = 0; i < s.length(); i++) {
		if (!pushed && std::isdigit(s.at(i)) && s.at(i) != '0') {
			pushed = true;
			_stack.push(s.at(i) - '0');
		} else if (!pushed && isOperator(s.at(i))) {
			pushed = true;
			chooseOperation(s.at(i));
		} else if (!pushed || (pushed && s.at(i) != ' ') || (pushed && i + 1 == s.length())) {
			throw FormatException();
		} else {
			pushed = false;
		}
	}
	if (_stack.size() == 1 && s.length() != 1) {
		cout << _stack.top() << endl;
	} else {
		throw FormatException();
	}
}

// Exceptions

char const	*RPN::NumberOperandsException::what() const throw() {
	return "wrong number of operands.";
}

char const	*RPN::FormatException::what() const throw() {
	return "format error.";
}
