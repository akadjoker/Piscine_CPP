/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrosa-do <lrosa-do@student.42lisboa>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/05 18:18:02 by lrosa-do          #+#    #+#             */
/*   Updated: 2023/04/10 18:29:25 by lrosa-do         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#ifndef RPN_H
# define RPN_H

#include <iostream>
#include <sstream>
#include <stack>
#include <string>
#include <sstream>

class RPN
{
private:
	 std::stack<int> operands;
public:
	RPN();
	RPN(const RPN& origin);
	RPN & operator=(const RPN& origin);
	~RPN();
	int evaluate(const std::string &expr) ;
private:
	bool isOperator(const std::string &token);

};

#endif
