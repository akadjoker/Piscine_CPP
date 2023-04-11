/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrosa-do <lrosa-do@student.42lisboa>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/05 18:18:02 by lrosa-do          #+#    #+#             */
/*   Updated: 2023/04/10 18:32:06 by lrosa-do         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

RPN::RPN()
{
}

RPN::~RPN()
{
}

RPN::RPN(const RPN &origin)
{
	*this = origin;
}

RPN &RPN::operator=(const RPN &o)
{
	if (this == &o)
	{
		return *this;
	}
	operands = o.operands;
	return *this;
}

bool RPN::isOperator(const std::string &token)
{
	return token == "+" || token == "-" || token == "*" || token == "/";
}

int RPN::evaluate(const std::string &expr)
{
	std::istringstream iss(expr);
	std::string token;

	while (iss >> token)
	{
		if (isOperator(token))
		{
			if (operands.size() < 2)
			{
				throw std::runtime_error("Error: Not enough operands.");
			}

			int b = operands.top();
			operands.pop();
			int a = operands.top();
			operands.pop();

			if (token == "+")
			{
				operands.push(a + b);
			}
			else if (token == "-")
			{
				operands.push(a - b);
			}
			else if (token == "*")
			{
				operands.push(a * b);
			}
			else
			{
				if (b == 0)
				{
					throw std::runtime_error("Error: Division by zero.");
				}
				operands.push(a / b);
			}
		}
		else
		{
			int number;
			try
			{
				std::istringstream iss(token);
            	iss >> number;
			}
			catch (const std::invalid_argument &)
			{
				throw std::runtime_error("Error: Invalid token.");
			}

			if (number < 0 || number >= 10)
			{
				throw std::runtime_error("Error: Number out of range.");
			}

			operands.push(number);
		}
	}

	if (operands.size() != 1)
	{
		throw std::runtime_error("Error: Invalid expression.");
	}

	return operands.top();
}