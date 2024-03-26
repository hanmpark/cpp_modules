/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hanmpark <hanmpark@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 13:03:57 by hanmpark          #+#    #+#             */
/*   Updated: 2024/03/26 15:08:29 by hanmpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP
# define RPN_HPP

# include <iostream>
# include <stack>
# include <cctype>

# define NB_OP 4

using std::cout;
using std::endl;
using std::cerr;
using std::string;

class RPN {
private:
	std::stack<int>	_stack;

	bool	isOperator(char const &c) const;
	void	chooseOperation(char const &operand);
	double	add(int a, int b);
	double	substract(int a, int b);
	double	divide(int a, int b);
	double	multiply(int a, int b);

	typedef double	(RPN::*t_ft)(int a, int b);
	typedef struct s_op {
		char	c;
		t_ft	ft;
	}	t_op;

public:
	RPN();
	RPN(RPN const &copy);
	~RPN();
	RPN	&operator=(RPN const &rhs);

	// Method

	void	calculate(string const &s);

	// Exceptions

	class NumberOperandsException : public std::exception {
	public:
		virtual char const	*what() const throw();
	};
	class FormatException : public std::exception {
	public:
		virtual char const	*what() const throw();
	};
};

#endif